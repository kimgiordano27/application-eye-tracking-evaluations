/*
FUNCTION_NAME: UnityEngine.Animator$$GetGoalRotation
ENTRY_POINT: 03554708
PROGRAM: vrlegs-libil2cpp.so
SCORE: 169
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_14;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_6;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_6
*/


void UnityEngine_Animator__GetGoalRotation(undefined1 param_1 [16],float param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  undefined *puVar11;
  bool bVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  long lVar19;
  undefined8 uVar20;
  ulong uVar21;
  ulong uVar22;
  char cVar23;
  int in_w8;
  undefined4 *puVar24;
  long lVar25;
  long lVar26;
  code *pcVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  uint uVar32;
  long lVar33;
  long *unaff_x19;
  int *unaff_x20;
  undefined8 uVar34;
  long *plVar35;
  long *unaff_x22;
  long lVar36;
  long *plVar37;
  long lVar38;
  long *unaff_x28;
  uint uVar39;
  float fVar40;
  float fVar41;
  undefined4 uVar42;
  float fVar43;
  ulong uVar44;
  ulong uVar45;
  float fVar46;
  uint uVar47;
  ulong uVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fStack0000000000000020;
  float fStack0000000000000024;
  uint uStack0000000000000028;
  float fStack000000000000002c;
  uint in_stack_00000030;
  float fStack0000000000000038;
  float fStack0000000000000040;
  int iStack000000000000006c;
  float fStack0000000000000070;
  uint uStack0000000000000074;
  float fStack0000000000000078;
  long in_stack_00000080;
  float fStack000000000000008c;
  uint uStack0000000000000098;
  float fStack000000000000009c;
  float fStack00000000000000a0;
  float fStack00000000000000a8;
  undefined8 uStack00000000000000b8;
  uint in_stack_000000c0;
  float fStack00000000000000c4;
  float fStack00000000000000c8;
  float fStack00000000000000d0;
  int iStack00000000000000d4;
  float fStack00000000000000d8;
  float fStack00000000000000dc;
  undefined8 uStack00000000000000e8;
  float fStack00000000000000fc;
  float fStack0000000000000100;
  float fStack0000000000000104;
  int iStack0000000000000128;
  undefined4 uStack000000000000012c;
  uint uStack0000000000000158;
  long *in_stack_00000170;
  undefined8 in_stack_00000178;
  float fStack0000000000000180;
  float fStack0000000000000184;
  float in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  float in_stack_000001a0;
  undefined8 in_stack_000017b0;
  undefined8 in_stack_000017b8;
  float in_stack_000017c0;
  float in_stack_000017d8;
  
  puVar11 = OVRPlugin_OVRP_1_31_0_TypeInfo;
  if (in_w8 == 3) {
    (**(code **)(*unaff_x19 + 0x918))();
    goto LAB_03554724;
  }
  lVar19 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
  if (*(int *)(lVar19 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar19 = *(long *)puVar11;
  }
  plVar37 = (long *)OVRPlugin_Media_TypeInfo;
  lVar19 = **(long **)(lVar19 + 0xb8);
  if (lVar19 == 0) goto LAB_035574b8;
  if (*(uint *)(lVar19 + 0x18) <= *(uint *)(unaff_x19 + 0xd1)) goto LAB_035575f4;
  iVar17 = *(int *)(lVar19 + (long)(int)*(uint *)(unaff_x19 + 0xd1) * 0x38 + 0x54) << 2;
  if ((*unaff_x28 == 0) || (lVar19 = *(long *)(*unaff_x28 + 0x60), lVar19 == 0)) goto LAB_035574b8;
  if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  if (*(int *)(lVar19 + 0x18) == 0) goto LAB_035575f4;
  FUN_035968e8(lVar19 + 0x20,0,0);
  if (DAT_0411f172 == '\0') {
    FUN_01ab69ac(PTR_DAT_03cbded8);
    DAT_0411f172 = '\x01';
  }
  iVar13 = (int)unaff_x19[0x4e];
  fStack00000000000000fc = **(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  uStack00000000000000e8 = *(undefined8 *)(*(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar19 = unaff_x19[0xe3];
  uStack00000000000000b8 = uStack00000000000000e8;
  fStack00000000000000c4 = fStack00000000000000fc;
  if (iVar13 < 0x401) {
    if (iVar13 == 0x100) {
      if (lVar19 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar19 + 0x18) < 2) goto LAB_035575f4;
      uVar20 = *(undefined8 *)(lVar19 + 0x30);
      if ((int)unaff_x19[0x5c] == 5) {
        if ((*unaff_x28 == 0) || (lVar38 = *(long *)(*unaff_x28 + 0x58), lVar38 == 0))
        goto LAB_035574b8;
        if (*(uint *)(lVar38 + 0x18) <= in_stack_00000030) goto LAB_035575f4;
        fVar40 = *(float *)(lVar38 + (long)(int)in_stack_00000030 * 0x14 + 0x28);
      }
      else {
        fVar40 = *(float *)(unaff_x19 + 0x97);
      }
      fStack00000000000000c4 = fStack000000000000002c + 0.0 + *(float *)(lVar19 + 0x2c);
      param_2 = (0.0 - fVar40) - fStack0000000000000020;
    }
    else if (iVar13 == 0x200) {
      if (lVar19 == 0) goto LAB_035574b8;
      if ((*(int *)(lVar19 + 0x18) == 1) || (*(int *)(lVar19 + 0x18) == 0)) goto LAB_035575f4;
      fStack00000000000000c4 = (*(float *)(lVar19 + 0x20) + *(float *)(lVar19 + 0x2c)) * 0.5;
      uVar20 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar19 + 0x24) >> 0x20) +
                        (float)((ulong)*(undefined8 *)(lVar19 + 0x30) >> 0x20)) * 0.5,
                        ((float)*(undefined8 *)(lVar19 + 0x24) +
                        (float)*(undefined8 *)(lVar19 + 0x30)) * 0.5);
      if ((int)unaff_x19[0x5c] == 5) {
        if ((*unaff_x28 == 0) || (lVar19 = *(long *)(*unaff_x28 + 0x58), lVar19 == 0))
        goto LAB_035574b8;
        if (*(uint *)(lVar19 + 0x18) <= in_stack_00000030) goto LAB_035575f4;
        lVar19 = lVar19 + (long)(int)in_stack_00000030 * 0x14;
        fStack00000000000000c4 = fStack000000000000002c + 0.0 + fStack00000000000000c4;
        param_2 = ((fStack0000000000000020 + *(float *)(lVar19 + 0x28) + *(float *)(lVar19 + 0x30))
                  - fStack0000000000000024) * -0.5 + 0.0;
      }
      else {
        fStack00000000000000c4 = fStack000000000000002c + 0.0 + fStack00000000000000c4;
        param_2 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x97) + in_stack_000017d8) -
                  fStack0000000000000024) * -0.5 + 0.0;
      }
    }
    else {
      if (iVar13 != 0x400) goto LAB_03554c4c;
      if (lVar19 == 0) goto LAB_035574b8;
      if (*(int *)(lVar19 + 0x18) == 0) goto LAB_035575f4;
      uVar20 = *(undefined8 *)(lVar19 + 0x24);
      if ((int)unaff_x19[0x5c] == 5) {
        if ((*unaff_x28 == 0) || (lVar38 = *(long *)(*unaff_x28 + 0x58), lVar38 == 0))
        goto LAB_035574b8;
        if (*(uint *)(lVar38 + 0x18) <= in_stack_00000030) goto LAB_035575f4;
        in_stack_000017d8 = *(float *)(lVar38 + (long)(int)in_stack_00000030 * 0x14 + 0x30);
      }
      fStack00000000000000c4 = fStack000000000000002c + 0.0 + *(float *)(lVar19 + 0x20);
      param_2 = fStack0000000000000024 + (0.0 - in_stack_000017d8);
    }
LAB_03554c3c:
    uStack00000000000000b8 = CONCAT44((float)((ulong)uVar20 >> 0x20) + 0.0,(float)uVar20 + param_2);
  }
  else if (iVar13 == 0x800) {
    if (lVar19 == 0) goto LAB_035574b8;
    if ((*(int *)(lVar19 + 0x18) == 1) || (*(int *)(lVar19 + 0x18) == 0)) goto LAB_035575f4;
    param_2 = fStack000000000000002c + 0.0 +
              (*(float *)(lVar19 + 0x20) + *(float *)(lVar19 + 0x2c)) * 0.5;
    uStack00000000000000b8 =
         CONCAT44(((float)((ulong)*(undefined8 *)(lVar19 + 0x24) >> 0x20) +
                  (float)((ulong)*(undefined8 *)(lVar19 + 0x30) >> 0x20)) * 0.5 + 0.0,
                  ((float)*(undefined8 *)(lVar19 + 0x24) + (float)*(undefined8 *)(lVar19 + 0x30)) *
                  0.5 + 0.0);
    fStack00000000000000c4 = param_2;
  }
  else {
    if (iVar13 == 0x1000) {
      if (lVar19 == 0) goto LAB_035574b8;
      if ((*(int *)(lVar19 + 0x18) == 1) || (*(int *)(lVar19 + 0x18) == 0)) goto LAB_035575f4;
      uVar20 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar19 + 0x24) >> 0x20) +
                        (float)((ulong)*(undefined8 *)(lVar19 + 0x30) >> 0x20)) * 0.5,
                        ((float)*(undefined8 *)(lVar19 + 0x24) +
                        (float)*(undefined8 *)(lVar19 + 0x30)) * 0.5);
      fStack00000000000000c4 =
           fStack000000000000002c + 0.0 +
           (*(float *)(lVar19 + 0x20) + *(float *)(lVar19 + 0x2c)) * 0.5;
      param_2 = 0.0 - ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x9d) +
                       *(float *)(unaff_x19 + 0x9c)) - fStack0000000000000024) * 0.5;
      goto LAB_03554c3c;
    }
    if (iVar13 == 0x2000) {
      if (lVar19 == 0) goto LAB_035574b8;
      if ((*(int *)(lVar19 + 0x18) == 1) || (*(int *)(lVar19 + 0x18) == 0)) goto LAB_035575f4;
      param_2 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) - fStack0000000000000020) -
                      fStack0000000000000024) * 0.5;
      uStack00000000000000b8 =
           CONCAT44(((float)((ulong)*(undefined8 *)(lVar19 + 0x24) >> 0x20) +
                    (float)((ulong)*(undefined8 *)(lVar19 + 0x30) >> 0x20)) * 0.5 + 0.0,
                    ((float)*(undefined8 *)(lVar19 + 0x24) + (float)*(undefined8 *)(lVar19 + 0x30))
                    * 0.5 + param_2);
      fStack00000000000000c4 =
           fStack000000000000002c + 0.0 +
           (*(float *)(lVar19 + 0x20) + *(float *)(lVar19 + 0x2c)) * 0.5;
    }
  }
