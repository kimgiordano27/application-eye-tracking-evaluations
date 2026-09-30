/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.Vector4f>
ENTRY_POINT: 03031a14
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_Vector4f>
          (long param_1,undefined1 param_2 [16],float param_3,float param_4,undefined8 param_5,
          long param_6)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  float *pfVar5;
  long lVar6;
  long in_x9;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long *plVar9;
  long *unaff_x21;
  long unaff_x22;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined4 in_stack_00000080;
  
  if (in_x9 != 0) {
    piVar8 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == param_6) {
        puVar3 = (undefined8 *)(param_1 + (long)(*piVar8 + 2) * 0x10 + 0x138);
        goto LAB_03031ae4;
      }
      in_x9 = in_x9 + -1;
      piVar8 = piVar8 + 4;
    } while (in_x9 != 0);
  }
  puVar3 = (undefined8 *)FUN_02ce0a7c();
LAB_03031ae4:
  fVar10 = (float)(*(code *)*puVar3)();
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    fVar13 = param_3;
    fVar12 = param_4;
    fVar11 = (float)System_Array__InternalArray__IEnumerable_GetEnumerator<KeyValuePair<Guid,_OVRTask_CallbackWithState<object,_OVRTask<object>>>>
                              (*(long *)(unaff_x19 + 0x28),0);
    param_3 = param_3 - fVar13;
    param_4 = param_4 - fVar12;
    fVar10 = (float)FUN_02f32930(fVar10 - fVar11,0);
    if (DAT_06a6722e == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8d28);
      DAT_06a6722e = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_065c8d28 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    fVar11 = param_4 * param_4;
    fVar12 = SQRT(fVar11 + fVar10 * fVar10 + param_3 * param_3);
    fVar13 = DAT_013ddfb8;
    if (fVar12 <= DAT_013ddfb8) {
      if (DAT_06a67148 == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
        DAT_06a67148 = '\x01';
      }
      pfVar5 = *(float **)(*(long *)PTR_DAT_065c9850 + 0xb8);
      fVar10 = *pfVar5;
      param_3 = pfVar5[1];
      param_4 = pfVar5[2];
    }
    else {
      fVar10 = fVar10 / fVar12;
      param_3 = param_3 / fVar12;
      param_4 = param_4 / fVar12;
    }
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      fVar12 = (float)System_Array__InternalArray__IEnumerable_GetEnumerator<KeyValuePair<Guid,_OVRTask_CallbackWithState<object,_OVRTask<object>>>>
                                (*(long *)(unaff_x19 + 0x28),0);
      if (*(long *)(unaff_x19 + 0x28) != 0) {
        plVar9 = *(long **)(unaff_x22 + 0x20);
        fVar12 = fVar12 - fVar10 * DAT_013ddbec;
        fVar14 = fVar13 - param_3 * DAT_013ddbec;
        fVar15 = fVar11 - param_4 * DAT_013ddbec;
        fVar10 = (float)System_Array__InternalArray__IEnumerable_GetEnumerator<KeyValuePair<Guid,_OVRTask_CallbackWithState<object,_OVRTask<object>>>>
                                  (*(long *)(unaff_x19 + 0x28),0);
        FUN_05eea074(fVar10 - fVar12,fVar13 - fVar14,fVar11 - fVar15,0);
        in_stack_00000058 = 0;
        in_stack_00000060 = 0;
        in_stack_00000068 = 0;
        FUN_03c8994c(&stack0x00000058,*(undefined8 *)PTR_DAT_065ca5c8);
        uVar2 = in_stack_00000068;
        uVar1 = in_stack_00000060;
        uVar4 = in_stack_00000058;
        if (plVar9 != (long *)0x0) {
          lVar6 = *plVar9;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *unaff_x21) {
                puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x51) * 0x10 + 0x138);
                goto LAB_03031cf8;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar3 = (undefined8 *)FUN_02ce0a7c(plVar9,*unaff_x21,0x51);
LAB_03031cf8:
          in_stack_00000078 = uVar1;
          in_stack_00000070 = uVar4;
          in_stack_00000080 = uVar2;
          uVar4 = (*(code *)*puVar3)(fVar12,fVar14,fVar15,DAT_013dde24,plVar9,&stack0x00000070,0,1,0
                                     ,1,puVar3[1]);
          *(undefined8 *)(unaff_x19 + 0x18) = uVar4;
          *(undefined4 *)(unaff_x19 + 0x10) = 3;
          return 1;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


