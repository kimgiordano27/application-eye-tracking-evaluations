/*
FUNCTION_NAME: OVRSimpleJSON.JSONArray.<get_Children>d__24$$System.Collections.Generic.IEnumerable<OVRSimpleJSON.JSONNode>.GetEnumerator
ENTRY_POINT: 07414d60
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


float OVRSimpleJSON_JSONArray_<get_Children>d__24__System_Collections_Generic_IEnumerable<OVRSimpleJSON_JSONNode>_GetEnumerator
                (long param_1)

{
  int iVar1;
  float fVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double in_stack_00000018;
  
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 == 0) goto thunk_FUN_03d2d548;
  if (*(int *)(lVar4 + 0x2c) == 0) {
    uVar5 = FUN_07416a64(lVar4);
    lVar4 = *(long *)(param_1 + 0x20);
  }
  else {
    uVar5 = *(undefined8 *)(lVar4 + 0x30);
  }
  if (DAT_0983671f == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a1008);
    DAT_0983671f = '\x01';
  }
  puVar3 = PTR_DAT_091a1008;
  if (*(int *)(*(long *)PTR_DAT_091a1008 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  dVar8 = (double)(int)uVar5;
  dVar7 = modf(dVar8,&stack0x00000018);
  if ((int)uVar5 < 0) {
    if (dVar7 == -0.5) {
      dVar7 = -1.0;
      goto OVRSimpleJSON_JSONObject__get_Inline;
    }
    dVar8 = (double)(long)(dVar8 + -0.5);
  }
  else if (dVar7 == 0.5) {
    dVar7 = 1.0;
OVRSimpleJSON_JSONObject__get_Inline:
    dVar8 = in_stack_00000018;
    if (((long)in_stack_00000018 & 1U) != 0) {
      dVar8 = in_stack_00000018 + dVar7;
    }
  }
  else {
    dVar8 = (double)(long)(dVar8 + 0.5);
  }
  if (lVar4 != 0) {
    iVar1 = *(int *)(lVar4 + 0x3c);
    lVar4 = *(long *)(param_1 + 0x20);
    if (DAT_0983671f == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a1008);
      DAT_0983671f = '\x01';
    }
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    modf((double)(int)((ulong)uVar5 >> 0x20),&stack0x00000018);
    if ((lVar4 != 0) && (lVar4 = FUN_08a4d98c(param_1,0), lVar4 != 0)) {
      fVar2 = -2.1474836e+09;
      if (dVar8 != INFINITY) {
        fVar2 = (float)(int)dVar8;
      }
      fVar6 = (float)FUN_08a6021c(lVar4,0);
      return (fVar2 * (1.0 / (float)iVar1)) / fVar6;
    }
  }
thunk_FUN_03d2d548:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