LAB_03554c4c:
  if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
  uVar20 = FUN_03912334(unaff_x19[0xe5],0);
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*unaff_x22);
  }
  uVar21 = FUN_036d35a8(uVar20,0,0);
  lVar19 = FUN_0357f060();
  if (lVar19 == 0) goto LAB_035574b8;
  FUN_036df824(lVar19,0);
  *(float *)(unaff_x19 + 0xe2) = param_2;
  if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
  iVar13 = FUN_039117fc(unaff_x19[0xe5],0);
  if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
  fVar40 = (float)FUN_03911954(unaff_x19[0xe5],0);
  uVar14 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
  FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
  if (*(int *)(*(long *)OVRPlugin_Mesh_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)OVRPlugin_Mesh_TypeInfo);
  }
  if (DAT_0412df1c == '\0') {
    FUN_01ab69ac(OVRPlugin_Mesh_TypeInfo);
    DAT_0412df1c = '\x01';
  }
  puVar11 = OVRPlugin_Mesh_TypeInfo;
  lVar19 = *(long *)OVRPlugin_Mesh_TypeInfo;
  if (*(int *)(lVar19 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar19 = *(long *)puVar11;
  }
  puVar24 = *(undefined4 **)(lVar19 + 0xb8);
  uVar44 = (ulong)(uint)puVar24[1];
  uVar45 = (ulong)(uint)puVar24[2];
  uVar48 = (ulong)(uint)puVar24[3];
  FUN_035683a4(*puVar24,uVar44,uVar45,uVar48,&stack0x000017b0,0x4000ffff,0);
  if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  lVar19 = *unaff_x28;
  if (lVar19 == 0) goto LAB_035574b8;
  iVar15 = *unaff_x20;
  if (0 < iVar15) {
    lVar19 = *(long *)(lVar19 + 0x38);
    param_2 = ABS(param_2);
    fVar43 = 1.0;
    if ((uVar21 & 1) == 0) {
      fVar43 = param_2;
    }
    if (lVar19 == 0) goto LAB_035574b8;
    bVar12 = false;
    bVar10 = false;
    _iStack0000000000000128 = 0;
    bVar9 = false;
    iStack00000000000000d4 = 0;
    uStack0000000000000028 = 0;
    uStack0000000000000158 = 0;
    iStack000000000000006c = 0;
    lVar38 = 0x2e0;
    fVar41 = 0.0;
    fVar57 = 0.0;
    fStack00000000000000c8 = fStack00000000000000d8;
    fStack0000000000000104 =
         *(float *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x15a8);
    fStack00000000000000d0 = fStack00000000000000dc;
    fStack0000000000000070 = fStack00000000000000dc;
    fStack000000000000009c = fStack00000000000000dc;
    fStack00000000000000a0 = fStack00000000000000d8;
    fStack0000000000000100 = 0.0;
    fStack000000000000008c = 0.0;
    fStack0000000000000040 = 0.0;
    fStack00000000000000a8 = 0.0;
    fStack0000000000000038 = 0.0;
    uStack0000000000000074 = in_stack_000000c0;
    fStack0000000000000078 = fStack00000000000000d8;
    uStack0000000000000098 = in_stack_000000c0;
    uVar18 = 1;
    uVar47 = 0;
LAB_03554e78:
    uVar8 = uVar18 - 1;
    if (*(uint *)(lVar19 + 0x18) <= uVar8) goto LAB_035575f4;
    if ((*unaff_x28 == 0) || (lVar26 = *(long *)(*unaff_x28 + 0x50), lVar26 == 0))
    goto LAB_035574b8;
    lVar36 = (long)(int)uVar8;
    lVar28 = lVar19 + lVar36 * 0x178;
    uVar2 = *(uint *)(lVar28 + 100);
    if (*(uint *)(lVar26 + 0x18) <= uVar2) goto LAB_035575f4;
    lVar33 = (long)(int)uVar2;
    lVar26 = lVar26 + lVar33 * 0x5c;
    lVar29 = *(long *)(lVar28 + 0x38);
    uVar4 = *(ushort *)(lVar28 + 0x20);
    uVar6 = *(uint *)(lVar26 + 0x3c);
    uVar39 = *(uint *)(lVar26 + 0x68);
    iVar3 = *(int *)(lVar26 + 0x20);
    iVar15 = *(int *)(lVar26 + 0x28);
    iVar16 = *(int *)(lVar26 + 0x2c);
    uVar7 = *(uint *)(lVar26 + 0x40);
    lVar28 = (long)(int)uVar7;
    fVar46 = *(float *)(lVar26 + 0x4c);
    fVar49 = *(float *)(lVar26 + 0x54);
    fVar53 = *(float *)(lVar26 + 0x58);
    fVar54 = *(float *)(lVar26 + 0x5c);
    fVar51 = *(float *)(lVar26 + 0x60);
    fVar52 = *(float *)(lVar26 + 0x6c);
    fVar56 = *(float *)(lVar26 + 0x70);
    fVar55 = *(float *)(lVar26 + 0x74);
    fVar50 = *(float *)(lVar26 + 0x78);
    uVar32 = (uint)uVar4;
    if ((int)uVar39 < 9) {
      switch(uVar39) {
      case 1:
        if ((char)unaff_x19[0x1e] == '\0') {
          fStack00000000000000fc = fVar51 + 0.0;
        }
        else {
          fStack00000000000000fc = 0.0 - fVar53;
        }
        break;
      case 2:
LAB_03555018:
        fStack00000000000000fc = (fVar51 + fVar54 * 0.5) - fVar53 * 0.5;
        break;
      default:
        goto switchD_03554f58_caseD_3;
      case 4:
        fStack00000000000000fc = (fVar54 + fVar51) - fVar53;
        if ((char)unaff_x19[0x1e] != '\0') {
          fStack00000000000000fc = fVar54 + fVar51;
        }
        break;
      case 8:
        goto switchD_03554f58_caseD_8;
      }
LAB_03555088:
      uStack00000000000000e8 = 0;
    }
    else if (uVar39 == 0x10) {
switchD_03554f58_caseD_8:
      if (uVar4 < 0xad) {
        if ((uVar4 != 3) && (uVar4 != 10)) {
LAB_03554fac:
          if (*(uint *)(lVar19 + 0x18) <= uVar6) goto LAB_035575f4;
          uVar5 = *(undefined2 *)(lVar19 + (long)(int)uVar6 * 0x178 + 0x20);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar21 = FUN_026b8cc4(uVar5,0);
          if ((uVar21 & 1) == 0) {
            bVar1 = (int)uVar2 < (int)unaff_x19[0x95];
          }
          else {
            bVar1 = false;
          }
          if ((fVar53 <= fVar54) && (!bVar1 && uVar39 >> 4 == 0)) {
            fStack00000000000000fc = fVar51;
            if ((char)unaff_x19[0x1e] != '\0') {
              fStack00000000000000fc = fVar54 + fVar51;
            }
            goto LAB_03555088;
          }
          if (((uVar18 == 1) || (uVar2 != uVar47)) || (uVar8 == *(uint *)((long)unaff_x19 + 0x324)))
          {
            fStack00000000000000fc = fVar51;
            if ((char)unaff_x19[0x1e] != '\0') {
              fStack00000000000000fc = fVar54 + fVar51;
            }
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uStack0000000000000028 = FUN_026b97f8(uVar32,0);
            uStack00000000000000e8 = 0;
          }
          else {
            cVar23 = (char)unaff_x19[0x1e];
            fVar51 = -fVar53;
            if (cVar23 != '\0') {
              fVar51 = fVar53;
            }
            if (*(uint *)(lVar19 + 0x18) <= uVar6) goto LAB_035575f4;
            iVar16 = (int)*(char *)(lVar19 + (long)(int)uVar6 * 0x178 + 0x194) +
                     (-iVar3 - (uStack0000000000000028 & 1)) + iVar16 + -1;
            if (iVar16 < 1) {
              fVar53 = 1.0;
              iVar16 = 1;
            }
            else {
              fVar53 = *(float *)((long)unaff_x19 + 0x2dc);
            }
            if (uVar32 == 9) {
LAB_03556e74:
              fVar53 = 1.0 - fVar53;
            }
            else {
              if (uVar32 != 0xa0) {
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar21 = FUN_026b97f8(uVar32,0);
                cVar23 = (char)unaff_x19[0x1e];
                if ((uVar21 & 1) != 0) goto LAB_03556e74;
              }
              iVar16 = (iVar3 - (~uStack0000000000000028 & 1)) + iVar15;
            }
            fVar53 = ((fVar54 + fVar51) * fVar53) / (float)iVar16;
            if (cVar23 == '\0') {
              fStack00000000000000fc = fStack00000000000000fc + fVar53;
              uStack00000000000000e8 =
                   CONCAT44((float)((ulong)uStack00000000000000e8 >> 0x20) + 0.0,
                            (float)uStack00000000000000e8 + 0.0);
            }
            else {
              fStack00000000000000fc = fStack00000000000000fc - fVar53;
            }
          }
        }
      }
      else if (((uVar4 != 0xad) && (uVar4 != 0x200b)) && (uVar4 != 0x2060)) goto LAB_03554fac;
    }
    else if (uVar39 == 0x20) {
      fVar53 = fVar52 + fVar55;
      goto LAB_03555018;
    }
switchD_03554f58_caseD_3:
    uVar39 = (uint)*(undefined8 *)(lVar19 + 0x18);
    if (uVar39 <= uVar8) goto LAB_035575f4;
    lVar26 = lVar19 + lVar36 * 0x178;
    fVar54 = fStack00000000000000c4 + fStack00000000000000fc;
    fVar53 = (float)uStack00000000000000b8 + (float)uStack00000000000000e8;
    fVar51 = (float)((ulong)uStack00000000000000b8 >> 0x20) +
             (float)((ulong)uStack00000000000000e8 >> 0x20);
    if (*(char *)(lVar26 + 0x194) == '\0') goto LAB_03555938;
    iVar15 = *(int *)(lVar19 + lVar36 * 0x178 + 0x2c);
    if (iVar15 != 0) goto LAB_0355574c;
    fVar41 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar2,1.0);
    switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
    case 0:
      lVar25 = lVar19 + lVar36 * 0x178;
      *(undefined4 *)(lVar25 + 0x84) = 0;
      *(undefined4 *)(lVar25 + 0xac) = 0;
      *(undefined4 *)(lVar25 + 0xd4) = 0x3f800000;
      fVar41 = 1.0;
      break;
    case 1:
      fVar50 = *(float *)(lVar19 + lVar36 * 0x178 + 0x70);
      if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
        lVar25 = lVar19 + lVar36 * 0x178;
        fVar55 = (fStack00000000000000fc + fVar50) - *(float *)(in_stack_00000080 + 0x230);
        fVar50 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
        goto LAB_035551cc;
      }
      lVar25 = lVar19 + lVar36 * 0x178;
      fVar55 = fVar55 - fVar52;
      *(float *)(lVar25 + 0x84) = fVar41 + (fVar50 - fVar52) / fVar55;
      *(float *)(lVar25 + 0xac) = fVar41 + (*(float *)(lVar25 + 0x98) - fVar52) / fVar55;
      *(float *)(lVar25 + 0xd4) = fVar41 + (*(float *)(lVar25 + 0xc0) - fVar52) / fVar55;
      fVar41 = fVar41 + (*(float *)(lVar25 + 0xe8) - fVar52) / fVar55;
      break;
    case 2:
      lVar25 = lVar19 + lVar36 * 0x178;
      fVar50 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
      fVar55 = (fStack00000000000000fc + *(float *)(lVar25 + 0x70)) -
               *(float *)(in_stack_00000080 + 0x230);
