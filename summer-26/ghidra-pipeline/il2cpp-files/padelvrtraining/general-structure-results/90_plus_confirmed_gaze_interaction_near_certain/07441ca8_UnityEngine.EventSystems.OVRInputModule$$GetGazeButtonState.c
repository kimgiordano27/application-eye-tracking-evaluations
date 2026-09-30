/*
FUNCTION_NAME: UnityEngine.EventSystems.OVRInputModule$$GetGazeButtonState
ENTRY_POINT: 07441ca8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 210
LABEL: confirmed_gaze_interaction_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_gaze_interaction
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo;active_gaze_retrieval;active_gaze_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_2
*/


undefined8
UnityEngine_EventSystems_OVRInputModule__GetGazeButtonState
          (ulong param_1,ulong param_2,float param_3,float param_4,float param_5,float param_6,
          float param_7,float param_8,long param_9,float *param_10,undefined8 *param_11)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  float *pfVar8;
  long unaff_x22;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  ulong uVar16;
  float fVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
  float fStack0000000000000004;
  float fStack000000000000002c;
  float fStack000000000000004c;
  float fStack0000000000000054;
  float fStack0000000000000074;
  float fStack000000000000007c;
  float fStack0000000000000084;
  float fStack000000000000008c;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined4 uStack00000000000000a8;
  float fStack00000000000000ac;
  undefined4 uStack00000000000000b0;
  undefined8 uStack00000000000000b4;
  float fStack00000000000000c8;
  float fStack00000000000000cc;
  float fStack00000000000000d0;
  undefined8 uStack00000000000000d4;
  float fStack00000000000000dc;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  float fStack000000000000011c;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined4 in_stack_00000138;
  float fStack000000000000013c;
  undefined4 in_stack_00000140;
  undefined8 uStack0000000000000144;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined4 in_stack_00000168;
  float fStack000000000000016c;
  undefined4 in_stack_00000170;
  undefined8 uStack0000000000000174;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined4 in_stack_00000198;
  undefined4 uStack000000000000019c;
  undefined4 in_stack_000001a0;
  undefined8 uStack00000000000001a4;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  float fStack00000000000001e0;
  float fStack00000000000001e4;
  float fStack00000000000001e8;
  undefined8 in_stack_000001f0;
  undefined4 in_stack_000001f8;
  float in_stack_000001fc;
  undefined4 in_stack_00000200;
  undefined8 in_stack_00000204;
  float in_stack_000002b0;
  float in_stack_000002b4;
  float in_stack_000002b8;
  
  if ((param_1 & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_092229a0);
    FUN_03d2d2b0(PTR_DAT_09222990);
    *(undefined1 *)(unaff_x22 + 0x704) = 1;
  }
  fStack000000000000011c = 0.0;
  in_stack_000001c8 = 0;
  in_stack_000001c0 = 0;
  in_stack_000001d8 = 0;
  in_stack_000001d0 = 0;
  in_stack_000001b8 = 0;
  in_stack_000001b0 = 0;
  uStack00000000000001a4 = 0;
  in_stack_000001a0 = 0;
  in_stack_00000188 = 0;
  in_stack_00000180 = 0;
  in_stack_00000198 = 0;
  uStack000000000000019c = 0;
  in_stack_00000190 = 0;
  uStack0000000000000174 = 0;
  in_stack_00000170 = 0;
  in_stack_00000158 = 0;
  in_stack_00000150 = 0;
  in_stack_00000168 = 0;
  fStack000000000000016c = 0.0;
  in_stack_00000160 = 0;
  uStack0000000000000144 = 0;
  in_stack_00000140 = 0;
  in_stack_00000128 = 0;
  in_stack_00000120 = 0;
  in_stack_00000138 = 0;
  fStack000000000000013c = 0.0;
  in_stack_00000130 = 0;
  in_stack_000000f8 = 0;
  in_stack_000000f0 = 0;
  in_stack_00000108 = 0;
  in_stack_00000100 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000e0 = 0;
  param_11[3] = 0;
  param_11[2] = 0;
  param_11[5] = 0;
  param_11[4] = 0;
  param_11[1] = 0;
  *param_11 = 0;
  fStack000000000000008c = param_5;
  if (DAT_098362c7 == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a0f88);
    DAT_098362c7 = '\x01';
  }
  puVar1 = PTR_DAT_091a0f88;
  fVar13 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_091a0f88 + 0xb8) + 1);
  *(undefined8 *)param_10 = **(undefined8 **)(*(long *)PTR_DAT_091a0f88 + 0xb8);
  param_10[2] = fVar13;
  fVar14 = param_6 - param_3;
  fVar13 = *(float *)(param_9 + 0x50);
  if (fVar14 <= *(float *)(param_9 + 0x50)) {
    fVar13 = fVar14;
  }
  fStack000000000000004c = param_4;
  if (DAT_09836325 == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a0f88);
    param_2 = param_2 & 0xffffffff;
    DAT_09836325 = '\x01';
  }
  fVar20 = fStack000000000000008c;
  fVar19 = fStack000000000000004c;
  fStack0000000000000054 = param_3 + fVar13 * *(float *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x1c);
  fStack000000000000002c = fVar13;
  fStack000000000000007c = in_stack_000002b4;
  fStack0000000000000084 = in_stack_000002b8;
  uVar6 = FUN_07442470(param_9,&stack0x000001b0);
  fVar13 = fStack0000000000000084;
  fVar9 = fStack000000000000007c;
  fStack0000000000000074 = param_6;
  if ((uVar6 & 1) != 0) {
    fVar20 = fVar20 - (float)param_2;
    param_11[1] = in_stack_000001b8;
    *param_11 = in_stack_000001b0;
    param_11[3] = in_stack_000001c8;
    param_11[2] = in_stack_000001c0;
    param_11[5] = in_stack_000001d8;
    param_11[4] = in_stack_000001d0;
    fVar19 = param_7 - fVar19;
    fVar13 = fVar19 * fVar19 + fVar20 * fVar20 + fVar14 * fVar14;
    if (DAT_098363dc == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a2ee8);
      DAT_098363dc = '\x01';
    }
    puVar2 = PTR_DAT_091a1008;
    fVar9 = ABS(fVar13);
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    fVar17 = **(float **)(*(long *)PTR_DAT_091a2ee8 + 0xb8) * 8.0;
    fVar10 = fVar9 * DAT_01914a48;
    if (fVar9 * DAT_01914a48 <= fVar17) {
      fVar10 = fVar17;
    }
    if (ABS(0.0 - fVar13) < fVar10) {
UnityEngine_EventSystems_OVRInputModule__set_instance:
      puVar3 = PTR_DAT_09222990;
      FUN_05edca54(&stack0x000001e0,&stack0x000001b0,*(undefined8 *)PTR_DAT_09222990);
      in_stack_00000158 = _fStack00000000000001e8;
      in_stack_00000150 = _fStack00000000000001e0;
      uVar12 = in_stack_000001f0;
      fVar13 = in_stack_000001fc;
      fVar19 = (float)FUN_08abdd04(&stack0x00000150,0);
      FUN_05edca54(&stack0x000001e0,&stack0x000001b0,*(undefined8 *)puVar3);
      in_stack_00000158 = _fStack00000000000001e8;
      in_stack_00000150 = _fStack00000000000001e0;
      uVar15 = in_stack_000001f0;
      fVar14 = in_stack_000001fc;
      fVar20 = (float)FUN_08abdcec(&stack0x00000150,0);
      FUN_05edca54(&stack0x000001e0,&stack0x000001b0,*(undefined8 *)puVar3);
      in_stack_00000158 = _fStack00000000000001e8;
      in_stack_00000150 = _fStack00000000000001e0;
      fVar9 = (float)FUN_08abdd1c(&stack0x00000150,0);
      if (DAT_0983637d == '\0') {
        FUN_03d2d2b0(PTR_DAT_091a1008);
        DAT_0983637d = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      fVar17 = (float)uVar12;
      fVar10 = SQRT(fVar13 * fVar13 + fVar19 * fVar19 + fVar17 * fVar17);
      if (fVar10 <= DAT_0191476c) {
        if (DAT_098362c7 == '\0') {
          FUN_03d2d2b0(PTR_DAT_091a0f88);
          DAT_098362c7 = '\x01';
        }
        uVar12 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
        fVar10 = *(float *)(*(undefined8 **)(*(long *)puVar1 + 0xb8) + 1);
      }
      else {
        uVar12 = CONCAT44(-fVar17 / fVar10,-fVar19 / fVar10);
        fVar10 = -fVar13 / fVar10;
      }
      FUN_05edca54(&stack0x000001e0,&stack0x000001b0,*(undefined8 *)puVar3);
      in_stack_00000158 = _fStack00000000000001e8;
      in_stack_00000150 = _fStack00000000000001e0;
      lVar7 = FUN_08abdc40(&stack0x00000150,0);
      FUN_05edca54(&stack0x000001e0,&stack0x000001b0,*(undefined8 *)puVar3);
      in_stack_00000158 = _fStack00000000000001e8;
      in_stack_00000150 = _fStack00000000000001e0;
      in_stack_00000160 = in_stack_000001f0;
      in_stack_00000168 = in_stack_000001f8;
      fStack000000000000016c = in_stack_000001fc;
      in_stack_00000170 = in_stack_00000200;
      uStack0000000000000174 = in_stack_00000204;
      fVar11 = (float)FUN_08abdd1c(&stack0x00000150,0);
      if (lVar7 == 0) goto LAB_0744246c;
      fStack00000000000000c8 = fVar20 + fVar19 * fVar9;
      fStack00000000000000cc = (float)uVar15 + fVar17 * fVar9;
      fStack00000000000000d0 = fVar14 + fVar13 * fVar9;
      uStack00000000000000d4 = uVar12;
      fStack00000000000000dc = fVar10;
      uVar6 = FUN_08abf178(fVar11 + DAT_019150d8,lVar7,&stack0x000000c8,&stack0x00000120,0);
      uVar15 = uStack0000000000000144;
      uVar5 = in_stack_00000140;
      fVar13 = fStack000000000000013c;
      uVar4 = in_stack_00000138;
      uVar12 = in_stack_00000130;
      param_2 = param_2 & 0xffffffff;
      if ((uVar6 & 1) != 0) {
        _fStack00000000000001e8 = in_stack_00000128;
        _fStack00000000000001e0 = in_stack_00000120;
        FUN_05edca24(&stack0x000001b0,&stack0x000001e0,*(undefined8 *)PTR_DAT_092229a0);
        in_stack_000001f0 = uVar12;
        in_stack_000001f8 = uVar4;
        in_stack_000001fc = fVar13;
        in_stack_00000200 = uVar5;
        in_stack_00000204 = uVar15;
      }
    }
    else {
      FUN_05edca54(&stack0x000001e0,&stack0x000001b0,*(undefined8 *)PTR_DAT_09222990);
      in_stack_00000158 = _fStack00000000000001e8;
      in_stack_00000150 = _fStack00000000000001e0;
      uVar12 = in_stack_000001f0;
      in_stack_00000160 = in_stack_000001f0;
      in_stack_00000168 = in_stack_000001f8;
      fStack000000000000016c = in_stack_000001fc;
      in_stack_00000170 = in_stack_00000200;
      uStack0000000000000174 = in_stack_00000204;
      fVar9 = in_stack_000001fc;
      fVar10 = (float)FUN_08abdd04(&stack0x00000150,0);
      if (DAT_0983637d == '\0') {
        FUN_03d2d2b0(PTR_DAT_091a1008);
        DAT_0983637d = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      fVar13 = SQRT(fVar13);
      if (fVar13 <= DAT_0191476c) {
        if (DAT_098362c7 == '\0') {
          FUN_03d2d2b0(PTR_DAT_091a0f88);
          DAT_098362c7 = '\x01';
        }
        pfVar8 = *(float **)(*(long *)puVar1 + 0xb8);
        fVar20 = *pfVar8;
        fVar14 = pfVar8[1];
        fVar19 = pfVar8[2];
      }
      else {
        fVar20 = fVar20 / fVar13;
        fVar14 = fVar14 / fVar13;
        fVar19 = fVar19 / fVar13;
      }
      if (DAT_019150d8 < ABS(fVar9 * fVar19 + fVar10 * fVar20 + (float)uVar12 * fVar14))
      goto UnityEngine_EventSystems_OVRInputModule__set_instance;
    }
    FUN_05edca54(&stack0x000001e0,&stack0x000001b0,*(undefined8 *)PTR_DAT_09222990);
    in_stack_00000098 = _fStack00000000000001e8;
    in_stack_00000090 = _fStack00000000000001e0;
    in_stack_000000a0 = in_stack_000001f0;
    uStack00000000000000a8 = in_stack_000001f8;
    fStack00000000000000ac = in_stack_000001fc;
    uStack00000000000000b0 = in_stack_00000200;
    uStack00000000000000b4 = in_stack_00000204;
    FUN_07442728(&stack0x000001e0,in_stack_000002b0,fStack000000000000007c,fStack0000000000000084,
                 param_9,&stack0x00000090);
    fVar13 = fStack00000000000001e8;
    in_stack_000002b0 = fStack00000000000001e0;
    fVar9 = fStack00000000000001e4;
  }
  if (*(long *)(param_9 + 0x20) != 0) {
    uVar18 = (ulong)(uint)(param_7 + fVar13);
    uVar16 = (ulong)(uint)(fStack0000000000000074 + fVar9);
    fVar19 = fStack000000000000008c + in_stack_000002b0;
    fVar14 = (float)FUN_08abf9b0(*(long *)(param_9 + 0x20),0);
    uVar6 = FUN_074428bc(fVar19,uVar16,uVar18,param_8,fVar14 - param_8,param_9,&stack0x00000180);
    if ((uVar6 & 1) != 0) {
      uVar12 = FUN_08abdcec(&stack0x00000180,0);
      if (DAT_09836325 == '\0') {
        FUN_03d2d2b0(PTR_DAT_091a0f88);
        DAT_09836325 = '\x01';
      }
      lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
      fStack0000000000000004 = fStack0000000000000054 + fVar9;
      uVar6 = UnityEngine_EventSystems_PointerEventDataExtension__GetRay
                        (uVar12,uVar16,uVar18,*(undefined4 *)(lVar7 + 0x18),
                         *(undefined4 *)(lVar7 + 0x1c),*(undefined4 *)(lVar7 + 0x20),
                         &stack0x0000011c);
      fVar14 = (float)uVar16;
      if (((uVar6 & 1) != 0) &&
         (FUN_08abdcec(&stack0x00000180,0),
         fVar14 - (param_3 - param_8) <= *(float *)(param_9 + 0x50))) {
        FUN_08abdd04(&stack0x00000180,0);
        uVar6 = FUN_07441078(param_9);
        if ((uVar6 & 1) != 0) {
          if (fVar9 <= fStack000000000000002c - fStack000000000000011c) {
            fVar9 = fStack000000000000002c - fStack000000000000011c;
          }
          if (DAT_09836325 == '\0') {
            FUN_03d2d2b0(PTR_DAT_091a0f88);
            DAT_09836325 = '\x01';
          }
          fStack0000000000000004 = fVar9 * *(float *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x1c);
          uVar6 = FUN_07442470(param_2,param_3,fStack000000000000004c,fStack000000000000008c,
                               fStack0000000000000074,param_7,param_8,param_9,&stack0x000000e0);
          if ((uVar6 & 1) == 0) {
            *param_10 = in_stack_000002b0;
            param_10[1] = fVar9;
            param_10[2] = fVar13;
            return 1;
          }
        }
      }
    }
    return 0;
  }
LAB_0744246c:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


