/*
FUNCTION_NAME: UnityEngine.Animator$$SetIKRotation
ENTRY_POINT: 035547bc
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


void UnityEngine_Animator__SetIKRotation(undefined1 param_1 [16],float param_2)

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
  uint uVar17;
  undefined8 uVar18;
  ulong uVar19;
  ulong uVar20;
  char cVar21;
  long lVar22;
  undefined4 *puVar23;
  long lVar24;
  long lVar25;
  code *pcVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  uint uVar31;
  long lVar32;
  long *unaff_x19;
  int *unaff_x20;
  long unaff_x21;
  undefined8 uVar33;
  long *plVar34;
  long *unaff_x22;
  long lVar35;
  long *unaff_x26;
  long lVar36;
  long *unaff_x28;
  uint uVar37;
  float fVar38;
  float fVar39;
  undefined4 uVar40;
  float fVar41;
  ulong uVar42;
  ulong uVar43;
  float fVar44;
  uint uVar45;
  ulong uVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
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
  undefined4 in_stack_000017c4;
  float in_stack_000017d8;
  
  thunk_FUN_01a58e78();
  if (*(int *)(unaff_x21 + 0x18) == 0) goto LAB_035575f4;
  FUN_035968e8(unaff_x21 + 0x20,0,0);
  if (DAT_0411f172 == '\0') {
    FUN_01ab69ac(PTR_DAT_03cbded8);
    DAT_0411f172 = '\x01';
  }
  iVar13 = (int)unaff_x19[0x4e];
  fStack00000000000000fc = **(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  uStack00000000000000e8 = *(undefined8 *)(*(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar22 = unaff_x19[0xe3];
  uStack00000000000000b8 = uStack00000000000000e8;
  fStack00000000000000c4 = fStack00000000000000fc;
  if (iVar13 < 0x401) {
    if (iVar13 == 0x100) {
      if (lVar22 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar22 + 0x18) < 2) goto LAB_035575f4;
      uVar18 = *(undefined8 *)(lVar22 + 0x30);
      if ((int)unaff_x19[0x5c] == 5) {
        if ((*unaff_x28 == 0) || (lVar36 = *(long *)(*unaff_x28 + 0x58), lVar36 == 0))
        goto LAB_035574b8;
        if (*(uint *)(lVar36 + 0x18) <= in_stack_00000030) goto LAB_035575f4;
        fVar38 = *(float *)(lVar36 + (long)(int)in_stack_00000030 * 0x14 + 0x28);
      }
      else {
        fVar38 = *(float *)(unaff_x19 + 0x97);
      }
      fStack00000000000000c4 = fStack000000000000002c + 0.0 + *(float *)(lVar22 + 0x2c);
      param_2 = (0.0 - fVar38) - fStack0000000000000020;
    }
    else if (iVar13 == 0x200) {
      if (lVar22 == 0) goto LAB_035574b8;
      if ((*(int *)(lVar22 + 0x18) == 1) || (*(int *)(lVar22 + 0x18) == 0)) goto LAB_035575f4;
      fStack00000000000000c4 = (*(float *)(lVar22 + 0x20) + *(float *)(lVar22 + 0x2c)) * 0.5;
      uVar18 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar22 + 0x24) >> 0x20) +
                        (float)((ulong)*(undefined8 *)(lVar22 + 0x30) >> 0x20)) * 0.5,
                        ((float)*(undefined8 *)(lVar22 + 0x24) +
                        (float)*(undefined8 *)(lVar22 + 0x30)) * 0.5);
      if ((int)unaff_x19[0x5c] == 5) {
        if ((*unaff_x28 == 0) || (lVar22 = *(long *)(*unaff_x28 + 0x58), lVar22 == 0))
        goto LAB_035574b8;
        if (*(uint *)(lVar22 + 0x18) <= in_stack_00000030) goto LAB_035575f4;
        lVar22 = lVar22 + (long)(int)in_stack_00000030 * 0x14;
        fStack00000000000000c4 = fStack000000000000002c + 0.0 + fStack00000000000000c4;
        param_2 = ((fStack0000000000000020 + *(float *)(lVar22 + 0x28) + *(float *)(lVar22 + 0x30))
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
      if (lVar22 == 0) goto LAB_035574b8;
      if (*(int *)(lVar22 + 0x18) == 0) goto LAB_035575f4;
      uVar18 = *(undefined8 *)(lVar22 + 0x24);
      if ((int)unaff_x19[0x5c] == 5) {
        if ((*unaff_x28 == 0) || (lVar36 = *(long *)(*unaff_x28 + 0x58), lVar36 == 0))
        goto LAB_035574b8;
        if (*(uint *)(lVar36 + 0x18) <= in_stack_00000030) goto LAB_035575f4;
        in_stack_000017d8 = *(float *)(lVar36 + (long)(int)in_stack_00000030 * 0x14 + 0x30);
      }
      fStack00000000000000c4 = fStack000000000000002c + 0.0 + *(float *)(lVar22 + 0x20);
      param_2 = fStack0000000000000024 + (0.0 - in_stack_000017d8);
    }
LAB_03554c3c:
    uStack00000000000000b8 = CONCAT44((float)((ulong)uVar18 >> 0x20) + 0.0,(float)uVar18 + param_2);
  }
  else if (iVar13 == 0x800) {
    if (lVar22 == 0) goto LAB_035574b8;
    if ((*(int *)(lVar22 + 0x18) == 1) || (*(int *)(lVar22 + 0x18) == 0)) goto LAB_035575f4;
    param_2 = fStack000000000000002c + 0.0 +
              (*(float *)(lVar22 + 0x20) + *(float *)(lVar22 + 0x2c)) * 0.5;
    uStack00000000000000b8 =
         CONCAT44(((float)((ulong)*(undefined8 *)(lVar22 + 0x24) >> 0x20) +
                  (float)((ulong)*(undefined8 *)(lVar22 + 0x30) >> 0x20)) * 0.5 + 0.0,
                  ((float)*(undefined8 *)(lVar22 + 0x24) + (float)*(undefined8 *)(lVar22 + 0x30)) *
                  0.5 + 0.0);
    fStack00000000000000c4 = param_2;
  }
  else {
    if (iVar13 == 0x1000) {
      if (lVar22 == 0) goto LAB_035574b8;
      if ((*(int *)(lVar22 + 0x18) == 1) || (*(int *)(lVar22 + 0x18) == 0)) goto LAB_035575f4;
      uVar18 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar22 + 0x24) >> 0x20) +
                        (float)((ulong)*(undefined8 *)(lVar22 + 0x30) >> 0x20)) * 0.5,
                        ((float)*(undefined8 *)(lVar22 + 0x24) +
                        (float)*(undefined8 *)(lVar22 + 0x30)) * 0.5);
      fStack00000000000000c4 =
           fStack000000000000002c + 0.0 +
           (*(float *)(lVar22 + 0x20) + *(float *)(lVar22 + 0x2c)) * 0.5;
      param_2 = 0.0 - ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x9d) +
                       *(float *)(unaff_x19 + 0x9c)) - fStack0000000000000024) * 0.5;
      goto LAB_03554c3c;
    }
    if (iVar13 == 0x2000) {
      if (lVar22 == 0) goto LAB_035574b8;
      if ((*(int *)(lVar22 + 0x18) == 1) || (*(int *)(lVar22 + 0x18) == 0)) goto LAB_035575f4;
      param_2 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) - fStack0000000000000020) -
                      fStack0000000000000024) * 0.5;
      uStack00000000000000b8 =
           CONCAT44(((float)((ulong)*(undefined8 *)(lVar22 + 0x24) >> 0x20) +
                    (float)((ulong)*(undefined8 *)(lVar22 + 0x30) >> 0x20)) * 0.5 + 0.0,
                    ((float)*(undefined8 *)(lVar22 + 0x24) + (float)*(undefined8 *)(lVar22 + 0x30))
                    * 0.5 + param_2);
      fStack00000000000000c4 =
           fStack000000000000002c + 0.0 +
           (*(float *)(lVar22 + 0x20) + *(float *)(lVar22 + 0x2c)) * 0.5;
    }
  }
LAB_03554c4c:
  if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
  uVar18 = FUN_03912334(unaff_x19[0xe5],0);
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*unaff_x22);
  }
  uVar19 = FUN_036d35a8(uVar18,0,0);
  lVar22 = FUN_0357f060();
  if (lVar22 == 0) goto LAB_035574b8;
  FUN_036df824(lVar22,0);
  *(float *)(unaff_x19 + 0xe2) = param_2;
  if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
  iVar13 = FUN_039117fc(unaff_x19[0xe5],0);
  if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
  fVar38 = (float)FUN_03911954(unaff_x19[0xe5],0);
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
  lVar22 = *(long *)OVRPlugin_Mesh_TypeInfo;
  if (*(int *)(lVar22 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar22 = *(long *)puVar11;
  }
  puVar23 = *(undefined4 **)(lVar22 + 0xb8);
  uVar42 = (ulong)(uint)puVar23[1];
  uVar43 = (ulong)(uint)puVar23[2];
  uVar46 = (ulong)(uint)puVar23[3];
  FUN_035683a4(*puVar23,uVar42,uVar43,uVar46,&stack0x000017b0,0x4000ffff,0);
  if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  lVar22 = *unaff_x28;
  if (lVar22 == 0) goto LAB_035574b8;
  iVar15 = *unaff_x20;
  if (0 < iVar15) {
    lVar22 = *(long *)(lVar22 + 0x38);
    param_2 = ABS(param_2);
    fVar41 = 1.0;
    if ((uVar19 & 1) == 0) {
      fVar41 = param_2;
    }
    if (lVar22 == 0) goto LAB_035574b8;
    bVar12 = false;
    bVar10 = false;
    _iStack0000000000000128 = 0;
    bVar9 = false;
    iStack00000000000000d4 = 0;
    uStack0000000000000028 = 0;
    uStack0000000000000158 = 0;
    iStack000000000000006c = 0;
    lVar36 = 0x2e0;
    fVar39 = 0.0;
    fVar55 = 0.0;
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
    uVar17 = 1;
    uVar45 = 0;
LAB_03554e78:
    uVar8 = uVar17 - 1;
    if (*(uint *)(lVar22 + 0x18) <= uVar8) goto LAB_035575f4;
    if ((*unaff_x28 == 0) || (lVar25 = *(long *)(*unaff_x28 + 0x50), lVar25 == 0))
    goto LAB_035574b8;
    lVar35 = (long)(int)uVar8;
    lVar27 = lVar22 + lVar35 * 0x178;
    uVar2 = *(uint *)(lVar27 + 100);
    if (*(uint *)(lVar25 + 0x18) <= uVar2) goto LAB_035575f4;
    lVar32 = (long)(int)uVar2;
    lVar25 = lVar25 + lVar32 * 0x5c;
    lVar28 = *(long *)(lVar27 + 0x38);
    uVar4 = *(ushort *)(lVar27 + 0x20);
    uVar6 = *(uint *)(lVar25 + 0x3c);
    uVar37 = *(uint *)(lVar25 + 0x68);
    iVar3 = *(int *)(lVar25 + 0x20);
    iVar15 = *(int *)(lVar25 + 0x28);
    iVar16 = *(int *)(lVar25 + 0x2c);
    uVar7 = *(uint *)(lVar25 + 0x40);
    lVar27 = (long)(int)uVar7;
    fVar44 = *(float *)(lVar25 + 0x4c);
    fVar47 = *(float *)(lVar25 + 0x54);
    fVar51 = *(float *)(lVar25 + 0x58);
    fVar52 = *(float *)(lVar25 + 0x5c);
    fVar49 = *(float *)(lVar25 + 0x60);
    fVar50 = *(float *)(lVar25 + 0x6c);
    fVar54 = *(float *)(lVar25 + 0x70);
    fVar53 = *(float *)(lVar25 + 0x74);
    fVar48 = *(float *)(lVar25 + 0x78);
    uVar31 = (uint)uVar4;
    if ((int)uVar37 < 9) {
      switch(uVar37) {
      case 1:
        if ((char)unaff_x19[0x1e] == '\0') {
          fStack00000000000000fc = fVar49 + 0.0;
        }
        else {
          fStack00000000000000fc = 0.0 - fVar51;
        }
        break;
      case 2:
LAB_03555018:
        fStack00000000000000fc = (fVar49 + fVar52 * 0.5) - fVar51 * 0.5;
        break;
      default:
        goto switchD_03554f58_caseD_3;
      case 4:
        fStack00000000000000fc = (fVar52 + fVar49) - fVar51;
        if ((char)unaff_x19[0x1e] != '\0') {
          fStack00000000000000fc = fVar52 + fVar49;
        }
        break;
      case 8:
        goto switchD_03554f58_caseD_8;
      }
LAB_03555088:
      uStack00000000000000e8 = 0;
    }
    else if (uVar37 == 0x10) {
switchD_03554f58_caseD_8:
      if (uVar4 < 0xad) {
        if ((uVar4 != 3) && (uVar4 != 10)) {
LAB_03554fac:
          if (*(uint *)(lVar22 + 0x18) <= uVar6) goto LAB_035575f4;
          uVar5 = *(undefined2 *)(lVar22 + (long)(int)uVar6 * 0x178 + 0x20);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar19 = FUN_026b8cc4(uVar5,0);
          if ((uVar19 & 1) == 0) {
            bVar1 = (int)uVar2 < (int)unaff_x19[0x95];
          }
          else {
            bVar1 = false;
          }
          if ((fVar51 <= fVar52) && (!bVar1 && uVar37 >> 4 == 0)) {
            fStack00000000000000fc = fVar49;
            if ((char)unaff_x19[0x1e] != '\0') {
              fStack00000000000000fc = fVar52 + fVar49;
            }
            goto LAB_03555088;
          }
          if (((uVar17 == 1) || (uVar2 != uVar45)) || (uVar8 == *(uint *)((long)unaff_x19 + 0x324)))
          {
            fStack00000000000000fc = fVar49;
            if ((char)unaff_x19[0x1e] != '\0') {
              fStack00000000000000fc = fVar52 + fVar49;
            }
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uStack0000000000000028 = FUN_026b97f8(uVar31,0);
            uStack00000000000000e8 = 0;
          }
          else {
            cVar21 = (char)unaff_x19[0x1e];
            fVar49 = -fVar51;
            if (cVar21 != '\0') {
              fVar49 = fVar51;
            }
            if (*(uint *)(lVar22 + 0x18) <= uVar6) goto LAB_035575f4;
            iVar16 = (int)*(char *)(lVar22 + (long)(int)uVar6 * 0x178 + 0x194) +
                     (-iVar3 - (uStack0000000000000028 & 1)) + iVar16 + -1;
            if (iVar16 < 1) {
              fVar51 = 1.0;
              iVar16 = 1;
            }
            else {
              fVar51 = *(float *)((long)unaff_x19 + 0x2dc);
            }
            if (uVar31 == 9) {
LAB_03556e74:
              fVar51 = 1.0 - fVar51;
            }
            else {
              if (uVar31 != 0xa0) {
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar19 = FUN_026b97f8(uVar31,0);
                cVar21 = (char)unaff_x19[0x1e];
                if ((uVar19 & 1) != 0) goto LAB_03556e74;
              }
              iVar16 = (iVar3 - (~uStack0000000000000028 & 1)) + iVar15;
            }
            fVar51 = ((fVar52 + fVar49) * fVar51) / (float)iVar16;
            if (cVar21 == '\0') {
              fStack00000000000000fc = fStack00000000000000fc + fVar51;
              uStack00000000000000e8 =
                   CONCAT44((float)((ulong)uStack00000000000000e8 >> 0x20) + 0.0,
                            (float)uStack00000000000000e8 + 0.0);
            }
            else {
              fStack00000000000000fc = fStack00000000000000fc - fVar51;
            }
          }
        }
      }
      else if (((uVar4 != 0xad) && (uVar4 != 0x200b)) && (uVar4 != 0x2060)) goto LAB_03554fac;
    }
    else if (uVar37 == 0x20) {
      fVar51 = fVar50 + fVar53;
      goto LAB_03555018;
    }
switchD_03554f58_caseD_3:
    uVar37 = (uint)*(undefined8 *)(lVar22 + 0x18);
    if (uVar37 <= uVar8) goto LAB_035575f4;
    lVar25 = lVar22 + lVar35 * 0x178;
    fVar52 = fStack00000000000000c4 + fStack00000000000000fc;
    fVar51 = (float)uStack00000000000000b8 + (float)uStack00000000000000e8;
    fVar49 = (float)((ulong)uStack00000000000000b8 >> 0x20) +
             (float)((ulong)uStack00000000000000e8 >> 0x20);
    if (*(char *)(lVar25 + 0x194) == '\0') goto LAB_03555938;
    iVar15 = *(int *)(lVar22 + lVar35 * 0x178 + 0x2c);
    if (iVar15 != 0) goto LAB_0355574c;
    fVar39 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar2,1.0);
    switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
    case 0:
      lVar24 = lVar22 + lVar35 * 0x178;
      *(undefined4 *)(lVar24 + 0x84) = 0;
      *(undefined4 *)(lVar24 + 0xac) = 0;
      *(undefined4 *)(lVar24 + 0xd4) = 0x3f800000;
      fVar39 = 1.0;
      break;
    case 1:
      fVar48 = *(float *)(lVar22 + lVar35 * 0x178 + 0x70);
      if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
        lVar24 = lVar22 + lVar35 * 0x178;
        fVar53 = (fStack00000000000000fc + fVar48) - *(float *)(in_stack_00000080 + 0x230);
        fVar48 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
        goto LAB_035551cc;
      }
      lVar24 = lVar22 + lVar35 * 0x178;
      fVar53 = fVar53 - fVar50;
      *(float *)(lVar24 + 0x84) = fVar39 + (fVar48 - fVar50) / fVar53;
      *(float *)(lVar24 + 0xac) = fVar39 + (*(float *)(lVar24 + 0x98) - fVar50) / fVar53;
      *(float *)(lVar24 + 0xd4) = fVar39 + (*(float *)(lVar24 + 0xc0) - fVar50) / fVar53;
      fVar39 = fVar39 + (*(float *)(lVar24 + 0xe8) - fVar50) / fVar53;
      break;
    case 2:
      lVar24 = lVar22 + lVar35 * 0x178;
      fVar48 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
      fVar53 = (fStack00000000000000fc + *(float *)(lVar24 + 0x70)) -
               *(float *)(in_stack_00000080 + 0x230);
LAB_035551cc:
      *(float *)(lVar24 + 0x84) = fVar39 + fVar53 / fVar48;
      *(float *)(lVar24 + 0xac) =
           fVar39 + ((fStack00000000000000fc + *(float *)(lVar24 + 0x98)) -
                    *(float *)(in_stack_00000080 + 0x230)) /
                    (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
      *(float *)(lVar24 + 0xd4) =
           fVar39 + ((fStack00000000000000fc + *(float *)(lVar24 + 0xc0)) -
                    *(float *)(in_stack_00000080 + 0x230)) /
                    (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
      fVar39 = fVar39 + ((fStack00000000000000fc + *(float *)(lVar24 + 0xe8)) -
                        *(float *)(in_stack_00000080 + 0x230)) /
                        (*(float *)(in_stack_00000080 + 0x238) -
                        *(float *)(in_stack_00000080 + 0x230));
      break;
    case 3:
      switch((int)unaff_x19[0x62]) {
      case 0:
        lVar24 = lVar22 + lVar35 * 0x178;
        *(undefined4 *)(lVar24 + 0x88) = 0;
        *(undefined4 *)(lVar24 + 0xb0) = 0x3f800000;
        *(undefined4 *)(lVar24 + 0xd8) = 0;
        *(undefined4 *)(lVar24 + 0x100) = 0x3f800000;
        break;
      case 1:
        lVar24 = lVar22 + lVar35 * 0x178;
        fVar48 = fVar48 - fVar54;
        fVar53 = fVar39 + (*(float *)(lVar24 + 0x74) - fVar54) / fVar48;
        fVar48 = fVar39 + (*(float *)(lVar24 + 0x9c) - fVar54) / fVar48;
        *(float *)(lVar24 + 0x88) = fVar53;
        *(float *)(lVar24 + 0xb0) = fVar48;
        *(float *)(lVar24 + 0xd8) = fVar53;
        *(float *)(lVar24 + 0x100) = fVar48;
        break;
      case 2:
        lVar24 = lVar22 + lVar35 * 0x178;
        fVar53 = fVar39 + (*(float *)(lVar24 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                          (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
        *(float *)(lVar24 + 0x88) = fVar53;
        fVar48 = *(float *)(unaff_x19 + 0x9c);
        fVar50 = *(float *)(unaff_x19 + 0x9d);
        *(float *)(lVar24 + 0xd8) = fVar53;
        fVar53 = fVar39 + (*(float *)(lVar24 + 0x9c) - fVar48) / (fVar50 - fVar48);
        *(float *)(lVar24 + 0xb0) = fVar53;
        *(float *)(lVar24 + 0x100) = fVar53;
        break;
      case 3:
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
        uVar37 = (uint)*(undefined8 *)(lVar22 + 0x18);
      }
      if (uVar37 <= uVar8) goto LAB_035575f4;
      lVar24 = lVar22 + lVar35 * 0x178;
      fVar53 = *(float *)(lVar24 + 0x15c);
      fVar48 = (1.0 - (*(float *)(lVar24 + 0x88) + *(float *)(lVar24 + 0xb0)) * fVar53) * 0.5;
      fVar50 = fVar39 + *(float *)(lVar24 + 0x88) * fVar53 + fVar48;
      fVar39 = fVar39 + fVar48 + *(float *)(lVar24 + 0xb0) * fVar53;
      *(float *)(lVar24 + 0x84) = fVar50;
      *(float *)(lVar24 + 0xac) = fVar50;
      *(float *)(lVar24 + 0xd4) = fVar39;
      break;
    default:
      goto switchD_0355512c_default;
    }
    *(float *)(lVar22 + lVar35 * 0x178 + 0xfc) = fVar39;
switchD_0355512c_default:
    switch((int)unaff_x19[0x62]) {
    case 0:
      if (uVar37 <= uVar8) goto LAB_035575f4;
      lVar24 = lVar22 + lVar35 * 0x178;
      *(undefined4 *)(lVar24 + 0x88) = 0;
      *(undefined4 *)(lVar24 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar24 + 0xd8) = 0x3f800000;
      *(undefined4 *)(lVar24 + 0x100) = 0;
      break;
    case 1:
      if (uVar8 < uVar37) {
        lVar24 = lVar22 + lVar35 * 0x178;
        fVar44 = fVar44 - fVar47;
        fVar39 = (*(float *)(lVar24 + 0x74) - fVar47) / fVar44;
        fVar44 = (*(float *)(lVar24 + 0x9c) - fVar47) / fVar44;
        *(float *)(lVar24 + 0x88) = fVar39;
        goto UnityEngine_Animator__set_stabilizeFeet;
      }
      goto LAB_035575f4;
    case 2:
      if (uVar37 <= uVar8) goto LAB_035575f4;
      lVar24 = lVar22 + lVar35 * 0x178;
      fVar39 = (*(float *)(lVar24 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
               (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar24 + 0x88) = fVar39;
      fVar44 = (*(float *)(lVar24 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
               (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
UnityEngine_Animator__set_stabilizeFeet:
      *(float *)(lVar24 + 0xb0) = fVar44;
      *(float *)(lVar24 + 0xd8) = fVar44;
      *(float *)(lVar24 + 0x100) = fVar39;
      break;
    case 3:
      if (uVar37 <= uVar8) goto LAB_035575f4;
      lVar24 = lVar22 + lVar35 * 0x178;
      fVar44 = *(float *)(lVar24 + 0x15c);
      fVar53 = (1.0 - (*(float *)(lVar24 + 0x84) + *(float *)(lVar24 + 0xd4)) / fVar44) * 0.5;
      fVar39 = *(float *)(lVar24 + 0x84) / fVar44 + fVar53;
      fVar53 = fVar53 + *(float *)(lVar24 + 0xd4) / fVar44;
      *(float *)(lVar24 + 0x88) = fVar39;
      *(float *)(lVar24 + 0xb0) = fVar53;
      *(float *)(lVar24 + 0x100) = fVar39;
      *(float *)(lVar24 + 0xd8) = fVar53;
    }
    if (uVar37 <= uVar8) goto LAB_035575f4;
    lVar24 = lVar22 + lVar35 * 0x178;
    fVar39 = *(float *)(lVar24 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
    if ((*(char *)(lVar24 + 0x5c) == '\0') && ((*(byte *)(lVar22 + lVar35 * 0x178 + 400) & 1) != 0))
    {
      fVar39 = -fVar39;
    }
    fVar53 = param_2;
    if (((iVar13 == 2) || (fVar53 = fVar41, iVar13 == 1)) ||
       (fVar53 = param_2 / fVar38, iVar13 == 0)) {
      fVar39 = fVar53 * fVar39;
    }
    lVar24 = lVar22 + lVar35 * 0x178;
    fVar44 = *(float *)(lVar24 + 0x88);
    fVar48 = *(float *)(lVar24 + 0x84);
    fVar53 = -2.1474836e+09;
    if (fVar48 != INFINITY) {
      fVar53 = (float)(int)fVar48;
    }
    fVar50 = *(float *)(lVar24 + 0xd4);
    fVar54 = *(float *)(lVar24 + 0xd8);
    fVar47 = -2.1474836e+09;
    if (fVar44 != INFINITY) {
      fVar47 = (float)(int)fVar44;
    }
    uVar40 = FUN_03591d3c(fVar48 - fVar53,fVar44 - fVar47);
    *(undefined4 *)(lVar24 + 0x84) = uVar40;
    if (*(uint *)(lVar22 + 0x18) <= uVar8) goto LAB_035575f4;
    fVar54 = fVar54 - fVar47;
    *(float *)(lVar24 + 0x88) = fVar39;
    uVar40 = FUN_03591d3c(fVar48 - fVar53,fVar54);
    *(undefined4 *)(lVar22 + lVar35 * 0x178 + 0xac) = uVar40;
    if (*(uint *)(lVar22 + 0x18) <= uVar8) goto LAB_035575f4;
    fVar50 = fVar50 - fVar53;
    *(float *)(lVar22 + lVar35 * 0x178 + 0xb0) = fVar39;
    fVar53 = (float)FUN_03591d3c(fVar50,fVar54);
    *(float *)(lVar24 + 0xd4) = fVar53;
    if (*(uint *)(lVar22 + 0x18) <= uVar8) goto LAB_035575f4;
    *(float *)(lVar24 + 0xd8) = fVar39;
    uVar40 = FUN_03591d3c(fVar50,fVar44 - fVar47);
    *(undefined4 *)(lVar22 + lVar35 * 0x178 + 0xfc) = uVar40;
    uVar37 = (uint)*(undefined8 *)(lVar22 + 0x18);
    if (uVar37 <= uVar8) goto LAB_035575f4;
    *(float *)(lVar22 + lVar35 * 0x178 + 0x100) = fVar39;
LAB_0355574c:
    if (((int)uVar8 < (int)unaff_x19[0x65]) &&
       (iStack00000000000000d4 < *(int *)((long)unaff_x19 + 0x32c))) {
      if (((int)uVar2 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
        if (uVar37 <= uVar8) goto LAB_035575f4;
        lVar25 = lVar22 + lVar35 * 0x178;
        *(ulong *)(lVar25 + 0x70) =
             CONCAT44(fVar51 + (float)((ulong)*(undefined8 *)(lVar25 + 0x70) >> 0x20),
                      fVar52 + (float)*(undefined8 *)(lVar25 + 0x70));
        *(float *)(lVar25 + 0x78) = fVar49 + *(float *)(lVar25 + 0x78);
        *(ulong *)(lVar25 + 0x98) =
             CONCAT44(fVar51 + (float)((ulong)*(undefined8 *)(lVar25 + 0x98) >> 0x20),
                      fVar52 + (float)*(undefined8 *)(lVar25 + 0x98));
        *(float *)(lVar25 + 0xa0) = fVar49 + *(float *)(lVar25 + 0xa0);
        *(ulong *)(lVar25 + 0xc0) =
             CONCAT44(fVar51 + (float)((ulong)*(undefined8 *)(lVar25 + 0xc0) >> 0x20),
                      fVar52 + (float)*(undefined8 *)(lVar25 + 0xc0));
        *(float *)(lVar25 + 200) = fVar49 + *(float *)(lVar25 + 200);
        *(ulong *)(lVar25 + 0xe8) =
             CONCAT44(fVar51 + (float)((ulong)*(undefined8 *)(lVar25 + 0xe8) >> 0x20),
                      fVar52 + (float)*(undefined8 *)(lVar25 + 0xe8));
        *(float *)(lVar25 + 0xf0) = fVar49 + *(float *)(lVar25 + 0xf0);
        goto UnityEngine_Animator__GetAnimatorClipInfoCount;
      }
      if (((int)uVar2 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
        if (uVar8 < uVar37) {
          if (*(uint *)(lVar22 + lVar35 * 0x178 + 0x68) == in_stack_00000030) {
            lVar25 = lVar22 + lVar35 * 0x178;
            *(ulong *)(lVar25 + 0x70) =
                 CONCAT44(fVar51 + (float)((ulong)*(undefined8 *)(lVar25 + 0x70) >> 0x20),
                          fVar52 + (float)*(undefined8 *)(lVar25 + 0x70));
            *(float *)(lVar25 + 0x78) = fVar49 + *(float *)(lVar25 + 0x78);
            *(ulong *)(lVar25 + 0x98) =
                 CONCAT44(fVar51 + (float)((ulong)*(undefined8 *)(lVar25 + 0x98) >> 0x20),
                          fVar52 + (float)*(undefined8 *)(lVar25 + 0x98));
            *(float *)(lVar25 + 0xa0) = fVar49 + *(float *)(lVar25 + 0xa0);
            *(ulong *)(lVar25 + 0xc0) =
                 CONCAT44(fVar51 + (float)((ulong)*(undefined8 *)(lVar25 + 0xc0) >> 0x20),
                          fVar52 + (float)*(undefined8 *)(lVar25 + 0xc0));
            *(float *)(lVar25 + 200) = fVar49 + *(float *)(lVar25 + 200);
            *(ulong *)(lVar25 + 0xe8) =
                 CONCAT44(fVar51 + (float)((ulong)*(undefined8 *)(lVar25 + 0xe8) >> 0x20),
                          fVar52 + (float)*(undefined8 *)(lVar25 + 0xe8));
            *(float *)(lVar25 + 0xf0) = fVar49 + *(float *)(lVar25 + 0xf0);
            goto UnityEngine_Animator__GetAnimatorClipInfoCount;
          }
          goto UnityEngine_Animator__GetAnimatorTransitionInfo;
        }
        goto LAB_035575f4;
      }
    }
UnityEngine_Animator__GetAnimatorTransitionInfo:
    if (uVar37 <= uVar8) goto LAB_035575f4;
    if (DAT_0411f172 == '\0') {
      FUN_01ab69ac(PTR_DAT_03cbded8);
      DAT_0411f172 = '\x01';
      uVar37 = *(uint *)(lVar22 + 0x18);
    }
    puVar11 = PTR_DAT_03cbded8;
    uVar40 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
    lVar24 = lVar22 + lVar35 * 0x178;
    *(undefined8 *)(lVar24 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
    *(undefined4 *)(lVar24 + 0x78) = uVar40;
    if (uVar37 <= uVar8) goto LAB_035575f4;
    uVar40 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar11 + 0xb8) + 1);
    lVar24 = lVar22 + lVar35 * 0x178;
    *(undefined8 *)(lVar24 + 0x98) = **(undefined8 **)(*(long *)puVar11 + 0xb8);
    *(undefined4 *)(lVar24 + 0xa0) = uVar40;
    uVar40 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar11 + 0xb8) + 1);
    *(undefined8 *)(lVar24 + 0xc0) = **(undefined8 **)(*(long *)puVar11 + 0xb8);
    *(undefined4 *)(lVar24 + 200) = uVar40;
    uVar40 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar11 + 0xb8) + 1);
    *(undefined8 *)(lVar24 + 0xe8) = **(undefined8 **)(*(long *)puVar11 + 0xb8);
    *(undefined4 *)(lVar24 + 0xf0) = uVar40;
    *(undefined1 *)(lVar25 + 0x194) = 0;
UnityEngine_Animator__GetAnimatorClipInfoCount:
    if (iVar15 == 0) {
      pcVar26 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0355591c:
      (*pcVar26)();
    }
    else if (iVar15 == 1) {
      pcVar26 = *(code **)(*unaff_x19 + 0x8c8);
      goto LAB_0355591c;
    }
LAB_03555938:
    if ((*in_stack_00000170 == 0) || (lVar25 = *(long *)(*in_stack_00000170 + 0x38), lVar25 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar25 + 0x18) <= uVar8) goto LAB_035575f4;
    lVar25 = lVar25 + lVar35 * 0x178;
    uVar18 = *(undefined8 *)(lVar25 + 0x11c);
    *(undefined8 *)(lVar25 + 0x11c) =
         CONCAT44(fVar51 + (float)((ulong)uVar18 >> 0x20),fVar52 + (float)uVar18);
    *(float *)(lVar25 + 0x124) = fVar49 + *(float *)(lVar25 + 0x124);
    if ((*in_stack_00000170 == 0) || (lVar25 = *(long *)(*in_stack_00000170 + 0x38), lVar25 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar25 + 0x18) <= uVar8) goto LAB_035575f4;
    lVar25 = lVar25 + lVar35 * 0x178;
    *(ulong *)(lVar25 + 0x110) =
         CONCAT44(fVar51 + (float)((ulong)*(undefined8 *)(lVar25 + 0x110) >> 0x20),
                  fVar52 + (float)*(undefined8 *)(lVar25 + 0x110));
    *(float *)(lVar25 + 0x118) = fVar49 + *(float *)(lVar25 + 0x118);
    if ((*in_stack_00000170 == 0) || (lVar25 = *(long *)(*in_stack_00000170 + 0x38), lVar25 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar25 + 0x18) <= uVar8) goto LAB_035575f4;
    lVar25 = lVar25 + lVar35 * 0x178;
    *(ulong *)(lVar25 + 0x128) =
         CONCAT44(fVar51 + (float)((ulong)*(undefined8 *)(lVar25 + 0x128) >> 0x20),
                  fVar52 + (float)*(undefined8 *)(lVar25 + 0x128));
    *(float *)(lVar25 + 0x130) = fVar49 + *(float *)(lVar25 + 0x130);
    if ((*in_stack_00000170 == 0) || (lVar25 = *(long *)(*in_stack_00000170 + 0x38), lVar25 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar25 + 0x18) <= uVar8) goto LAB_035575f4;
    lVar25 = lVar25 + lVar35 * 0x178;
    *(float *)(lVar25 + 0x134) = fVar52 + *(float *)(lVar25 + 0x134);
    *(ulong *)(lVar25 + 0x138) =
         CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar25 + 0x138) >> 0x20),
                  fVar51 + (float)*(undefined8 *)(lVar25 + 0x138));
    lVar25 = *in_stack_00000170;
    if ((lVar25 == 0) || (lVar24 = *(long *)(lVar25 + 0x38), lVar24 == 0)) goto LAB_035574b8;
    uVar37 = *(uint *)(lVar24 + 0x18);
    if (uVar37 <= uVar8) goto LAB_035575f4;
    lVar29 = lVar24 + lVar35 * 0x178;
    uVar42 = CONCAT44(fVar52 + (float)((ulong)*(undefined8 *)(lVar29 + 0x140) >> 0x20),
                      fVar52 + (float)*(undefined8 *)(lVar29 + 0x140));
    fVar53 = fVar51 + *(float *)(lVar29 + 0x150);
    uVar43 = (ulong)(uint)fVar53;
    uVar46 = CONCAT44(fVar51 + (float)((ulong)*(undefined8 *)(lVar29 + 0x148) >> 0x20),
                      fVar51 + (float)*(undefined8 *)(lVar29 + 0x148));
    *(float *)(lVar29 + 0x150) = fVar53;
    *(ulong *)(lVar29 + 0x140) = uVar42;
    *(ulong *)(lVar29 + 0x148) = uVar46;
    if (uVar2 == uVar45) {
      uVar45 = *unaff_x20 - 1;
      if (uVar8 == uVar45) goto LAB_03555b44;
    }
    else {
      lVar25 = *(long *)(lVar25 + 0x50);
      if (lVar25 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar25 + 0x18) <= uVar45) goto LAB_035575f4;
      lVar29 = (long)(int)uVar45;
      lVar30 = lVar25 + lVar29 * 0x5c;
      uVar46 = (ulong)(uint)*(float *)(lVar30 + 0x58);
      fVar53 = fVar51 + *(float *)(lVar30 + 0x54);
      uVar42 = (ulong)(uint)fVar53;
      fVar44 = fVar52 + *(float *)(lVar30 + 0x58);
      uVar43 = (ulong)(uint)fVar44;
      *(ulong *)(lVar30 + 0x4c) =
           CONCAT44(fVar51 + (float)((ulong)*(undefined8 *)(lVar30 + 0x4c) >> 0x20),
                    fVar51 + (float)*(undefined8 *)(lVar30 + 0x4c));
      *(float *)(lVar30 + 0x54) = fVar53;
      *(float *)(lVar30 + 0x58) = fVar44;
      if (uVar37 <= *(uint *)(lVar30 + 0x34)) goto LAB_035575f4;
      uVar40 = *(undefined4 *)(lVar24 + (long)(int)*(uint *)(lVar30 + 0x34) * 0x178 + 0x11c);
      lVar25 = lVar25 + lVar29 * 0x5c;
      *(float *)(lVar25 + 0x70) = fVar53;
      *(undefined4 *)(lVar25 + 0x6c) = uVar40;
      lVar25 = *in_stack_00000170;
      if ((lVar25 == 0) || (lVar24 = *(long *)(lVar25 + 0x50), lVar24 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar24 + 0x18) <= uVar45) goto LAB_035575f4;
      lVar25 = *(long *)(lVar25 + 0x38);
      if (lVar25 == 0) goto LAB_035574b8;
      uVar45 = *(uint *)(lVar24 + lVar29 * 0x5c + 0x40);
      if (*(uint *)(lVar25 + 0x18) <= uVar45) goto LAB_035575f4;
      lVar24 = lVar24 + lVar29 * 0x5c;
      *(undefined4 *)(lVar24 + 0x74) = *(undefined4 *)(lVar25 + (long)(int)uVar45 * 0x178 + 0x128);
      *(undefined4 *)(lVar24 + 0x78) = *(undefined4 *)(lVar24 + 0x4c);
      uVar45 = *unaff_x20 - 1;
LAB_03555b44:
      if (uVar8 == uVar45) {
        lVar25 = *in_stack_00000170;
        if ((lVar25 == 0) || (lVar24 = *(long *)(lVar25 + 0x50), lVar24 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar24 + 0x18) <= uVar2) goto LAB_035575f4;
        lVar29 = lVar24 + lVar32 * 0x5c;
        uVar46 = (ulong)(uint)*(float *)(lVar29 + 0x58);
        uVar42 = CONCAT44(fVar51 + (float)((ulong)*(undefined8 *)(lVar29 + 0x4c) >> 0x20),
                          fVar51 + (float)*(undefined8 *)(lVar29 + 0x4c));
        fVar53 = fVar51 + *(float *)(lVar29 + 0x54);
        fVar52 = fVar52 + *(float *)(lVar29 + 0x58);
        uVar43 = (ulong)(uint)fVar52;
        *(ulong *)(lVar29 + 0x4c) = uVar42;
        *(float *)(lVar29 + 0x54) = fVar53;
        *(float *)(lVar29 + 0x58) = fVar52;
        lVar25 = *(long *)(lVar25 + 0x38);
        if (lVar25 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar25 + 0x18) <= *(uint *)(lVar29 + 0x34)) goto LAB_035575f4;
        uVar40 = *(undefined4 *)(lVar25 + (long)(int)*(uint *)(lVar29 + 0x34) * 0x178 + 0x11c);
        lVar24 = lVar24 + lVar32 * 0x5c;
        *(float *)(lVar24 + 0x70) = fVar53;
        *(undefined4 *)(lVar24 + 0x6c) = uVar40;
        lVar25 = *in_stack_00000170;
        if ((lVar25 == 0) || (lVar24 = *(long *)(lVar25 + 0x50), lVar24 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar24 + 0x18) <= uVar2) goto LAB_035575f4;
        lVar25 = *(long *)(lVar25 + 0x38);
        if (lVar25 == 0) goto LAB_035574b8;
        uVar45 = *(uint *)(lVar24 + lVar32 * 0x5c + 0x40);
        if (*(uint *)(lVar25 + 0x18) <= uVar45) goto LAB_035575f4;
        lVar24 = lVar24 + lVar32 * 0x5c;
        *(undefined4 *)(lVar24 + 0x74) = *(undefined4 *)(lVar25 + (long)(int)uVar45 * 0x178 + 0x128)
        ;
        *(undefined4 *)(lVar24 + 0x78) = *(undefined4 *)(lVar24 + 0x4c);
      }
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar19 = FUN_026b82c4(uVar31,0);
    if (((((uVar19 & 1) == 0) && (1 < uVar31 - 0x2010)) && (uVar31 != 0xad)) && (uVar31 != 0x2d)) {
      if (bVar10) {
        if (((uVar17 != 1) && ((int)uVar8 < (int)(*(uint *)(lVar22 + 0x18) - 1))) &&
           (((int)uVar8 < *unaff_x20 && ((uVar31 == 0x2019 || (uVar31 == 0x27)))))) {
          if (*(uint *)(lVar22 + 0x18) <= uVar17 - 2) goto LAB_035575f4;
          uVar5 = *(undefined2 *)(lVar22 + lVar36 + -0x438);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar19 = FUN_026b82c4(uVar5,0);
          if ((uVar19 & 1) != 0) {
            if (*(uint *)(lVar22 + 0x18) <= uVar17) goto LAB_035575f4;
            uVar5 = *(undefined2 *)(lVar22 + lVar36 + -0x148);
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar19 = FUN_026b82c4(uVar5,0);
            if ((uVar19 & 1) != 0) goto LAB_03555d68;
          }
        }
      }
      else {
        if (uVar17 != 1) {
LAB_0355686c:
          bVar10 = false;
          goto LAB_03555d70;
        }
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar19 = FUN_026b81f8(uVar31,0);
        if ((uVar19 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar19 = FUN_026b63d8(uVar31,0);
          if (((uVar31 != 0x200b) && ((uVar19 & 1) == 0)) && (*unaff_x20 != 1)) goto LAB_0355686c;
        }
      }
      if (uVar8 == *unaff_x20 - 1U) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar19 = FUN_026b82c4(uVar31,0);
        iVar15 = iStack0000000000000128;
        if ((uVar19 & 1) == 0) goto LAB_03556070;
      }
      else {
LAB_03556070:
        iVar15 = uVar17 - 2;
      }
      lVar25 = *in_stack_00000170;
      if (lVar25 == 0) goto LAB_035574b8;
      lVar24 = *(long *)(lVar25 + 0x40);
      if (lVar24 == 0) goto LAB_035574b8;
      uVar45 = *(uint *)(lVar25 + 0x24);
      iVar16 = *(int *)(lVar24 + 0x18);
      if (iVar16 < (int)(uVar45 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar25 + 0x40),iVar16 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
                    );
        lVar25 = *in_stack_00000170;
        if (lVar25 == 0) goto LAB_035574b8;
      }
      lVar25 = *(long *)(lVar25 + 0x40);
      if (lVar25 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar25 + 0x18) <= uVar45) goto LAB_035575f4;
      lVar25 = lVar25 + (long)(int)uVar45 * 0x18;
      *(long **)(lVar25 + 0x20) = unaff_x19;
      *(uint *)(lVar25 + 0x28) = uStack0000000000000158;
      *(int *)(lVar25 + 0x2c) = iVar15;
      *(uint *)(lVar25 + 0x30) = (iVar15 - uStack0000000000000158) + 1;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar25 = unaff_x19[0x6d];
      if (lVar25 == 0) goto LAB_035574b8;
      lVar24 = *(long *)(lVar25 + 0x50);
      *(int *)(lVar25 + 0x24) = *(int *)(lVar25 + 0x24) + 1;
      if (lVar24 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar24 + 0x18) <= uVar2) goto LAB_035575f4;
      lVar24 = lVar24 + lVar32 * 0x5c;
      bVar10 = false;
      iStack00000000000000d4 = iStack00000000000000d4 + 1;
      *(int *)(lVar24 + 0x30) = *(int *)(lVar24 + 0x30) + 1;
    }
    else {
      if (!bVar10) {
        uStack0000000000000158 = uVar8;
      }
      if (uVar8 == *unaff_x20 - 1U) {
        lVar25 = *in_stack_00000170;
        if (lVar25 == 0) goto LAB_035574b8;
        lVar24 = *(long *)(lVar25 + 0x40);
        if (lVar24 == 0) goto LAB_035574b8;
        uVar45 = *(uint *)(lVar25 + 0x24);
        iVar15 = *(int *)(lVar24 + 0x18);
        if (iVar15 < (int)(uVar45 + 1)) {
          if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff025c((long *)(lVar25 + 0x40),iVar15 + 1,
                       *(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
          lVar25 = *in_stack_00000170;
          if (lVar25 == 0) goto LAB_035574b8;
        }
        lVar25 = *(long *)(lVar25 + 0x40);
        if (lVar25 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar25 + 0x18) <= uVar45) goto LAB_035575f4;
        lVar25 = lVar25 + (long)(int)uVar45 * 0x18;
        *(long **)(lVar25 + 0x20) = unaff_x19;
        *(uint *)(lVar25 + 0x28) = uStack0000000000000158;
        *(uint *)(lVar25 + 0x2c) = uVar8;
        *(uint *)(lVar25 + 0x30) = uVar17 - uStack0000000000000158;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        lVar25 = unaff_x19[0x6d];
        if (lVar25 == 0) goto LAB_035574b8;
        lVar24 = *(long *)(lVar25 + 0x50);
        *(int *)(lVar25 + 0x24) = *(int *)(lVar25 + 0x24) + 1;
        if (lVar24 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar24 + 0x18) <= uVar2) goto LAB_035575f4;
        lVar24 = lVar24 + lVar32 * 0x5c;
        iStack00000000000000d4 = iStack00000000000000d4 + 1;
        *(int *)(lVar24 + 0x30) = *(int *)(lVar24 + 0x30) + 1;
      }
LAB_03555d68:
      bVar10 = true;
    }
LAB_03555d70:
    if ((*in_stack_00000170 == 0) || (lVar25 = *(long *)(*in_stack_00000170 + 0x38), lVar25 == 0))
    goto LAB_035574b8;
    uVar45 = *(uint *)(lVar25 + 0x18);
    if (uVar45 <= uVar8) goto LAB_035575f4;
    if ((*(byte *)(lVar25 + lVar35 * 0x178 + 400) >> 2 & 1) == 0) {
      if (bVar12) {
LAB_03555da0:
        if (uVar45 <= uVar17 - 2) goto LAB_035575f4;
        lVar32 = *unaff_x19;
        uVar45 = *(uint *)(lVar25 + lVar36 + -0x330);
        uVar40 = *(undefined4 *)(lVar25 + lVar36 + -0x2f8);
LAB_035562ec:
        pcVar26 = *(code **)(lVar32 + 0x8d8);
LAB_035562f4:
        uVar46 = (ulong)uVar45;
        uVar42 = (ulong)(uint)fStack0000000000000070;
        uVar43 = (ulong)uStack0000000000000074;
        (*pcVar26)(fStack0000000000000078,uVar42,uVar43,uVar46,fStack0000000000000104,0,
                   fStack000000000000008c,uVar40);
        puVar11 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar25 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar25 = *(long *)puVar11;
        }
LAB_03556348:
        bVar12 = false;
        fVar55 = 0.0;
        fStack0000000000000104 = *(float *)(*(long *)(lVar25 + 0xb8) + 0x15a8);
        fStack0000000000000100 = 0.0;
      }
      else {
LAB_03556254:
        bVar12 = false;
      }
    }
    else {
      lVar25 = lVar25 + lVar35 * 0x178;
      iVar15 = *(int *)(lVar25 + 0x68);
      *(undefined4 *)(lVar25 + 0x16c) = in_stack_000017c4;
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
      uVar19 = FUN_026b63d8(uVar31,0);
      if ((uVar31 != 0x200b) && ((uVar19 & 1) == 0)) {
        lVar25 = *in_stack_00000170;
        if ((lVar25 == 0) || (lVar32 = *(long *)(lVar25 + 0x38), lVar32 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar32 + 0x18) <= uVar8) goto LAB_035575f4;
        fVar53 = *(float *)(lVar32 + lVar35 * 0x178 + 0x160);
        if (fVar55 <= fVar53) {
          fVar55 = fVar53;
        }
        if (fStack0000000000000100 <= ABS(fVar39)) {
          fStack0000000000000100 = ABS(fVar39);
        }
        if (iVar15 != iStack000000000000006c) {
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar25 = *in_stack_00000170;
            if (lVar25 == 0) goto LAB_035574b8;
            lVar32 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
          }
          else {
            lVar32 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
          }
          fStack0000000000000104 = *(float *)(lVar32 + 0x15a8);
        }
        lVar25 = *(long *)(lVar25 + 0x38);
        if (lVar25 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar25 + 0x18) <= uVar8) goto LAB_035575f4;
        if (unaff_x19[0x1f] == 0) goto LAB_035574b8;
        fVar44 = *(float *)(lVar25 + lVar35 * 0x178 + 0x14c);
        fVar53 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
        fVar44 = fVar44 + fVar55 * fVar53;
        if (fVar44 <= fStack0000000000000104) {
          fStack0000000000000104 = fVar44;
        }
        uVar42 = (ulong)(uint)fStack0000000000000104;
        iStack000000000000006c = iVar15;
      }
      if (!bVar12) {
        bVar12 = false;
        if ((((uVar31 == 0xd) || ((uVar31 & 0xfffe) == 10)) || ((int)uVar7 < (int)uVar8)) ||
           ((bool)(bVar1 ^ 1))) goto LAB_03556364;
        if (uVar8 == uVar7) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar19 = FUN_026b97f8(uVar31,0);
          if ((uVar19 & 1) != 0) goto LAB_03556254;
        }
        if ((*in_stack_00000170 == 0) ||
           (lVar25 = *(long *)(*in_stack_00000170 + 0x38), lVar25 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar25 + 0x18) <= uVar8) goto LAB_035575f4;
        lVar25 = lVar25 + lVar35 * 0x178;
        fStack000000000000008c = *(float *)(lVar25 + 0x160);
        fStack0000000000000078 = *(float *)(lVar25 + 0x11c);
        uVar43 = (ulong)(uint)fStack0000000000000078;
        bVar12 = fVar55 != 0.0;
        fVar53 = fStack000000000000008c;
        if (bVar12) {
          fVar53 = fVar55;
        }
        fVar55 = fVar53;
        uVar14 = *(undefined4 *)(lVar25 + 0x168);
        uStack0000000000000074 = 0;
        fVar53 = fVar39;
        if (bVar12) {
          fVar53 = fStack0000000000000100;
        }
        uVar42 = (ulong)(uint)fVar53;
        fStack0000000000000070 = fStack0000000000000104;
        fStack0000000000000100 = fVar53;
      }
      if (*unaff_x20 == 1) {
        if ((*in_stack_00000170 != 0) &&
           (lVar25 = *(long *)(*in_stack_00000170 + 0x38), lVar25 != 0)) {
          if (uVar8 < *(uint *)(lVar25 + 0x18)) {
            lVar25 = lVar25 + lVar35 * 0x178;
            lVar32 = *unaff_x19;
            uVar45 = *(uint *)(lVar25 + 0x128);
            uVar40 = *(undefined4 *)(lVar25 + 0x160);
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
        uVar19 = FUN_026b63d8(uVar31,0);
        if ((*in_stack_00000170 != 0) &&
           (lVar25 = *(long *)(*in_stack_00000170 + 0x38), lVar25 != 0)) {
          lVar32 = lVar35;
          uVar45 = uVar8;
          if (uVar31 == 0x200b || (uVar19 & 1) != 0) {
            lVar32 = lVar27;
            uVar45 = uVar7;
          }
          if (uVar45 < *(uint *)(lVar25 + 0x18)) {
            lVar25 = lVar25 + lVar32 * 0x178;
            uVar45 = *(uint *)(lVar25 + 0x128);
            uVar40 = *(undefined4 *)(lVar25 + 0x160);
            pcVar26 = *(code **)(*unaff_x19 + 0x8d8);
            goto LAB_035562f4;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
      if (!bVar1) {
        if ((*in_stack_00000170 != 0) &&
           (lVar25 = *(long *)(*in_stack_00000170 + 0x38), lVar25 != 0)) {
          uVar45 = *(uint *)(lVar25 + 0x18);
          goto LAB_03555da0;
        }
        goto LAB_035574b8;
      }
      if ((int)uVar8 < *unaff_x20 + -1) {
        if ((*in_stack_00000170 == 0) ||
           (lVar25 = *(long *)(*in_stack_00000170 + 0x38), lVar25 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar25 + 0x18) <= uVar17) goto LAB_035575f4;
        uVar19 = FUN_03567ad8(uVar14,*(undefined4 *)(lVar25 + lVar36),0);
        if ((uVar19 & 1) == 0) {
          if ((*in_stack_00000170 != 0) &&
             (lVar25 = *(long *)(*in_stack_00000170 + 0x38), lVar25 != 0)) {
            if (uVar8 < *(uint *)(lVar25 + 0x18)) {
              lVar25 = lVar25 + lVar35 * 0x178;
              uVar46 = (ulong)*(uint *)(lVar25 + 0x128);
              uVar43 = (ulong)uStack0000000000000074;
              uVar42 = (ulong)(uint)fStack0000000000000070;
              (**(code **)(*unaff_x19 + 0x8d8))
                        (fStack0000000000000078,uVar42,uVar43,uVar46,fStack0000000000000104,0,
                         fStack000000000000008c,*(undefined4 *)(lVar25 + 0x160));
              puVar11 = OVRPlugin_OVRP_1_31_0_TypeInfo;
              lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              if (*(int *)(lVar25 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar25 = *(long *)puVar11;
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
    if ((*in_stack_00000170 == 0) || (lVar25 = *(long *)(*in_stack_00000170 + 0x38), lVar25 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar25 + 0x18) <= uVar8) goto LAB_035575f4;
    if (lVar28 == 0) goto LAB_035574b8;
    uVar45 = *(uint *)(lVar25 + lVar35 * 0x178 + 400);
    fVar53 = (float)FUN_03776a30(lVar28 + 0x50,0);
    if ((uVar45 >> 6 & 1) == 0) {
      if ((_iStack0000000000000128 & 0x100000000) != 0) {
        if ((*in_stack_00000170 == 0) ||
           (lVar25 = *(long *)(*in_stack_00000170 + 0x38), lVar25 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar25 + 0x18) <= uVar17 - 2) goto LAB_035575f4;
        uVar45 = *(uint *)(lVar25 + lVar36 + -0x330);
        fVar51 = *(float *)(lVar25 + lVar36 + -0x30c);
        pcVar26 = *(code **)(*unaff_x19 + 0x8d8);
LAB_03556914:
        uVar46 = (ulong)uVar45;
        uVar42 = (ulong)(uint)fStack000000000000009c;
        uVar43 = (ulong)uStack0000000000000098;
        (*pcVar26)(fStack00000000000000a0,uVar42,uVar43,uVar46,
                   fStack00000000000000a8 * fVar53 + fVar51,0,fStack00000000000000a8,
                   fStack00000000000000a8);
      }
LAB_03556948:
      _iStack0000000000000128 = _iStack0000000000000128 & 0xffffffff;
    }
    else {
      lVar25 = *in_stack_00000170;
      if ((lVar25 == 0) || (lVar32 = *(long *)(lVar25 + 0x38), lVar32 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar32 + 0x18) <= uVar8) goto LAB_035575f4;
      *(undefined4 *)(lVar32 + lVar35 * 0x178 + 0x174) = in_stack_000017c4;
      if ((((int)unaff_x19[0x65] < (int)uVar8) || ((int)unaff_x19[0x66] < (int)uVar2)) ||
         (((int)unaff_x19[0x5c] == 5 &&
          (*(int *)(lVar32 + lVar35 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((((uVar31 == 0xd) || ((uVar31 & 0xfffe) == 10)) || ((int)uVar7 < (int)uVar8)) ||
         ((_iStack0000000000000128 & 0x100000000) != 0 || !bVar1)) {
LAB_035564e8:
        if ((_iStack0000000000000128 & 0x100000000) == 0) goto LAB_03556948;
      }
      else {
        if (uVar8 == uVar7) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar19 = FUN_026b97f8(uVar31,0);
          if ((uVar19 & 1) != 0) goto LAB_035564e8;
          lVar25 = *in_stack_00000170;
          if (lVar25 == 0) goto LAB_035574b8;
        }
        lVar25 = *(long *)(lVar25 + 0x38);
        if (lVar25 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar25 + 0x18) <= uVar8) goto LAB_035575f4;
        lVar25 = lVar25 + lVar35 * 0x178;
        fStack0000000000000040 = *(float *)(lVar25 + 0x60);
        fStack0000000000000038 = *(float *)(lVar25 + 0x14c);
        uVar42 = (ulong)(uint)fStack0000000000000038;
        fStack00000000000000a0 = *(float *)(lVar25 + 0x11c);
        uVar43 = (ulong)(uint)fStack00000000000000a0;
        fStack00000000000000a8 = *(float *)(lVar25 + 0x160);
        fStack000000000000009c = fVar53 * fStack00000000000000a8 + fStack0000000000000038;
        uStack0000000000000098 = 0;
      }
      iVar15 = *unaff_x20;
      if (iVar15 == 1) {
LAB_03556628:
        if ((*in_stack_00000170 != 0) &&
           (lVar25 = *(long *)(*in_stack_00000170 + 0x38), lVar25 != 0)) {
          if (uVar8 < *(uint *)(lVar25 + 0x18)) {
            lVar25 = lVar25 + lVar35 * 0x178;
            lVar27 = *unaff_x19;
            uVar45 = *(uint *)(lVar25 + 0x128);
            fVar51 = *(float *)(lVar25 + 0x14c);
LAB_03556654:
            pcVar26 = *(code **)(lVar27 + 0x8d8);
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
        uVar19 = FUN_026b63d8(uVar31,0);
        if ((*in_stack_00000170 != 0) &&
           (lVar25 = *(long *)(*in_stack_00000170 + 0x38), lVar25 != 0)) {
          uVar45 = *(uint *)(lVar25 + 0x18);
          if (uVar31 == 0x200b || (uVar19 & 1) != 0) {
            if (uVar45 <= uVar7) goto LAB_035575f4;
          }
          else {
FUN_035568e8:
            lVar27 = lVar35;
            if (uVar45 <= uVar8) goto LAB_035575f4;
          }
LAB_035568f0:
          lVar25 = lVar25 + lVar27 * 0x178;
          fVar51 = *(float *)(lVar25 + 0x14c);
          uVar45 = *(uint *)(lVar25 + 0x128);
          pcVar26 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_03556914;
        }
        goto LAB_035574b8;
      }
      if ((int)uVar8 < iVar15) {
        lVar25 = *in_stack_00000170;
        if ((lVar25 != 0) && (lVar32 = *(long *)(lVar25 + 0x38), lVar32 != 0)) {
          if (uVar17 < *(uint *)(lVar32 + 0x18)) {
            if (*(float *)(lVar32 + lVar36 + -0x108) == fStack0000000000000040) {
              fVar44 = *(float *)(lVar32 + lVar36 + -0x1c);
              if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar42 = (ulong)(uint)fStack0000000000000038;
              uVar19 = FUN_03567bac(fVar51 + fVar44,uVar42,0);
              if ((uVar19 & 1) != 0) {
                iVar15 = *unaff_x20;
                goto LAB_03556744;
              }
              lVar25 = *in_stack_00000170;
              if (lVar25 == 0) goto LAB_035574b8;
            }
            lVar25 = *(long *)(lVar25 + 0x38);
            if (lVar25 != 0) {
              uVar45 = *(uint *)(lVar25 + 0x18);
              if ((int)uVar8 <= (int)uVar7) goto FUN_035568e8;
              if (uVar7 < uVar45) goto LAB_035568f0;
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
        iVar15 = FUN_036d3364(lVar28,0);
        if (*(uint *)(lVar22 + 0x18) <= uVar17) goto LAB_035575f4;
        lVar25 = *(long *)(lVar22 + lVar36 + -0x130);
        if (lVar25 == 0) goto LAB_035574b8;
        iVar16 = FUN_036d3364(lVar25,0);
        if (iVar15 != iVar16) goto LAB_03556628;
      }
      if (!bVar1) {
        if ((*in_stack_00000170 != 0) &&
           (lVar25 = *(long *)(*in_stack_00000170 + 0x38), lVar25 != 0)) {
          if (uVar17 - 2 < *(uint *)(lVar25 + 0x18)) {
            lVar27 = *unaff_x19;
            uVar45 = *(uint *)(lVar25 + lVar36 + -0x330);
            fVar51 = *(float *)(lVar25 + lVar36 + -0x30c);
            goto LAB_03556654;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
      _iStack0000000000000128 = CONCAT44(1,iStack0000000000000128);
    }
    if ((*in_stack_00000170 == 0) || (lVar25 = *(long *)(*in_stack_00000170 + 0x38), lVar25 == 0))
    goto LAB_035574b8;
    uVar45 = (uint)*(undefined8 *)(lVar25 + 0x18);
    if (uVar45 <= uVar8) goto LAB_035575f4;
    if ((*(byte *)(lVar25 + lVar35 * 0x178 + 0x191) >> 1 & 1) == 0) {
      if (bVar9) {
        uVar43 = (ulong)in_stack_000000c0;
        uVar42 = (ulong)(uint)fStack00000000000000dc;
        uVar46 = (ulong)(uint)fStack00000000000000c8;
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000d8,uVar42,uVar43,uVar46,fStack00000000000000d0,uVar43);
      }
LAB_035569b4:
      bVar9 = false;
    }
    else {
      if ((((int)unaff_x19[0x65] < (int)uVar8) || ((int)unaff_x19[0x66] < (int)uVar2)) ||
         (((int)unaff_x19[0x5c] == 5 &&
          (*(int *)(lVar25 + lVar35 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar9) {
        if ((((uVar31 == 0xd) || ((uVar31 & 0xfffe) == 10)) || ((int)uVar7 < (int)uVar8)) ||
           (!bVar1)) goto LAB_035569b4;
        if (uVar8 == uVar7) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar19 = FUN_026b97f8(uVar31,0);
          if ((uVar19 & 1) != 0) goto LAB_035569b4;
        }
        puVar11 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar27 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar27 = *(long *)puVar11;
        }
        if ((*in_stack_00000170 == 0) ||
           (lVar25 = *(long *)(*in_stack_00000170 + 0x38), lVar25 == 0)) goto LAB_035574b8;
        uVar45 = (uint)*(undefined8 *)(lVar25 + 0x18);
        if (uVar45 <= uVar8) goto LAB_035575f4;
        lVar27 = *(long *)(lVar27 + 0xb8);
        lVar28 = lVar25 + lVar35 * 0x178;
        in_stack_000017b8 = *(undefined8 *)(lVar28 + 0x184);
        in_stack_000017b0 = *(undefined8 *)(lVar28 + 0x17c);
        fStack00000000000000d8 = *(float *)(lVar27 + 0x1598);
        fStack00000000000000dc = *(float *)(lVar27 + 0x159c);
        in_stack_000017c0 = *(float *)(lVar28 + 0x18c);
        fStack00000000000000c8 = *(float *)(lVar27 + 0x15a0);
        fStack00000000000000d0 = *(float *)(lVar27 + 0x15a4);
        in_stack_000000c0 = 0;
      }
      if (uVar45 <= uVar8) goto LAB_035575f4;
      lVar25 = lVar25 + lVar35 * 0x178;
      fVar53 = *(float *)(lVar25 + 0x128);
      fVar47 = *(float *)(lVar25 + 0x188);
      uVar33 = *(undefined8 *)(lVar25 + 0x17c);
      fVar50 = *(float *)(lVar25 + 0x184);
      uVar18 = *(undefined8 *)(lVar25 + 0x184);
      fVar49 = *(float *)(lVar25 + 0x18c);
      fVar51 = *(float *)(lVar25 + 0x11c);
      fVar48 = *(float *)(lVar25 + 0x148);
      fVar44 = *(float *)(lVar25 + 0x150);
      in_stack_00000178 = uVar33;
      fStack0000000000000180 = fVar50;
      fStack0000000000000184 = fVar47;
      in_stack_00000188 = fVar49;
      in_stack_00000190 = in_stack_000017b0;
      in_stack_00000198 = in_stack_000017b8;
      in_stack_000001a0 = in_stack_000017c0;
      uVar19 = FUN_03568490(&stack0x00000190,&stack0x00000178,0);
      lVar25 = *(long *)OVRPlugin_Mesh_TypeInfo;
      if ((uVar19 & 1) == 0) {
        if (*(int *)(lVar25 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar25);
        }
        fVar53 = fVar53 + (float)in_stack_000017b8;
        uVar43 = (ulong)(uint)fVar53;
        fVar51 = fVar51 - (float)((ulong)in_stack_000017b0 >> 0x20);
        fVar44 = fVar44 - in_stack_000017c0;
        uVar42 = (ulong)(uint)fVar44;
        fVar48 = fVar48 + (float)((ulong)in_stack_000017b8 >> 0x20);
        uVar46 = (ulong)(uint)fVar48;
        if (fVar51 <= fStack00000000000000d8) {
          fStack00000000000000d8 = fVar51;
        }
        if (fVar44 <= fStack00000000000000dc) {
          fStack00000000000000dc = fVar44;
        }
        if (fStack00000000000000c8 <= fVar53) {
          fStack00000000000000c8 = fVar53;
        }
        if (fStack00000000000000d0 <= fVar48) {
          fStack00000000000000d0 = fVar48;
        }
      }
      else {
        if (*(int *)(lVar25 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar25);
        }
        fVar51 = (fVar51 + (fStack00000000000000c8 - (float)in_stack_000017b8)) * 0.5;
        uVar46 = (ulong)(uint)fVar51;
        if (fVar44 <= fStack00000000000000dc) {
          fStack00000000000000dc = fVar44;
        }
        uVar42 = (ulong)(uint)fStack00000000000000dc;
        uVar43 = (ulong)in_stack_000000c0;
        if (fStack00000000000000d0 <= fVar48) {
          fStack00000000000000d0 = fVar48;
        }
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000d8,uVar42,uVar43,uVar46,fStack00000000000000d0,uVar43);
        fStack00000000000000dc = fVar44 - fVar49;
        fStack00000000000000c8 = fVar53 + fVar50;
        in_stack_000000c0 = 0;
        fStack00000000000000d0 = fVar48 + fVar47;
        fStack00000000000000d8 = fVar51;
        in_stack_000017b0 = uVar33;
        in_stack_000017b8 = uVar18;
        in_stack_000017c0 = fVar49;
      }
      if (((*unaff_x20 == 1) || (uVar8 == uVar6)) || (((int)uVar7 <= (int)uVar8 || (!bVar1)))) {
        uVar43 = (ulong)in_stack_000000c0;
        uVar42 = (ulong)(uint)fStack00000000000000dc;
        uVar46 = (ulong)(uint)fStack00000000000000c8;
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000d8,uVar42,uVar43,uVar46,fStack00000000000000d0,uVar43);
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
    }
    iVar15 = *unaff_x20;
    lVar36 = lVar36 + 0x178;
    _iStack0000000000000128 = CONCAT44(uStack000000000000012c,iStack0000000000000128 + 1);
    bVar1 = iVar15 <= (int)uVar17;
    unaff_x28 = in_stack_00000170;
    uVar17 = uVar17 + 1;
    uVar45 = uVar2;
    if (bVar1) goto FUN_03556ed8;
    goto LAB_03554e78;
  }
  iStack00000000000000d4 = 0;
  iVar13 = 0;
  in_stack_00000170 = unaff_x28;
  goto LAB_03556f00;
FUN_03556ed8:
  lVar22 = *in_stack_00000170;
  if (lVar22 == 0) goto LAB_035574b8;
  iVar13 = uVar2 + 1;
  unaff_x26 = (long *)OVRPlugin_Media_TypeInfo;
LAB_03556f00:
  *(int *)(lVar22 + 0x18) = iVar15;
  lVar36 = unaff_x19[0xd4];
  *(int *)(lVar22 + 0x2c) = iVar13;
  if (iVar15 < 1 || iStack00000000000000d4 == 0) {
    iStack00000000000000d4 = 1;
  }
  *(int *)(lVar22 + 0x1c) = (int)lVar36;
  *(int *)(lVar22 + 0x24) = iStack00000000000000d4;
  *(int *)(lVar22 + 0x30) = (int)unaff_x19[0x96] + 1;
  if (((int)unaff_x19[99] != 0xff) ||
     (uVar19 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar19 & 1) == 0)) {
LAB_03554724:
    if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_03567630();
    return;
  }
  lVar22 = unaff_x19[0xdf];
  if (lVar22 != 0) {
    (**(code **)(lVar22 + 0x18))
              (*(undefined8 *)(lVar22 + 0x40),*in_stack_00000170,*(undefined8 *)(lVar22 + 0x28));
  }
  if (unaff_x19[0xe5] != 0) {
    iVar13 = FUN_03911ee4(unaff_x19[0xe5],0);
    if (iVar13 != 0x19) {
      lVar22 = unaff_x19[0xe5];
      if (lVar22 == 0) goto LAB_035574b8;
      uVar17 = FUN_03911ee4(lVar22,0);
      FUN_03911f20(lVar22,uVar17 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*in_stack_00000170 == 0) || (lVar22 = *(long *)(*in_stack_00000170 + 0x60), lVar22 == 0))
      goto LAB_035574b8;
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar22 + 0x18) == 0) goto LAB_035575f4;
      FUN_03596b20(lVar22 + 0x20,1,0);
    }
    if (unaff_x19[0x74] != 0) {
      FUN_036aa790(unaff_x19[0x74],0);
      if ((unaff_x19[0x6d] != 0) && (lVar22 = *(long *)(unaff_x19[0x6d] + 0x60), lVar22 != 0)) {
        if (*(int *)(lVar22 + 0x18) == 0) {
LAB_035575f4:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        if (unaff_x19[0x74] != 0) {
          FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar22 + 0x30),0);
          if ((unaff_x19[0x6d] != 0) && (lVar22 = *(long *)(unaff_x19[0x6d] + 0x60), lVar22 != 0)) {
            if (*(int *)(lVar22 + 0x18) == 0) goto LAB_035575f4;
            if (unaff_x19[0x74] != 0) {
              FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar22 + 0x48),0);
              if ((unaff_x19[0x6d] != 0) &&
                 (lVar22 = *(long *)(unaff_x19[0x6d] + 0x60), lVar22 != 0)) {
                if (*(int *)(lVar22 + 0x18) == 0) goto LAB_035575f4;
                if (unaff_x19[0x74] != 0) {
                  FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar22 + 0x50),0);
                  if ((unaff_x19[0x6d] != 0) &&
                     (lVar22 = *(long *)(unaff_x19[0x6d] + 0x60), lVar22 != 0)) {
                    if (*(int *)(lVar22 + 0x18) == 0) goto LAB_035575f4;
                    if (unaff_x19[0x74] != 0) {
                      FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar22 + 0x58),0);
                      if (unaff_x19[0x74] != 0) {
                        FUN_036aa280(unaff_x19[0x74],0);
                        if (unaff_x19[0xe4] != 0) {
                          FUN_0390f3a4(unaff_x19[0xe4],unaff_x19[0x74],0);
                          if (unaff_x19[0xe4] != 0) {
                            uVar18 = FUN_0390ef60(unaff_x19[0xe4],0);
                            if (unaff_x19[0xe4] != 0) {
                              uVar17 = FUN_0390ed3c(unaff_x19[0xe4],0);
                              lVar22 = *in_stack_00000170;
                              if (lVar22 != 0) {
                                lVar25 = 0;
                                lVar36 = 0;
                                do {
                                  uVar19 = lVar36 + 1;
                                  if ((long)*(int *)(lVar22 + 0x34) <= (long)uVar19)
                                  goto LAB_03554724;
                                  lVar22 = *(long *)(lVar22 + 0x60);
                                  if (lVar22 == 0) break;
                                  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  if (*(uint *)(lVar22 + 0x18) <= uVar19) goto LAB_035575f4;
                                  FUN_03596a20(lVar22 + lVar25 + 0x70,0);
                                  lVar22 = unaff_x19[0xe1];
                                  if (lVar22 == 0) break;
                                  if (*(uint *)(lVar22 + 0x18) <= uVar19) goto LAB_035575f4;
                                  uVar33 = *(undefined8 *)(lVar22 + lVar36 * 8 + 0x28);
                                  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  uVar20 = FUN_036d35a8(uVar33,0,0);
                                  if ((uVar20 & 1) == 0) {
                                    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                                      if ((*in_stack_00000170 == 0) ||
                                         (lVar22 = *(long *)(*in_stack_00000170 + 0x60), lVar22 == 0
                                         )) break;
                                      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                      }
                                      if (*(uint *)(lVar22 + 0x18) <= uVar19) goto LAB_035575f4;
                                      FUN_03596b20(lVar22 + lVar25 + 0x70,1,0);
                                    }
                                    lVar22 = unaff_x19[0xe1];
                                    if (lVar22 == 0) break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar22 = *(long *)(lVar22 + lVar36 * 8 + 0x28);
                                    if (lVar22 == 0) break;
                                    lVar22 = UnityEngine_Material__GetColorArray(lVar22,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar27 = *(long *)(*in_stack_00000170 + 0x60), lVar27 == 0))
                                    break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar19) goto LAB_035575f4;
                                    if (lVar22 == 0) break;
                                    FUN_036a460c(lVar22,*(undefined8 *)(lVar27 + lVar25 + 0x80),0);
                                    lVar22 = unaff_x19[0xe1];
                                    if (lVar22 == 0) break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar22 = *(long *)(lVar22 + lVar36 * 8 + 0x28);
                                    if (lVar22 == 0) break;
                                    lVar22 = UnityEngine_Material__GetColorArray(lVar22,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar27 = *(long *)(*in_stack_00000170 + 0x60), lVar27 == 0))
                                    break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar19) goto LAB_035575f4;
                                    if (lVar22 == 0) break;
                                    FUN_036a4810(lVar22,*(undefined8 *)(lVar27 + lVar25 + 0x98),0);
                                    lVar22 = unaff_x19[0xe1];
                                    if (lVar22 == 0) break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar22 = *(long *)(lVar22 + lVar36 * 8 + 0x28);
                                    if (lVar22 == 0) break;
                                    lVar22 = UnityEngine_Material__GetColorArray(lVar22,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar27 = *(long *)(*in_stack_00000170 + 0x60), lVar27 == 0))
                                    break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar19) goto LAB_035575f4;
                                    if (lVar22 == 0) break;
                                    FUN_036a48bc(lVar22,*(undefined8 *)(lVar27 + lVar25 + 0xa0),0);
                                    lVar22 = unaff_x19[0xe1];
                                    if (lVar22 == 0) break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar22 = *(long *)(lVar22 + lVar36 * 8 + 0x28);
                                    if (lVar22 == 0) break;
                                    lVar22 = UnityEngine_Material__GetColorArray(lVar22,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar27 = *(long *)(*in_stack_00000170 + 0x60), lVar27 == 0))
                                    break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar19) goto LAB_035575f4;
                                    if (lVar22 == 0) break;
                                    FUN_036a4e24(lVar22,*(undefined8 *)(lVar27 + lVar25 + 0xa8),0);
                                    lVar22 = unaff_x19[0xe1];
                                    if (lVar22 == 0) break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar22 = *(long *)(lVar22 + lVar36 * 8 + 0x28);
                                    if ((lVar22 == 0) ||
                                       (lVar22 = UnityEngine_Material__GetColorArray(lVar22,0),
                                       lVar22 == 0)) break;
                                    FUN_036aa280(lVar22,0);
                                    lVar22 = unaff_x19[0xe1];
                                    if (lVar22 == 0) break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar22 = *(long *)(lVar22 + lVar36 * 8 + 0x28);
                                    if (lVar22 == 0) break;
                                    lVar22 = FUN_037b514c(lVar22,0);
                                    lVar27 = unaff_x19[0xe1];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar27 = *(long *)(lVar27 + lVar36 * 8 + 0x28);
                                    if ((lVar27 == 0) ||
                                       (uVar33 = UnityEngine_Material__GetColorArray(lVar27,0),
                                       lVar22 == 0)) break;
                                    FUN_0390f3a4(lVar22,uVar33,0);
                                    lVar22 = unaff_x19[0xe1];
                                    if (lVar22 == 0) break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar22 = *(long *)(lVar22 + lVar36 * 8 + 0x28);
                                    if ((lVar22 == 0) ||
                                       (lVar22 = FUN_037b514c(lVar22,0), lVar22 == 0)) break;
                                    FUN_0390eec8(uVar18,uVar42,uVar43,uVar46,lVar22,0);
                                    lVar22 = unaff_x19[0xe1];
                                    if (lVar22 == 0) break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar22 = *(long *)(lVar22 + lVar36 * 8 + 0x28);
                                    if ((lVar22 == 0) ||
                                       (lVar22 = FUN_037b514c(lVar22,0), lVar22 == 0)) break;
                                    FUN_0390ed78(lVar22,uVar17 & 1,0);
                                    lVar22 = unaff_x19[0xe1];
                                    if (lVar22 == 0) break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar19) goto LAB_035575f4;
                                    plVar34 = *(long **)(lVar22 + lVar36 * 8 + 0x28);
                                    uVar45 = (**(code **)(*unaff_x19 + 0x2b8))();
                                    if (plVar34 == (long *)0x0) break;
                                    (**(code **)(*plVar34 + 0x2c8))
                                              (plVar34,uVar45 & 1,*(undefined8 *)(*plVar34 + 0x2d0))
                                    ;
                                  }
                                  lVar22 = *in_stack_00000170;
                                  lVar36 = lVar36 + 1;
                                  lVar25 = lVar25 + 0x50;
                                } while (lVar22 != 0);
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


