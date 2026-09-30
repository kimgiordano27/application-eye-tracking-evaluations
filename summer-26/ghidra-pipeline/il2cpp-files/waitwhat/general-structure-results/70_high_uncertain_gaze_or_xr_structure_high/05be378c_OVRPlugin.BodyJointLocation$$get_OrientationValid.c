/*
FUNCTION_NAME: OVRPlugin.BodyJointLocation$$get_OrientationValid
ENTRY_POINT: 05be378c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_gaze_retrieval_or_extraction
*/


float OVRPlugin_BodyJointLocation__get_OrientationValid(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  int in_w9;
  int *piVar4;
  long unaff_x19;
  long *plVar5;
  long *unaff_x21;
  float fVar6;
  float fVar7;
  float unaff_s10;
  float in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 in_stack_00000018;
  
  uVar1 = (**(code **)(param_1 + (long)in_w9 * 0x10 + 0x138))();
  if ((uVar1 & 1) == 0) {
    plVar5 = *(long **)(unaff_x19 + 0x28);
    if (plVar5 == (long *)0x0) goto LAB_05be38ec;
    lVar3 = *plVar5;
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar1 != 0) {
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x21) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar4 + 4) * 0x10 + 0x138);
          goto LAB_05be38b4;
        }
        uVar1 = uVar1 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_031c0d08(plVar5,*unaff_x21,4);
LAB_05be38b4:
    in_stack_00000000 = (float)(*(code *)*puVar2)(plVar5,puVar2[1]);
    in_stack_00000000 = unaff_s10 * in_stack_00000000;
  }
  else {
    fVar6 = (float)FUN_069c57a8(in_stack_00000008._4_4_,uStack0000000000000010,
                                uStack0000000000000014,in_stack_00000018,0);
    plVar5 = *(long **)(unaff_x19 + 0x28);
    if (plVar5 == (long *)0x0) {
LAB_05be38ec:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    lVar3 = *plVar5;
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar1 != 0) {
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x21) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar4 + 4) * 0x10 + 0x138);
          goto LAB_05be387c;
        }
        uVar1 = uVar1 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_031c0d08(plVar5,*unaff_x21,4);
LAB_05be387c:
    fVar7 = (float)(*(code *)*puVar2)(plVar5,puVar2[1]);
    in_stack_00000000 = in_stack_00000000 + fVar6 * fVar7;
  }
  return in_stack_00000000;
}


