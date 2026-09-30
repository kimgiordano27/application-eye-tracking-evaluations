/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.EyeGazeState>$$.ctor
ENTRY_POINT: 06c4a334
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 155
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>___ctor
               (ulong param_1,long param_2,long param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long unaff_x19;
  long unaff_x23;
  long lVar9;
  ulong uVar10;
  undefined4 *puVar11;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  
  if ((param_1 & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_091fd9d8);
    FUN_03d2d2b0(PTR_DAT_091a0c18);
    *(undefined1 *)(unaff_x23 + 0x95c) = 1;
  }
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_07189ddc(3,0);
  }
  iVar1 = thunk_FUN_03d9e884(param_3,0);
  if (iVar1 != 1) {
    FUN_0719958c(7,0);
  }
  iVar1 = thunk_FUN_03d9e840(param_3,0,0);
  if (iVar1 != 0) {
    FUN_0719958c(6,0);
  }
  uVar2 = Newtonsoft_Json_Serialization_TraceJsonWriter__WriteValue(param_3,0);
  if (uVar2 < param_4) {
    Newtonsoft_Json_Schema_JsonSchemaGenerator_<>c__DisplayClass23_0___ctor(0);
  }
  iVar1 = Newtonsoft_Json_Serialization_TraceJsonWriter__WriteValue(param_3,0);
  if ((int)(iVar1 - param_4) < *(int *)(param_2 + 0x20) - *(int *)(param_2 + 0x28)) {
    FUN_0719958c(5,0);
  }
  lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x148);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_03d8f26c(lVar8);
  }
  lVar8 = thunk_FUN_03d2ee44(param_3,lVar8);
  if (lVar8 != 0) {
    FUN_06c48b28(param_2,lVar8,param_4,
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x180));
    return;
  }
  lVar8 = thunk_FUN_03d2ee44(param_3,*(undefined8 *)PTR_DAT_091fd9d8);
  if (lVar8 == 0) {
    plVar6 = (long *)thunk_FUN_03d2ee44(param_3,*(undefined8 *)PTR_DAT_091a0c18);
    if (plVar6 == (long *)0x0) {
      FUN_07199e44();
    }
    uVar2 = *(uint *)(param_2 + 0x20);
    if (0 < (int)uVar2) {
      lVar8 = *(long *)(param_2 + 0x18);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      uVar10 = 0;
      puVar11 = (undefined4 *)(lVar8 + 0x30);
      do {
        if (*(uint *)(lVar8 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d550();
        }
        if (-1 < (int)puVar11[-4]) {
          in_stack_00000010 = 0;
          in_stack_00000018 = 0;
          FUN_058198f4(&stack0x00000010,*(undefined8 *)(puVar11 + -2),*puVar11,
                       *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x158));
          lVar9 = thunk_FUN_03d2eb70(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8));
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03d2d548();
          }
          if ((lVar9 != 0) &&
             (lVar7 = thunk_FUN_03d2ee44(lVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
            uVar3 = thunk_FUN_03d3c630();
                    /* WARNING: Subroutine does not return */
            FUN_03d2d414(uVar3,0);
          }
          if (*(uint *)(plVar6 + 3) <= param_4) {
                    /* WARNING: Subroutine does not return */
            FUN_03d2d550();
          }
          plVar6[(long)(int)param_4 + 4] = lVar9;
          thunk_FUN_03d1023c(plVar6 + (long)(int)param_4 + 4,lVar9);
          param_4 = param_4 + 1;
        }
        uVar10 = uVar10 + 1;
        puVar11 = puVar11 + 6;
      } while (uVar2 != uVar10);
    }
  }
  else {
    iVar1 = *(int *)(param_2 + 0x20);
    if (0 < iVar1) {
      lVar9 = *(long *)(param_2 + 0x18);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      uVar10 = 0;
      puVar11 = (undefined4 *)(lVar9 + 0x30);
      do {
        if (*(uint *)(lVar9 + 0x18) <= uVar10) goto LAB_06c4a63c;
        if (-1 < (int)puVar11[-4]) {
          uVar3 = thunk_FUN_03d2eb70(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x70));
          if (*(uint *)(lVar9 + 0x18) <= uVar10) {
LAB_06c4a63c:
                    /* WARNING: Subroutine does not return */
            FUN_03d2d550();
          }
          in_stack_00000028._4_4_ = *puVar11;
          uVar4 = thunk_FUN_03d2eb70(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x78),
                                     (long)&stack0x00000028 + 4);
          in_stack_00000010 = 0;
          in_stack_00000018 = 0;
          FUN_07143704(&stack0x00000010,uVar3,uVar4,0);
          if (*(uint *)(lVar8 + 0x18) <= param_4) goto LAB_06c4a63c;
          lVar7 = lVar8 + (long)(int)param_4 * 0x10;
          puVar5 = (undefined8 *)(lVar7 + 0x20);
          *(undefined8 *)(lVar7 + 0x28) = in_stack_00000018;
          *puVar5 = in_stack_00000010;
          param_4 = param_4 + 1;
          thunk_FUN_03d1023c(puVar5,0);
          iVar1 = *(int *)(param_2 + 0x20);
        }
        uVar10 = uVar10 + 1;
        puVar11 = puVar11 + 6;
      } while ((long)uVar10 < (long)iVar1);
    }
  }
  return;
}