LAB_035551cc:
      *(float *)(lVar25 + 0x84) = fVar41 + fVar55 / fVar50;
      *(float *)(lVar25 + 0xac) =
           fVar41 + ((fStack00000000000000fc + *(float *)(lVar25 + 0x98)) -
                    *(float *)(in_stack_00000080 + 0x230)) /
                    (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
      *(float *)(lVar25 + 0xd4) =
           fVar41 + ((fStack00000000000000fc + *(float *)(lVar25 + 0xc0)) -
                    *(float *)(in_stack_00000080 + 0x230)) /
                    (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
      fVar41 = fVar41 + ((fStack00000000000000fc + *(float *)(lVar25 + 0xe8)) -
                        *(float *)(in_stack_00000080 + 0x230)) /
                        (*(float *)(in_stack_00000080 + 0x238) -
                        *(float *)(in_stack_00000080 + 0x230));
      break;
    case 3:
      switch((int)unaff_x19[0x62]) {
      case 0:
        lVar25 = lVar19 + lVar36 * 0x178;
        *(undefined4 *)(lVar25 + 0x88) = 0;
        *(undefined4 *)(lVar25 + 0xb0) = 0x3f800000;
        *(undefined4 *)(lVar25 + 0xd8) = 0;
        *(undefined4 *)(lVar25 + 0x100) = 0x3f800000;
        break;
      case 1:
        lVar25 = lVar19 + lVar36 * 0x178;
        fVar50 = fVar50 - fVar56;
        fVar55 = fVar41 + (*(float *)(lVar25 + 0x74) - fVar56) / fVar50;
        fVar50 = fVar41 + (*(float *)(lVar25 + 0x9c) - fVar56) / fVar50;
        *(float *)(lVar25 + 0x88) = fVar55;
        *(float *)(lVar25 + 0xb0) = fVar50;
        *(float *)(lVar25 + 0xd8) = fVar55;
        *(float *)(lVar25 + 0x100) = fVar50;
        break;
      case 2:
        lVar25 = lVar19 + lVar36 * 0x178;
        fVar55 = fVar41 + (*(float *)(lVar25 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                          (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
        *(float *)(lVar25 + 0x88) = fVar55;
        fVar50 = *(float *)(unaff_x19 + 0x9c);
        fVar52 = *(float *)(unaff_x19 + 0x9d);
        *(float *)(lVar25 + 0xd8) = fVar55;
        fVar55 = fVar41 + (*(float *)(lVar25 + 0x9c) - fVar50) / (fVar52 - fVar50);
        *(float *)(lVar25 + 0xb0) = fVar55;
        *(float *)(lVar25 + 0x100) = fVar55;
        break;
      case 3:
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
        uVar39 = (uint)*(undefined8 *)(lVar19 + 0x18);
      }
      if (uVar39 <= uVar8) goto LAB_035575f4;
      lVar25 = lVar19 + lVar36 * 0x178;
      fVar55 = *(float *)(lVar25 + 0x15c);
      fVar50 = (1.0 - (*(float *)(lVar25 + 0x88) + *(float *)(lVar25 + 0xb0)) * fVar55) * 0.5;
      fVar52 = fVar41 + *(float *)(lVar25 + 0x88) * fVar55 + fVar50;
      fVar41 = fVar41 + fVar50 + *(float *)(lVar25 + 0xb0) * fVar55;
      *(float *)(lVar25 + 0x84) = fVar52;
      *(float *)(lVar25 + 0xac) = fVar52;
      *(float *)(lVar25 + 0xd4) = fVar41;
      break;
    default:
      goto switchD_0355512c_default;
    }
    *(float *)(lVar19 + lVar36 * 0x178 + 0xfc) = fVar41;
switchD_0355512c_default:
    switch((int)unaff_x19[0x62]) {
    case 0:
      if (uVar39 <= uVar8) goto LAB_035575f4;
      lVar25 = lVar19 + lVar36 * 0x178;
      *(undefined4 *)(lVar25 + 0x88) = 0;
      *(undefined4 *)(lVar25 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar25 + 0xd8) = 0x3f800000;
      *(undefined4 *)(lVar25 + 0x100) = 0;
      break;
    case 1:
      if (uVar8 < uVar39) {
        lVar25 = lVar19 + lVar36 * 0x178;
        fVar46 = fVar46 - fVar49;
        fVar41 = (*(float *)(lVar25 + 0x74) - fVar49) / fVar46;
        fVar46 = (*(float *)(lVar25 + 0x9c) - fVar49) / fVar46;
        *(float *)(lVar25 + 0x88) = fVar41;
        goto UnityEngine_Animator__set_stabilizeFeet;
      }
      goto LAB_035575f4;
    case 2:
      if (uVar39 <= uVar8) goto LAB_035575f4;
      lVar25 = lVar19 + lVar36 * 0x178;
      fVar41 = (*(float *)(lVar25 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
               (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar25 + 0x88) = fVar41;
      fVar46 = (*(float *)(lVar25 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
               (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
UnityEngine_Animator__set_stabilizeFeet:
      *(float *)(lVar25 + 0xb0) = fVar46;
      *(float *)(lVar25 + 0xd8) = fVar46;
      *(float *)(lVar25 + 0x100) = fVar41;
      break;
    case 3:
      if (uVar39 <= uVar8) goto LAB_035575f4;
      lVar25 = lVar19 + lVar36 * 0x178;
      fVar46 = *(float *)(lVar25 + 0x15c);
      fVar55 = (1.0 - (*(float *)(lVar25 + 0x84) + *(float *)(lVar25 + 0xd4)) / fVar46) * 0.5;
      fVar41 = *(float *)(lVar25 + 0x84) / fVar46 + fVar55;
      fVar55 = fVar55 + *(float *)(lVar25 + 0xd4) / fVar46;
      *(float *)(lVar25 + 0x88) = fVar41;
      *(float *)(lVar25 + 0xb0) = fVar55;
      *(float *)(lVar25 + 0x100) = fVar41;
      *(float *)(lVar25 + 0xd8) = fVar55;
    }
    if (uVar39 <= uVar8) goto LAB_035575f4;
    lVar25 = lVar19 + lVar36 * 0x178;
    fVar41 = *(float *)(lVar25 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
    if ((*(char *)(lVar25 + 0x5c) == '\0') && ((*(byte *)(lVar19 + lVar36 * 0x178 + 400) & 1) != 0))
    {
      fVar41 = -fVar41;
    }
    fVar55 = param_2;
    if (((iVar13 == 2) || (fVar55 = fVar43, iVar13 == 1)) ||
       (fVar55 = param_2 / fVar40, iVar13 == 0)) {
      fVar41 = fVar55 * fVar41;
    }
    lVar25 = lVar19 + lVar36 * 0x178;
    fVar46 = *(float *)(lVar25 + 0x88);
    fVar50 = *(float *)(lVar25 + 0x84);
    fVar55 = -2.1474836e+09;
    if (fVar50 != INFINITY) {
      fVar55 = (float)(int)fVar50;
    }
    fVar52 = *(float *)(lVar25 + 0xd4);
    fVar56 = *(float *)(lVar25 + 0xd8);
    fVar49 = -2.1474836e+09;
    if (fVar46 != INFINITY) {
      fVar49 = (float)(int)fVar46;
    }
    uVar42 = FUN_03591d3c(fVar50 - fVar55,fVar46 - fVar49);
    *(undefined4 *)(lVar25 + 0x84) = uVar42;
    if (*(uint *)(lVar19 + 0x18) <= uVar8) goto LAB_035575f4;
    fVar56 = fVar56 - fVar49;
    *(float *)(lVar25 + 0x88) = fVar41;
    uVar42 = FUN_03591d3c(fVar50 - fVar55,fVar56);
    *(undefined4 *)(lVar19 + lVar36 * 0x178 + 0xac) = uVar42;
    if (*(uint *)(lVar19 + 0x18) <= uVar8) goto LAB_035575f4;
    fVar52 = fVar52 - fVar55;
    *(float *)(lVar19 + lVar36 * 0x178 + 0xb0) = fVar41;
    fVar55 = (float)FUN_03591d3c(fVar52,fVar56);
    *(float *)(lVar25 + 0xd4) = fVar55;
    if (*(uint *)(lVar19 + 0x18) <= uVar8) goto LAB_035575f4;
    *(float *)(lVar25 + 0xd8) = fVar41;
    uVar42 = FUN_03591d3c(fVar52,fVar46 - fVar49);
    *(undefined4 *)(lVar19 + lVar36 * 0x178 + 0xfc) = uVar42;
    uVar39 = (uint)*(undefined8 *)(lVar19 + 0x18);
    if (uVar39 <= uVar8) goto LAB_035575f4;
    *(float *)(lVar19 + lVar36 * 0x178 + 0x100) = fVar41;
LAB_0355574c:
    if (((int)uVar8 < (int)unaff_x19[0x65]) &&
       (iStack00000000000000d4 < *(int *)((long)unaff_x19 + 0x32c))) {
      if (((int)uVar2 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
        if (uVar39 <= uVar8) goto LAB_035575f4;
        lVar26 = lVar19 + lVar36 * 0x178;
        *(ulong *)(lVar26 + 0x70) =
             CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar26 + 0x70) >> 0x20),
                      fVar54 + (float)*(undefined8 *)(lVar26 + 0x70));
        *(float *)(lVar26 + 0x78) = fVar51 + *(float *)(lVar26 + 0x78);
        *(ulong *)(lVar26 + 0x98) =
             CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar26 + 0x98) >> 0x20),
                      fVar54 + (float)*(undefined8 *)(lVar26 + 0x98));
        *(float *)(lVar26 + 0xa0) = fVar51 + *(float *)(lVar26 + 0xa0);
        *(ulong *)(lVar26 + 0xc0) =
             CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar26 + 0xc0) >> 0x20),
                      fVar54 + (float)*(undefined8 *)(lVar26 + 0xc0));
        *(float *)(lVar26 + 200) = fVar51 + *(float *)(lVar26 + 200);
        *(ulong *)(lVar26 + 0xe8) =
             CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar26 + 0xe8) >> 0x20),
                      fVar54 + (float)*(undefined8 *)(lVar26 + 0xe8));
        *(float *)(lVar26 + 0xf0) = fVar51 + *(float *)(lVar26 + 0xf0);
        goto UnityEngine_Animator__GetAnimatorClipInfoCount;
      }
      if (((int)uVar2 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
        if (uVar8 < uVar39) {
          if (*(uint *)(lVar19 + lVar36 * 0x178 + 0x68) == in_stack_00000030) {
            lVar26 = lVar19 + lVar36 * 0x178;
            *(ulong *)(lVar26 + 0x70) =
                 CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar26 + 0x70) >> 0x20),
                          fVar54 + (float)*(undefined8 *)(lVar26 + 0x70));
            *(float *)(lVar26 + 0x78) = fVar51 + *(float *)(lVar26 + 0x78);
            *(ulong *)(lVar26 + 0x98) =
                 CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar26 + 0x98) >> 0x20),
                          fVar54 + (float)*(undefined8 *)(lVar26 + 0x98));
            *(float *)(lVar26 + 0xa0) = fVar51 + *(float *)(lVar26 + 0xa0);
            *(ulong *)(lVar26 + 0xc0) =
                 CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar26 + 0xc0) >> 0x20),
                          fVar54 + (float)*(undefined8 *)(lVar26 + 0xc0));
            *(float *)(lVar26 + 200) = fVar51 + *(float *)(lVar26 + 200);
            *(ulong *)(lVar26 + 0xe8) =
                 CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar26 + 0xe8) >> 0x20),
                          fVar54 + (float)*(undefined8 *)(lVar26 + 0xe8));
            *(float *)(lVar26 + 0xf0) = fVar51 + *(float *)(lVar26 + 0xf0);
            goto UnityEngine_Animator__GetAnimatorClipInfoCount;
          }
          goto UnityEngine_Animator__GetAnimatorTransitionInfo;
        }
        goto LAB_035575f4;
      }
    }
