/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction.EyeGazeDevice$$.ctor
ENTRY_POINT: 085e860c
PROGRAM: cac-libil2cpp.so
SCORE: 101
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_7;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice___ctor
               (long param_1)

{
  bool bVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000028;
  
  FUN_03f13384(*(undefined8 *)(param_1 + 0x408));
  FUN_03f13384(PTR_DAT_091993a0);
  FUN_03f13384(PTR_DAT_09199410);
  FUN_03f13384(PTR_DAT_09199418);
  FUN_03f13384(PTR_DAT_091993c0);
  FUN_03f13384(PTR_DAT_091993c8);
  *(undefined1 *)(unaff_x21 + 0x2b5) = 1;
  in_stack_00000028 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  plVar2 = (long *)thunk_FUN_03f4e590();
  lVar5 = 0;
  if (plVar2 == (long *)0x0) {
LAB_085e86f8:
    bVar1 = true;
  }
  else {
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x22) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_085e86c0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f4b594(plVar2,*unaff_x22,0);
LAB_085e86c0:
    lVar5 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if (lVar5 == 0) goto LAB_085e86f8;
    plVar2 = (long *)unaff_x19[0x14];
    if (plVar2 == (long *)0x0) goto LAB_085e884c;
    uVar6 = (**(code **)(*plVar2 + 0x178))(plVar2,lVar5,*(undefined8 *)(*plVar2 + 0x180));
    if ((uVar6 & 1) == 0) {
      uVar4 = FUN_0731d5f8(*(undefined8 *)PTR_DAT_091993c0);
      uVar4 = FUN_0731ca20(uVar4,*(undefined8 *)PTR_DAT_091993c8,0);
      if (*(int *)(*(long *)PTR_DAT_0910b5c0 + 0xe4) == 0) {
        thunk_FUN_03f6fea8(*(long *)PTR_DAT_0910b5c0);
      }
      FUN_08791f2c(uVar4);
      return;
    }
    bVar1 = false;
  }
  if ((long *)unaff_x19[0x13] != (long *)0x0) {
    uVar6 = (**(code **)(*(long *)unaff_x19[0x13] + 0x198))();
    if ((uVar6 & 1) != 0) {
      if (!bVar1) {
        if (unaff_x19[0x1b] == 0) goto LAB_085e884c;
        FUN_051370c8();
      }
      if (unaff_x19[0x27] == 0) goto LAB_085e884c;
      _in_stack_00000010 =
           FUN_054da1fc(unaff_x19[0x27],&stack0x00000028,*(undefined8 *)PTR_DAT_09199410);
      if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f1362c();
      }
      *(long **)(in_stack_00000028 + 0x10) = unaff_x19;
      thunk_FUN_03f86000();
      if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f1362c();
      }
      *(undefined8 *)(in_stack_00000028 + 0x18) = unaff_x20;
      thunk_FUN_03f86000();
      if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f1362c();
      }
      *(long *)(in_stack_00000028 + 0x20) = lVar5;
      thunk_FUN_03f86000((long *)(in_stack_00000028 + 0x20),lVar5);
      (**(code **)(*unaff_x19 + 0x2a8))();
      FUN_05c8ce0c(&stack0x00000010,*(undefined8 *)PTR_DAT_09199418);
    }
    return;
  }
LAB_085e884c:
                    /* WARNING: Subroutine does not return */
  FUN_03f1362c();
}