UnityEngine_Animator__GetAnimatorTransitionInfo:
    if (uVar39 <= uVar8) goto LAB_035575f4;
    if (DAT_0411f172 == '\0') {
      FUN_01ab69ac(PTR_DAT_03cbded8);
      DAT_0411f172 = '\x01';
      uVar39 = *(uint *)(lVar19 + 0x18);
    }
    puVar11 = PTR_DAT_03cbded8;
    uVar42 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
    lVar25 = lVar19 + lVar36 * 0x178;
    *(undefined8 *)(lVar25 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
    *(undefined4 *)(lVar25 + 0x78) = uVar42;
    if (uVar39 <= uVar8) goto LAB_035575f4;
    uVar42 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar11 + 0xb8) + 1);
    lVar25 = lVar19 + lVar36 * 0x178;
    *(undefined8 *)(lVar25 + 0x98) = **(undefined8 **)(*(long *)puVar11 + 0xb8);
    *(undefined4 *)(lVar25 + 0xa0) = uVar42;
    uVar42 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar11 + 0xb8) + 1);
    *(undefined8 *)(lVar25 + 0xc0) = **(undefined8 **)(*(long *)puVar11 + 0xb8);
    *(undefined4 *)(lVar25 + 200) = uVar42;
    uVar42 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar11 + 0xb8) + 1);
    *(undefined8 *)(lVar25 + 0xe8) = **(undefined8 **)(*(long *)puVar11 + 0xb8);
    *(undefined4 *)(lVar25 + 0xf0) = uVar42;
    *(undefined1 *)(lVar26 + 0x194) = 0;
UnityEngine_Animator__GetAnimatorClipInfoCount:
    if (iVar15 == 0) {
      pcVar27 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0355591c:
      (*pcVar27)();
    }
    else if (iVar15 == 1) {
      pcVar27 = *(code **)(*unaff_x19 + 0x8c8);
      goto LAB_0355591c;
    }
LAB_03555938:
    if ((*in_stack_00000170 == 0) || (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar26 + 0x18) <= uVar8) goto LAB_035575f4;
    lVar26 = lVar26 + lVar36 * 0x178;
    uVar20 = *(undefined8 *)(lVar26 + 0x11c);
    *(undefined8 *)(lVar26 + 0x11c) =
         CONCAT44(fVar53 + (float)((ulong)uVar20 >> 0x20),fVar54 + (float)uVar20);
    *(float *)(lVar26 + 0x124) = fVar51 + *(float *)(lVar26 + 0x124);
    if ((*in_stack_00000170 == 0) || (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar26 + 0x18) <= uVar8) goto LAB_035575f4;
    lVar26 = lVar26 + lVar36 * 0x178;
    *(ulong *)(lVar26 + 0x110) =
         CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar26 + 0x110) >> 0x20),
                  fVar54 + (float)*(undefined8 *)(lVar26 + 0x110));
    *(float *)(lVar26 + 0x118) = fVar51 + *(float *)(lVar26 + 0x118);
    if ((*in_stack_00000170 == 0) || (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar26 + 0x18) <= uVar8) goto LAB_035575f4;
    lVar26 = lVar26 + lVar36 * 0x178;
    *(ulong *)(lVar26 + 0x128) =
         CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar26 + 0x128) >> 0x20),
                  fVar54 + (float)*(undefined8 *)(lVar26 + 0x128));
    *(float *)(lVar26 + 0x130) = fVar51 + *(float *)(lVar26 + 0x130);
    if ((*in_stack_00000170 == 0) || (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar26 + 0x18) <= uVar8) goto LAB_035575f4;
    lVar26 = lVar26 + lVar36 * 0x178;
    *(float *)(lVar26 + 0x134) = fVar54 + *(float *)(lVar26 + 0x134);
    *(ulong *)(lVar26 + 0x138) =
         CONCAT44(fVar51 + (float)((ulong)*(undefined8 *)(lVar26 + 0x138) >> 0x20),
                  fVar53 + (float)*(undefined8 *)(lVar26 + 0x138));
    lVar26 = *in_stack_00000170;
    if ((lVar26 == 0) || (lVar25 = *(long *)(lVar26 + 0x38), lVar25 == 0)) goto LAB_035574b8;
    uVar39 = *(uint *)(lVar25 + 0x18);
    if (uVar39 <= uVar8) goto LAB_035575f4;
    lVar30 = lVar25 + lVar36 * 0x178;
    uVar44 = CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar30 + 0x140) >> 0x20),
                      fVar54 + (float)*(undefined8 *)(lVar30 + 0x140));
    fVar55 = fVar53 + *(float *)(lVar30 + 0x150);
    uVar45 = (ulong)(uint)fVar55;
    uVar48 = CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar30 + 0x148) >> 0x20),
                      fVar53 + (float)*(undefined8 *)(lVar30 + 0x148));
    *(float *)(lVar30 + 0x150) = fVar55;
    *(ulong *)(lVar30 + 0x140) = uVar44;
    *(ulong *)(lVar30 + 0x148) = uVar48;
    if (uVar2 == uVar47) {
      uVar47 = *unaff_x20 - 1;
      if (uVar8 == uVar47) goto LAB_03555b44;
    }
    else {
      lVar26 = *(long *)(lVar26 + 0x50);
      if (lVar26 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar26 + 0x18) <= uVar47) goto LAB_035575f4;
      lVar30 = (long)(int)uVar47;
      lVar31 = lVar26 + lVar30 * 0x5c;
      uVar48 = (ulong)(uint)*(float *)(lVar31 + 0x58);
      fVar55 = fVar53 + *(float *)(lVar31 + 0x54);
      uVar44 = (ulong)(uint)fVar55;
      fVar46 = fVar54 + *(float *)(lVar31 + 0x58);
      uVar45 = (ulong)(uint)fVar46;
      *(ulong *)(lVar31 + 0x4c) =
           CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar31 + 0x4c) >> 0x20),
                    fVar53 + (float)*(undefined8 *)(lVar31 + 0x4c));
      *(float *)(lVar31 + 0x54) = fVar55;
      *(float *)(lVar31 + 0x58) = fVar46;
      if (uVar39 <= *(uint *)(lVar31 + 0x34)) goto LAB_035575f4;
      uVar42 = *(undefined4 *)(lVar25 + (long)(int)*(uint *)(lVar31 + 0x34) * 0x178 + 0x11c);
      lVar26 = lVar26 + lVar30 * 0x5c;
      *(float *)(lVar26 + 0x70) = fVar55;
      *(undefined4 *)(lVar26 + 0x6c) = uVar42;
      lVar26 = *in_stack_00000170;
      if ((lVar26 == 0) || (lVar25 = *(long *)(lVar26 + 0x50), lVar25 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar25 + 0x18) <= uVar47) goto LAB_035575f4;
      lVar26 = *(long *)(lVar26 + 0x38);
      if (lVar26 == 0) goto LAB_035574b8;
      uVar47 = *(uint *)(lVar25 + lVar30 * 0x5c + 0x40);
      if (*(uint *)(lVar26 + 0x18) <= uVar47) goto LAB_035575f4;
      lVar25 = lVar25 + lVar30 * 0x5c;
      *(undefined4 *)(lVar25 + 0x74) = *(undefined4 *)(lVar26 + (long)(int)uVar47 * 0x178 + 0x128);
      *(undefined4 *)(lVar25 + 0x78) = *(undefined4 *)(lVar25 + 0x4c);
      uVar47 = *unaff_x20 - 1;
LAB_03555b44:
      if (uVar8 == uVar47) {
        lVar26 = *in_stack_00000170;
        if ((lVar26 == 0) || (lVar25 = *(long *)(lVar26 + 0x50), lVar25 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar25 + 0x18) <= uVar2) goto LAB_035575f4;
        lVar30 = lVar25 + lVar33 * 0x5c;
        uVar48 = (ulong)(uint)*(float *)(lVar30 + 0x58);
        uVar44 = CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar30 + 0x4c) >> 0x20),
                          fVar53 + (float)*(undefined8 *)(lVar30 + 0x4c));
        fVar55 = fVar53 + *(float *)(lVar30 + 0x54);
        fVar54 = fVar54 + *(float *)(lVar30 + 0x58);
        uVar45 = (ulong)(uint)fVar54;
        *(ulong *)(lVar30 + 0x4c) = uVar44;
        *(float *)(lVar30 + 0x54) = fVar55;
        *(float *)(lVar30 + 0x58) = fVar54;
        lVar26 = *(long *)(lVar26 + 0x38);
        if (lVar26 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar26 + 0x18) <= *(uint *)(lVar30 + 0x34)) goto LAB_035575f4;
        uVar42 = *(undefined4 *)(lVar26 + (long)(int)*(uint *)(lVar30 + 0x34) * 0x178 + 0x11c);
        lVar25 = lVar25 + lVar33 * 0x5c;
        *(float *)(lVar25 + 0x70) = fVar55;
        *(undefined4 *)(lVar25 + 0x6c) = uVar42;
        lVar26 = *in_stack_00000170;
        if ((lVar26 == 0) || (lVar25 = *(long *)(lVar26 + 0x50), lVar25 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar25 + 0x18) <= uVar2) goto LAB_035575f4;
        lVar26 = *(long *)(lVar26 + 0x38);
        if (lVar26 == 0) goto LAB_035574b8;
        uVar47 = *(uint *)(lVar25 + lVar33 * 0x5c + 0x40);
        if (*(uint *)(lVar26 + 0x18) <= uVar47) goto LAB_035575f4;
        lVar25 = lVar25 + lVar33 * 0x5c;
        *(undefined4 *)(lVar25 + 0x74) = *(undefined4 *)(lVar26 + (long)(int)uVar47 * 0x178 + 0x128)
        ;
        *(undefined4 *)(lVar25 + 0x78) = *(undefined4 *)(lVar25 + 0x4c);
      }
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar21 = FUN_026b82c4(uVar32,0);
    if (((((uVar21 & 1) == 0) && (1 < uVar32 - 0x2010)) && (uVar32 != 0xad)) && (uVar32 != 0x2d)) {
      if (bVar10) {
        if (((uVar18 != 1) && ((int)uVar8 < (int)(*(uint *)(lVar19 + 0x18) - 1))) &&
           (((int)uVar8 < *unaff_x20 && ((uVar32 == 0x2019 || (uVar32 == 0x27)))))) {
          if (*(uint *)(lVar19 + 0x18) <= uVar18 - 2) goto LAB_035575f4;
          uVar5 = *(undefined2 *)(lVar19 + lVar38 + -0x438);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar21 = FUN_026b82c4(uVar5,0);
          if ((uVar21 & 1) != 0) {
            if (*(uint *)(lVar19 + 0x18) <= uVar18) goto LAB_035575f4;
            uVar5 = *(undefined2 *)(lVar19 + lVar38 + -0x148);
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar21 = FUN_026b82c4(uVar5,0);
            if ((uVar21 & 1) != 0) goto LAB_03555d68;
          }
        }
      }
      else {
        if (uVar18 != 1) {
LAB_0355686c:
          bVar10 = false;
          goto LAB_03555d70;
        }
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar21 = FUN_026b81f8(uVar32,0);
        if ((uVar21 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar21 = FUN_026b63d8(uVar32,0);
          if (((uVar32 != 0x200b) && ((uVar21 & 1) == 0)) && (*unaff_x20 != 1)) goto LAB_0355686c;
        }
      }
      if (uVar8 == *unaff_x20 - 1U) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar21 = FUN_026b82c4(uVar32,0);
        iVar15 = iStack0000000000000128;
        if ((uVar21 & 1) == 0) goto LAB_03556070;
      }
      else {
LAB_03556070:
        iVar15 = uVar18 - 2;
      }
      lVar26 = *in_stack_00000170;
      if (lVar26 == 0) goto LAB_035574b8;
      lVar25 = *(long *)(lVar26 + 0x40);
      if (lVar25 == 0) goto LAB_035574b8;
      uVar47 = *(uint *)(lVar26 + 0x24);
      iVar16 = *(int *)(lVar25 + 0x18);
      if (iVar16 < (int)(uVar47 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar26 + 0x40),iVar16 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
                    );
        lVar26 = *in_stack_00000170;
        if (lVar26 == 0) goto LAB_035574b8;
      }
      lVar26 = *(long *)(lVar26 + 0x40);
      if (lVar26 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar26 + 0x18) <= uVar47) goto LAB_035575f4;
      lVar26 = lVar26 + (long)(int)uVar47 * 0x18;
      *(long **)(lVar26 + 0x20) = unaff_x19;
      *(uint *)(lVar26 + 0x28) = uStack0000000000000158;
      *(int *)(lVar26 + 0x2c) = iVar15;
      *(uint *)(lVar26 + 0x30) = (iVar15 - uStack0000000000000158) + 1;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar26 = unaff_x19[0x6d];
      if (lVar26 == 0) goto LAB_035574b8;
      lVar25 = *(long *)(lVar26 + 0x50);
      *(int *)(lVar26 + 0x24) = *(int *)(lVar26 + 0x24) + 1;
      if (lVar25 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar25 + 0x18) <= uVar2) goto LAB_035575f4;
      lVar25 = lVar25 + lVar33 * 0x5c;
      bVar10 = false;
      iStack00000000000000d4 = iStack00000000000000d4 + 1;
      *(int *)(lVar25 + 0x30) = *(int *)(lVar25 + 0x30) + 1;
    }
    else {
      if (!bVar10) {
        uStack0000000000000158 = uVar8;
      }
      if (uVar8 == *unaff_x20 - 1U) {
        lVar26 = *in_stack_00000170;
        if (lVar26 == 0) goto LAB_035574b8;
        lVar25 = *(long *)(lVar26 + 0x40);
        if (lVar25 == 0) goto LAB_035574b8;
        uVar47 = *(uint *)(lVar26 + 0x24);
        iVar15 = *(int *)(lVar25 + 0x18);
        if (iVar15 < (int)(uVar47 + 1)) {
          if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff025c((long *)(lVar26 + 0x40),iVar15 + 1,
                       *(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
          lVar26 = *in_stack_00000170;
          if (lVar26 == 0) goto LAB_035574b8;
        }
        lVar26 = *(long *)(lVar26 + 0x40);
        if (lVar26 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar26 + 0x18) <= uVar47) goto LAB_035575f4;
        lVar26 = lVar26 + (long)(int)uVar47 * 0x18;
        *(long **)(lVar26 + 0x20) = unaff_x19;
        *(uint *)(lVar26 + 0x28) = uStack0000000000000158;
        *(uint *)(lVar26 + 0x2c) = uVar8;
        *(uint *)(lVar26 + 0x30) = uVar18 - uStack0000000000000158;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        lVar26 = unaff_x19[0x6d];
        if (lVar26 == 0) goto LAB_035574b8;
        lVar25 = *(long *)(lVar26 + 0x50);
        *(int *)(lVar26 + 0x24) = *(int *)(lVar26 + 0x24) + 1;
        if (lVar25 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar25 + 0x18) <= uVar2) goto LAB_035575f4;
        lVar25 = lVar25 + lVar33 * 0x5c;
        iStack00000000000000d4 = iStack00000000000000d4 + 1;
        *(int *)(lVar25 + 0x30) = *(int *)(lVar25 + 0x30) + 1;
      }
LAB_03555d68:
      bVar10 = true;
    }
LAB_03555d70:
    if ((*in_stack_00000170 == 0) || (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 == 0))
    goto LAB_035574b8;
    uVar47 = *(uint *)(lVar26 + 0x18);
    if (uVar47 <= uVar8) goto LAB_035575f4;
    if ((*(byte *)(lVar26 + lVar36 * 0x178 + 400) >> 2 & 1) == 0) {
      if (bVar12) {
LAB_03555da0:
        if (uVar47 <= uVar18 - 2) goto LAB_035575f4;
        lVar33 = *unaff_x19;
        uVar47 = *(uint *)(lVar26 + lVar38 + -0x330);
        uVar42 = *(undefined4 *)(lVar26 + lVar38 + -0x2f8);
LAB_035562ec:
        pcVar27 = *(code **)(lVar33 + 0x8d8);
LAB_035562f4:
        uVar48 = (ulong)uVar47;
        uVar44 = (ulong)(uint)fStack0000000000000070;
        uVar45 = (ulong)uStack0000000000000074;
        (*pcVar27)(fStack0000000000000078,uVar44,uVar45,uVar48,fStack0000000000000104,0,
                   fStack000000000000008c,uVar42);
        puVar11 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar26 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar26 = *(long *)puVar11;
        }
LAB_03556348:
        bVar12 = false;
        fVar57 = 0.0;
        fStack0000000000000104 = *(float *)(*(long *)(lVar26 + 0xb8) + 0x15a8);
        fStack0000000000000100 = 0.0;
      }
      else {
LAB_03556254:
        bVar12 = false;
      }
    }
    else {
      lVar26 = lVar26 + lVar36 * 0x178;
      iVar15 = *(int *)(lVar26 + 0x68);
      *(int *)(lVar26 + 0x16c) = iVar17;
      if ((((int)unaff_x19[0x65] < (int)uVar8) || ((int)unaff_x19[0x66] < (int)uVar2)) ||
         (((int)unaff_x19[0x5c] == 5 && (iVar15 + 1 != (int)unaff_x19[0x67])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar21 = FUN_026b63d8(uVar32,0);
      if ((uVar32 != 0x200b) && ((uVar21 & 1) == 0)) {
        lVar26 = *in_stack_00000170;
        if ((lVar26 == 0) || (lVar33 = *(long *)(lVar26 + 0x38), lVar33 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar33 + 0x18) <= uVar8) goto LAB_035575f4;
        fVar55 = *(float *)(lVar33 + lVar36 * 0x178 + 0x160);
        if (fVar57 <= fVar55) {
          fVar57 = fVar55;
        }
        if (fStack0000000000000100 <= ABS(fVar41)) {
          fStack0000000000000100 = ABS(fVar41);
        }
        if (iVar15 != iStack000000000000006c) {
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar26 = *in_stack_00000170;
            if (lVar26 == 0) goto LAB_035574b8;
            lVar33 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
          }
          else {
            lVar33 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
          }
          fStack0000000000000104 = *(float *)(lVar33 + 0x15a8);
        }
        lVar26 = *(long *)(lVar26 + 0x38);
        if (lVar26 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar26 + 0x18) <= uVar8) goto LAB_035575f4;
        if (unaff_x19[0x1f] == 0) goto LAB_035574b8;
        fVar46 = *(float *)(lVar26 + lVar36 * 0x178 + 0x14c);
        fVar55 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
        fVar46 = fVar46 + fVar57 * fVar55;
        if (fVar46 <= fStack0000000000000104) {
          fStack0000000000000104 = fVar46;
        }
        uVar44 = (ulong)(uint)fStack0000000000000104;
        iStack000000000000006c = iVar15;
      }
      if (!bVar12) {
        bVar12 = false;
        if ((((uVar32 == 0xd) || ((uVar32 & 0xfffe) == 10)) || ((int)uVar7 < (int)uVar8)) ||
           ((bool)(bVar1 ^ 1))) goto LAB_03556364;
        if (uVar8 == uVar7) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar21 = FUN_026b97f8(uVar32,0);
          if ((uVar21 & 1) != 0) goto LAB_03556254;
        }
        if ((*in_stack_00000170 == 0) ||
           (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar26 + 0x18) <= uVar8) goto LAB_035575f4;
        lVar26 = lVar26 + lVar36 * 0x178;
        fStack000000000000008c = *(float *)(lVar26 + 0x160);
        fStack0000000000000078 = *(float *)(lVar26 + 0x11c);
        uVar45 = (ulong)(uint)fStack0000000000000078;
        bVar12 = fVar57 != 0.0;
        fVar55 = fStack000000000000008c;
        if (bVar12) {
          fVar55 = fVar57;
        }
        fVar57 = fVar55;
        uVar14 = *(undefined4 *)(lVar26 + 0x168);
        uStack0000000000000074 = 0;
        fVar55 = fVar41;
        if (bVar12) {
          fVar55 = fStack0000000000000100;
        }
        uVar44 = (ulong)(uint)fVar55;
        fStack0000000000000070 = fStack0000000000000104;
        fStack0000000000000100 = fVar55;
      }
      if (*unaff_x20 == 1) {
        if ((*in_stack_00000170 != 0) &&
           (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 != 0)) {
          if (uVar8 < *(uint *)(lVar26 + 0x18)) {
            lVar26 = lVar26 + lVar36 * 0x178;
            lVar33 = *unaff_x19;
            uVar47 = *(uint *)(lVar26 + 0x128);
            uVar42 = *(undefined4 *)(lVar26 + 0x160);
            goto LAB_035562ec;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
      if ((uVar8 == uVar6) || ((int)uVar7 <= (int)uVar8)) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar21 = FUN_026b63d8(uVar32,0);
        if ((*in_stack_00000170 != 0) &&
           (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 != 0)) {
          lVar33 = lVar36;
          uVar47 = uVar8;
          if (uVar32 == 0x200b || (uVar21 & 1) != 0) {
            lVar33 = lVar28;
            uVar47 = uVar7;
          }
          if (uVar47 < *(uint *)(lVar26 + 0x18)) {
            lVar26 = lVar26 + lVar33 * 0x178;
            uVar47 = *(uint *)(lVar26 + 0x128);
            uVar42 = *(undefined4 *)(lVar26 + 0x160);
            pcVar27 = *(code **)(*unaff_x19 + 0x8d8);
            goto LAB_035562f4;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
      if (!bVar1) {
        if ((*in_stack_00000170 != 0) &&
           (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 != 0)) {
          uVar47 = *(uint *)(lVar26 + 0x18);
          goto LAB_03555da0;
        }
        goto LAB_035574b8;
      }
      if ((int)uVar8 < *unaff_x20 + -1) {
        if ((*in_stack_00000170 == 0) ||
           (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar26 + 0x18) <= uVar18) goto LAB_035575f4;
        uVar21 = FUN_03567ad8(uVar14,*(undefined4 *)(lVar26 + lVar38),0);
        if ((uVar21 & 1) == 0) {
          if ((*in_stack_00000170 != 0) &&
             (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 != 0)) {
            if (uVar8 < *(uint *)(lVar26 + 0x18)) {
              lVar26 = lVar26 + lVar36 * 0x178;
              uVar48 = (ulong)*(uint *)(lVar26 + 0x128);
              uVar45 = (ulong)uStack0000000000000074;
              uVar44 = (ulong)(uint)fStack0000000000000070;
              (**(code **)(*unaff_x19 + 0x8d8))
                        (fStack0000000000000078,uVar44,uVar45,uVar48,fStack0000000000000104,0,
                         fStack000000000000008c,*(undefined4 *)(lVar26 + 0x160));
              puVar11 = OVRPlugin_OVRP_1_31_0_TypeInfo;
              lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              if (*(int *)(lVar26 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar26 = *(long *)puVar11;
              }
              goto LAB_03556348;
            }
            goto LAB_035575f4;
          }
          goto LAB_035574b8;
        }
      }
      bVar12 = true;
    }
LAB_03556364:
    if ((*in_stack_00000170 == 0) || (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar26 + 0x18) <= uVar8) goto LAB_035575f4;
    if (lVar29 == 0) goto LAB_035574b8;
    uVar47 = *(uint *)(lVar26 + lVar36 * 0x178 + 400);
    fVar55 = (float)FUN_03776a30(lVar29 + 0x50,0);
    if ((uVar47 >> 6 & 1) == 0) {
      if ((_iStack0000000000000128 & 0x100000000) != 0) {
        if ((*in_stack_00000170 == 0) ||
           (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar26 + 0x18) <= uVar18 - 2) goto LAB_035575f4;
        uVar47 = *(uint *)(lVar26 + lVar38 + -0x330);
        fVar53 = *(float *)(lVar26 + lVar38 + -0x30c);
        pcVar27 = *(code **)(*unaff_x19 + 0x8d8);
LAB_03556914:
        uVar48 = (ulong)uVar47;
        uVar44 = (ulong)(uint)fStack000000000000009c;
        uVar45 = (ulong)uStack0000000000000098;
        (*pcVar27)(fStack00000000000000a0,uVar44,uVar45,uVar48,
                   fStack00000000000000a8 * fVar55 + fVar53,0,fStack00000000000000a8,
                   fStack00000000000000a8);
      }
LAB_03556948:
      _iStack0000000000000128 = _iStack0000000000000128 & 0xffffffff;
    }
    else {
      lVar26 = *in_stack_00000170;
      if ((lVar26 == 0) || (lVar33 = *(long *)(lVar26 + 0x38), lVar33 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar33 + 0x18) <= uVar8) goto LAB_035575f4;
      *(int *)(lVar33 + lVar36 * 0x178 + 0x174) = iVar17;
      if ((((int)unaff_x19[0x65] < (int)uVar8) || ((int)unaff_x19[0x66] < (int)uVar2)) ||
         (((int)unaff_x19[0x5c] == 5 &&
          (*(int *)(lVar33 + lVar36 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((((uVar32 == 0xd) || ((uVar32 & 0xfffe) == 10)) || ((int)uVar7 < (int)uVar8)) ||
         ((_iStack0000000000000128 & 0x100000000) != 0 || !bVar1)) {
LAB_035564e8:
        if ((_iStack0000000000000128 & 0x100000000) == 0) goto LAB_03556948;
      }
      else {
        if (uVar8 == uVar7) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar21 = FUN_026b97f8(uVar32,0);
          if ((uVar21 & 1) != 0) goto LAB_035564e8;
          lVar26 = *in_stack_00000170;
          if (lVar26 == 0) goto LAB_035574b8;
        }
        lVar26 = *(long *)(lVar26 + 0x38);
        if (lVar26 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar26 + 0x18) <= uVar8) goto LAB_035575f4;
        lVar26 = lVar26 + lVar36 * 0x178;
        fStack0000000000000040 = *(float *)(lVar26 + 0x60);
        fStack0000000000000038 = *(float *)(lVar26 + 0x14c);
        uVar44 = (ulong)(uint)fStack0000000000000038;
        fStack00000000000000a0 = *(float *)(lVar26 + 0x11c);
        uVar45 = (ulong)(uint)fStack00000000000000a0;
        fStack00000000000000a8 = *(float *)(lVar26 + 0x160);
        fStack000000000000009c = fVar55 * fStack00000000000000a8 + fStack0000000000000038;
        uStack0000000000000098 = 0;
      }
      iVar15 = *unaff_x20;
      if (iVar15 == 1) {
LAB_03556628:
        if ((*in_stack_00000170 != 0) &&
           (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 != 0)) {
          if (uVar8 < *(uint *)(lVar26 + 0x18)) {
            lVar26 = lVar26 + lVar36 * 0x178;
            lVar28 = *unaff_x19;
            uVar47 = *(uint *)(lVar26 + 0x128);
            fVar53 = *(float *)(lVar26 + 0x14c);
LAB_03556654:
            pcVar27 = *(code **)(lVar28 + 0x8d8);
            goto LAB_03556914;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
      if (uVar8 == uVar6) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar21 = FUN_026b63d8(uVar32,0);
        if ((*in_stack_00000170 != 0) &&
           (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 != 0)) {
          uVar47 = *(uint *)(lVar26 + 0x18);
          if (uVar32 == 0x200b || (uVar21 & 1) != 0) {
            if (uVar47 <= uVar7) goto LAB_035575f4;
          }
          else {
FUN_035568e8:
            lVar28 = lVar36;
            if (uVar47 <= uVar8) goto LAB_035575f4;
          }
LAB_035568f0:
          lVar26 = lVar26 + lVar28 * 0x178;
          fVar53 = *(float *)(lVar26 + 0x14c);
          uVar47 = *(uint *)(lVar26 + 0x128);
          pcVar27 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_03556914;
        }
        goto LAB_035574b8;
      }
      if ((int)uVar8 < iVar15) {
        lVar26 = *in_stack_00000170;
        if ((lVar26 != 0) && (lVar33 = *(long *)(lVar26 + 0x38), lVar33 != 0)) {
          if (uVar18 < *(uint *)(lVar33 + 0x18)) {
            if (*(float *)(lVar33 + lVar38 + -0x108) == fStack0000000000000040) {
              fVar46 = *(float *)(lVar33 + lVar38 + -0x1c);
              if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar44 = (ulong)(uint)fStack0000000000000038;
              uVar21 = FUN_03567bac(fVar53 + fVar46,uVar44,0);
              if ((uVar21 & 1) != 0) {
                iVar15 = *unaff_x20;
                goto LAB_03556744;
              }
              lVar26 = *in_stack_00000170;
              if (lVar26 == 0) goto LAB_035574b8;
            }
            lVar26 = *(long *)(lVar26 + 0x38);
            if (lVar26 != 0) {
              uVar47 = *(uint *)(lVar26 + 0x18);
              if ((int)uVar8 <= (int)uVar7) goto FUN_035568e8;
              if (uVar7 < uVar47) goto LAB_035568f0;
              goto LAB_035575f4;
            }
            goto LAB_035574b8;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
LAB_03556744:
      if ((int)uVar8 < iVar15) {
        iVar15 = FUN_036d3364(lVar29,0);
        if (*(uint *)(lVar19 + 0x18) <= uVar18) goto LAB_035575f4;
        lVar26 = *(long *)(lVar19 + lVar38 + -0x130);
        if (lVar26 == 0) goto LAB_035574b8;
        iVar16 = FUN_036d3364(lVar26,0);
        if (iVar15 != iVar16) goto LAB_03556628;
      }
      if (!bVar1) {
        if ((*in_stack_00000170 != 0) &&
           (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 != 0)) {
          if (uVar18 - 2 < *(uint *)(lVar26 + 0x18)) {
            lVar28 = *unaff_x19;
            uVar47 = *(uint *)(lVar26 + lVar38 + -0x330);
            fVar53 = *(float *)(lVar26 + lVar38 + -0x30c);
            goto LAB_03556654;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
      _iStack0000000000000128 = CONCAT44(1,iStack0000000000000128);
    }
    if ((*in_stack_00000170 == 0) || (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 == 0))
    goto LAB_035574b8;
    uVar47 = (uint)*(undefined8 *)(lVar26 + 0x18);
    if (uVar47 <= uVar8) goto LAB_035575f4;
    if ((*(byte *)(lVar26 + lVar36 * 0x178 + 0x191) >> 1 & 1) == 0) {
      if (bVar9) {
        uVar45 = (ulong)in_stack_000000c0;
        uVar44 = (ulong)(uint)fStack00000000000000dc;
        uVar48 = (ulong)(uint)fStack00000000000000c8;
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000d8,uVar44,uVar45,uVar48,fStack00000000000000d0,uVar45);
      }
LAB_035569b4:
      bVar9 = false;
    }
    else {
      if ((((int)unaff_x19[0x65] < (int)uVar8) || ((int)unaff_x19[0x66] < (int)uVar2)) ||
         (((int)unaff_x19[0x5c] == 5 &&
          (*(int *)(lVar26 + lVar36 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar9) {
        if ((((uVar32 == 0xd) || ((uVar32 & 0xfffe) == 10)) || ((int)uVar7 < (int)uVar8)) ||
           (!bVar1)) goto LAB_035569b4;
        if (uVar8 == uVar7) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar21 = FUN_026b97f8(uVar32,0);
          if ((uVar21 & 1) != 0) goto LAB_035569b4;
        }
        puVar11 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar28 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar28 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar28 = *(long *)puVar11;
        }
        if ((*in_stack_00000170 == 0) ||
           (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 == 0)) goto LAB_035574b8;
        uVar47 = (uint)*(undefined8 *)(lVar26 + 0x18);
        if (uVar47 <= uVar8) goto LAB_035575f4;
        lVar28 = *(long *)(lVar28 + 0xb8);
        lVar29 = lVar26 + lVar36 * 0x178;
        in_stack_000017b8 = *(undefined8 *)(lVar29 + 0x184);
        in_stack_000017b0 = *(undefined8 *)(lVar29 + 0x17c);
        fStack00000000000000d8 = *(float *)(lVar28 + 0x1598);
        fStack00000000000000dc = *(float *)(lVar28 + 0x159c);
        in_stack_000017c0 = *(float *)(lVar29 + 0x18c);
        fStack00000000000000c8 = *(float *)(lVar28 + 0x15a0);
        fStack00000000000000d0 = *(float *)(lVar28 + 0x15a4);
        in_stack_000000c0 = 0;
      }
      if (uVar47 <= uVar8) goto LAB_035575f4;
      lVar26 = lVar26 + lVar36 * 0x178;
      fVar55 = *(float *)(lVar26 + 0x128);
      fVar49 = *(float *)(lVar26 + 0x188);
      uVar34 = *(undefined8 *)(lVar26 + 0x17c);
      fVar52 = *(float *)(lVar26 + 0x184);
      uVar20 = *(undefined8 *)(lVar26 + 0x184);
      fVar51 = *(float *)(lVar26 + 0x18c);
      fVar53 = *(float *)(lVar26 + 0x11c);
      fVar50 = *(float *)(lVar26 + 0x148);
      fVar46 = *(float *)(lVar26 + 0x150);
      in_stack_00000178 = uVar34;
      fStack0000000000000180 = fVar52;
      fStack0000000000000184 = fVar49;
      in_stack_00000188 = fVar51;
      in_stack_00000190 = in_stack_000017b0;
      in_stack_00000198 = in_stack_000017b8;
      in_stack_000001a0 = in_stack_000017c0;
      uVar21 = FUN_03568490(&stack0x00000190,&stack0x00000178,0);
      lVar26 = *(long *)OVRPlugin_Mesh_TypeInfo;
      if ((uVar21 & 1) == 0) {
        if (*(int *)(lVar26 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar26);
        }
        fVar55 = fVar55 + (float)in_stack_000017b8;
        uVar45 = (ulong)(uint)fVar55;
        fVar53 = fVar53 - (float)((ulong)in_stack_000017b0 >> 0x20);
        fVar46 = fVar46 - in_stack_000017c0;
        uVar44 = (ulong)(uint)fVar46;
        fVar50 = fVar50 + (float)((ulong)in_stack_000017b8 >> 0x20);
        uVar48 = (ulong)(uint)fVar50;
        if (fVar53 <= fStack00000000000000d8) {
          fStack00000000000000d8 = fVar53;
        }
        if (fVar46 <= fStack00000000000000dc) {
          fStack00000000000000dc = fVar46;
        }
        if (fStack00000000000000c8 <= fVar55) {
          fStack00000000000000c8 = fVar55;
        }
        if (fStack00000000000000d0 <= fVar50) {
          fStack00000000000000d0 = fVar50;
        }
      }
      else {
        if (*(int *)(lVar26 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar26);
        }
        fVar53 = (fVar53 + (fStack00000000000000c8 - (float)in_stack_000017b8)) * 0.5;
        uVar48 = (ulong)(uint)fVar53;
        if (fVar46 <= fStack00000000000000dc) {
          fStack00000000000000dc = fVar46;
        }
        uVar44 = (ulong)(uint)fStack00000000000000dc;
        uVar45 = (ulong)in_stack_000000c0;
        if (fStack00000000000000d0 <= fVar50) {
          fStack00000000000000d0 = fVar50;
        }
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000d8,uVar44,uVar45,uVar48,fStack00000000000000d0,uVar45);
        fStack00000000000000dc = fVar46 - fVar51;
        fStack00000000000000c8 = fVar55 + fVar52;
        in_stack_000000c0 = 0;
        fStack00000000000000d0 = fVar50 + fVar49;
        fStack00000000000000d8 = fVar53;
        in_stack_000017b0 = uVar34;
        in_stack_000017b8 = uVar20;
        in_stack_000017c0 = fVar51;
      }
      if (((*unaff_x20 == 1) || (uVar8 == uVar6)) || (((int)uVar7 <= (int)uVar8 || (!bVar1)))) {
        uVar45 = (ulong)in_stack_000000c0;
        uVar44 = (ulong)(uint)fStack00000000000000dc;
        uVar48 = (ulong)(uint)fStack00000000000000c8;
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000d8,uVar44,uVar45,uVar48,fStack00000000000000d0,uVar45);
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
    }
    iVar15 = *unaff_x20;
    lVar38 = lVar38 + 0x178;
    _iStack0000000000000128 = CONCAT44(uStack000000000000012c,iStack0000000000000128 + 1);
    bVar1 = iVar15 <= (int)uVar18;
    unaff_x28 = in_stack_00000170;
    uVar18 = uVar18 + 1;
    uVar47 = uVar2;
    if (bVar1) goto FUN_03556ed8;
    goto LAB_03554e78;
  }
  iStack00000000000000d4 = 0;
  iVar17 = 0;
  in_stack_00000170 = unaff_x28;
  goto LAB_03556f00;
FUN_03556ed8:
  lVar19 = *in_stack_00000170;
  if (lVar19 == 0) goto LAB_035574b8;
  iVar17 = uVar2 + 1;
  plVar37 = (long *)OVRPlugin_Media_TypeInfo;
LAB_03556f00:
  *(int *)(lVar19 + 0x18) = iVar15;
  lVar38 = unaff_x19[0xd4];
  *(int *)(lVar19 + 0x2c) = iVar17;
  if (iVar15 < 1 || iStack00000000000000d4 == 0) {
    iStack00000000000000d4 = 1;
  }
  *(int *)(lVar19 + 0x1c) = (int)lVar38;
  *(int *)(lVar19 + 0x24) = iStack00000000000000d4;
  *(int *)(lVar19 + 0x30) = (int)unaff_x19[0x96] + 1;
  if (((int)unaff_x19[99] != 0xff) ||
     (uVar21 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar21 & 1) == 0)) {
LAB_03554724:
    if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_03567630();
    return;
  }
  lVar19 = unaff_x19[0xdf];
  if (lVar19 != 0) {
    (**(code **)(lVar19 + 0x18))
              (*(undefined8 *)(lVar19 + 0x40),*in_stack_00000170,*(undefined8 *)(lVar19 + 0x28));
  }
  if (unaff_x19[0xe5] != 0) {
    iVar17 = FUN_03911ee4(unaff_x19[0xe5],0);
    if (iVar17 != 0x19) {
      lVar19 = unaff_x19[0xe5];
      if (lVar19 == 0) goto LAB_035574b8;
      uVar18 = FUN_03911ee4(lVar19,0);
      FUN_03911f20(lVar19,uVar18 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*in_stack_00000170 == 0) || (lVar19 = *(long *)(*in_stack_00000170 + 0x60), lVar19 == 0))
      goto LAB_035574b8;
      if (*(int *)(*plVar37 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar19 + 0x18) == 0) goto LAB_035575f4;
      FUN_03596b20(lVar19 + 0x20,1,0);
    }
    if (unaff_x19[0x74] != 0) {
      FUN_036aa790(unaff_x19[0x74],0);
      if ((unaff_x19[0x6d] != 0) && (lVar19 = *(long *)(unaff_x19[0x6d] + 0x60), lVar19 != 0)) {
        if (*(int *)(lVar19 + 0x18) == 0) {
LAB_035575f4:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        if (unaff_x19[0x74] != 0) {
          FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar19 + 0x30),0);
          if ((unaff_x19[0x6d] != 0) && (lVar19 = *(long *)(unaff_x19[0x6d] + 0x60), lVar19 != 0)) {
            if (*(int *)(lVar19 + 0x18) == 0) goto LAB_035575f4;
            if (unaff_x19[0x74] != 0) {
              FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar19 + 0x48),0);
              if ((unaff_x19[0x6d] != 0) &&
                 (lVar19 = *(long *)(unaff_x19[0x6d] + 0x60), lVar19 != 0)) {
                if (*(int *)(lVar19 + 0x18) == 0) goto LAB_035575f4;
                if (unaff_x19[0x74] != 0) {
                  FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar19 + 0x50),0);
                  if ((unaff_x19[0x6d] != 0) &&
                     (lVar19 = *(long *)(unaff_x19[0x6d] + 0x60), lVar19 != 0)) {
                    if (*(int *)(lVar19 + 0x18) == 0) goto LAB_035575f4;
                    if (unaff_x19[0x74] != 0) {
                      FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar19 + 0x58),0);
                      if (unaff_x19[0x74] != 0) {
                        FUN_036aa280(unaff_x19[0x74],0);
                        if (unaff_x19[0xe4] != 0) {
                          FUN_0390f3a4(unaff_x19[0xe4],unaff_x19[0x74],0);
                          if (unaff_x19[0xe4] != 0) {
                            uVar20 = FUN_0390ef60(unaff_x19[0xe4],0);
                            if (unaff_x19[0xe4] != 0) {
                              uVar18 = FUN_0390ed3c(unaff_x19[0xe4],0);
                              lVar19 = *in_stack_00000170;
                              if (lVar19 != 0) {
                                lVar26 = 0;
                                lVar38 = 0;
                                do {
                                  uVar21 = lVar38 + 1;
                                  if ((long)*(int *)(lVar19 + 0x34) <= (long)uVar21)
                                  goto LAB_03554724;
                                  lVar19 = *(long *)(lVar19 + 0x60);
                                  if (lVar19 == 0) break;
                                  if (*(int *)(*plVar37 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  if (*(uint *)(lVar19 + 0x18) <= uVar21) goto LAB_035575f4;
                                  FUN_03596a20(lVar19 + lVar26 + 0x70,0);
                                  lVar19 = unaff_x19[0xe1];
                                  if (lVar19 == 0) break;
                                  if (*(uint *)(lVar19 + 0x18) <= uVar21) goto LAB_035575f4;
                                  uVar34 = *(undefined8 *)(lVar19 + lVar38 * 8 + 0x28);
                                  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  uVar22 = FUN_036d35a8(uVar34,0,0);
                                  if ((uVar22 & 1) == 0) {
                                    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                                      if ((*in_stack_00000170 == 0) ||
                                         (lVar19 = *(long *)(*in_stack_00000170 + 0x60), lVar19 == 0
                                         )) break;
                                      if (*(int *)(*plVar37 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                      }
                                      if (*(uint *)(lVar19 + 0x18) <= uVar21) goto LAB_035575f4;
                                      FUN_03596b20(lVar19 + lVar26 + 0x70,1,0);
                                    }
                                    lVar19 = unaff_x19[0xe1];
                                    if (lVar19 == 0) break;
                                    if (*(uint *)(lVar19 + 0x18) <= uVar21) goto LAB_035575f4;
                                    lVar19 = *(long *)(lVar19 + lVar38 * 8 + 0x28);
                                    if (lVar19 == 0) break;
                                    lVar19 = UnityEngine_Material__GetColorArray(lVar19,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar28 = *(long *)(*in_stack_00000170 + 0x60), lVar28 == 0))
                                    break;
                                    if (*(uint *)(lVar28 + 0x18) <= uVar21) goto LAB_035575f4;
                                    if (lVar19 == 0) break;
                                    FUN_036a460c(lVar19,*(undefined8 *)(lVar28 + lVar26 + 0x80),0);
                                    lVar19 = unaff_x19[0xe1];
                                    if (lVar19 == 0) break;
                                    if (*(uint *)(lVar19 + 0x18) <= uVar21) goto LAB_035575f4;
                                    lVar19 = *(long *)(lVar19 + lVar38 * 8 + 0x28);
                                    if (lVar19 == 0) break;
                                    lVar19 = UnityEngine_Material__GetColorArray(lVar19,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar28 = *(long *)(*in_stack_00000170 + 0x60), lVar28 == 0))
                                    break;
                                    if (*(uint *)(lVar28 + 0x18) <= uVar21) goto LAB_035575f4;
                                    if (lVar19 == 0) break;
                                    FUN_036a4810(lVar19,*(undefined8 *)(lVar28 + lVar26 + 0x98),0);
                                    lVar19 = unaff_x19[0xe1];
                                    if (lVar19 == 0) break;
                                    if (*(uint *)(lVar19 + 0x18) <= uVar21) goto LAB_035575f4;
                                    lVar19 = *(long *)(lVar19 + lVar38 * 8 + 0x28);
                                    if (lVar19 == 0) break;
                                    lVar19 = UnityEngine_Material__GetColorArray(lVar19,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar28 = *(long *)(*in_stack_00000170 + 0x60), lVar28 == 0))
                                    break;
                                    if (*(uint *)(lVar28 + 0x18) <= uVar21) goto LAB_035575f4;
                                    if (lVar19 == 0) break;
                                    FUN_036a48bc(lVar19,*(undefined8 *)(lVar28 + lVar26 + 0xa0),0);
                                    lVar19 = unaff_x19[0xe1];
                                    if (lVar19 == 0) break;
                                    if (*(uint *)(lVar19 + 0x18) <= uVar21) goto LAB_035575f4;
                                    lVar19 = *(long *)(lVar19 + lVar38 * 8 + 0x28);
                                    if (lVar19 == 0) break;
                                    lVar19 = UnityEngine_Material__GetColorArray(lVar19,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar28 = *(long *)(*in_stack_00000170 + 0x60), lVar28 == 0))
                                    break;
                                    if (*(uint *)(lVar28 + 0x18) <= uVar21) goto LAB_035575f4;
                                    if (lVar19 == 0) break;
                                    FUN_036a4e24(lVar19,*(undefined8 *)(lVar28 + lVar26 + 0xa8),0);
                                    lVar19 = unaff_x19[0xe1];
                                    if (lVar19 == 0) break;
                                    if (*(uint *)(lVar19 + 0x18) <= uVar21) goto LAB_035575f4;
                                    lVar19 = *(long *)(lVar19 + lVar38 * 8 + 0x28);
                                    if ((lVar19 == 0) ||
                                       (lVar19 = UnityEngine_Material__GetColorArray(lVar19,0),
                                       lVar19 == 0)) break;
                                    FUN_036aa280(lVar19,0);
                                    lVar19 = unaff_x19[0xe1];
                                    if (lVar19 == 0) break;
                                    if (*(uint *)(lVar19 + 0x18) <= uVar21) goto LAB_035575f4;
                                    lVar19 = *(long *)(lVar19 + lVar38 * 8 + 0x28);
                                    if (lVar19 == 0) break;
                                    lVar19 = FUN_037b514c(lVar19,0);
                                    lVar28 = unaff_x19[0xe1];
                                    if (lVar28 == 0) break;
                                    if (*(uint *)(lVar28 + 0x18) <= uVar21) goto LAB_035575f4;
                                    lVar28 = *(long *)(lVar28 + lVar38 * 8 + 0x28);
                                    if ((lVar28 == 0) ||
                                       (uVar34 = UnityEngine_Material__GetColorArray(lVar28,0),
                                       lVar19 == 0)) break;
                                    FUN_0390f3a4(lVar19,uVar34,0);
                                    lVar19 = unaff_x19[0xe1];
                                    if (lVar19 == 0) break;
                                    if (*(uint *)(lVar19 + 0x18) <= uVar21) goto LAB_035575f4;
                                    lVar19 = *(long *)(lVar19 + lVar38 * 8 + 0x28);
                                    if ((lVar19 == 0) ||
                                       (lVar19 = FUN_037b514c(lVar19,0), lVar19 == 0)) break;
                                    FUN_0390eec8(uVar20,uVar44,uVar45,uVar48,lVar19,0);
                                    lVar19 = unaff_x19[0xe1];
                                    if (lVar19 == 0) break;
                                    if (*(uint *)(lVar19 + 0x18) <= uVar21) goto LAB_035575f4;
                                    lVar19 = *(long *)(lVar19 + lVar38 * 8 + 0x28);
                                    if ((lVar19 == 0) ||
                                       (lVar19 = FUN_037b514c(lVar19,0), lVar19 == 0)) break;
                                    FUN_0390ed78(lVar19,uVar18 & 1,0);
                                    lVar19 = unaff_x19[0xe1];
                                    if (lVar19 == 0) break;
                                    if (*(uint *)(lVar19 + 0x18) <= uVar21) goto LAB_035575f4;
                                    plVar35 = *(long **)(lVar19 + lVar38 * 8 + 0x28);
                                    uVar47 = (**(code **)(*unaff_x19 + 0x2b8))();
                                    if (plVar35 == (long *)0x0) break;
                                    (**(code **)(*plVar35 + 0x2c8))
                                              (plVar35,uVar47 & 1,*(undefined8 *)(*plVar35 + 0x2d0))
                                    ;
                                  }
                                  lVar19 = *in_stack_00000170;
                                  lVar38 = lVar38 + 1;
                                  lVar26 = lVar26 + 0x50;
                                } while (lVar19 != 0);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_035574b8:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


