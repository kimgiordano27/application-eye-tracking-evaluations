/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.Vector3f>
ENTRY_POINT: 0379c6d0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16]
System_Array__InternalArray__ICollection_Contains<OVRPlugin_Vector3f>
          (undefined1 param_1 [16],float param_2,float param_3)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *unaff_x20;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  ulong unaff_d8;
  undefined8 in_register_00005108;
  undefined8 in_stack_00000010;
  float fStack0000000000000018;
  float fStack000000000000001c;
  long in_stack_00000028;
  
  if (unaff_x20 == (long *)0x0) goto LAB_0379c840;
  lVar5 = *unaff_x20;
  bVar1 = *(byte *)(lVar5 + 0x130);
  bVar2 = *(byte *)(*(long *)PTR_DAT_06f709d8 + 0x130);
  if ((bVar1 < bVar2) ||
     (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_06f709d8)) {
    bVar2 = *(byte *)(*(long *)PTR_DAT_06f70cb0 + 0x130);
    if ((bVar2 <= bVar1) &&
       (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)PTR_DAT_06f70cb0))
    goto LAB_0379c8c8;
    bVar2 = *(byte *)(*(long *)PTR_DAT_06f70cf8 + 0x130);
    if ((bVar2 <= bVar1) &&
       (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)PTR_DAT_06f70cf8)) {
      fVar6 = (float)FUN_0697744c();
      fVar7 = (float)FUN_0697744c();
      fVar8 = (float)FUN_0697744c();
      fVar9 = (float)FUN_0379f01c();
      unaff_d8 = (ulong)(uint)(fVar6 * DAT_0136a108 * fVar7 * fVar8 * fVar9);
      in_register_00005108 = 0;
      goto LAB_0379c840;
    }
    bVar2 = *(byte *)(*(long *)PTR_DAT_06f70600 + 0x130);
    if ((bVar1 < bVar2) ||
       (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_06f70600))
    goto LAB_0379c840;
    if (unaff_x20 == (long *)0x0) goto LAB_0379c968;
    fVar6 = (float)FUN_06976f04(unaff_x20,0);
    fVar7 = (float)FUN_06976f04(unaff_x20,0);
    fVar8 = (float)FUN_06976f8c(unaff_x20,0);
    fVar11 = fVar6 * fVar6 * DAT_01369988;
    fVar9 = (float)FUN_0379f01c();
    param_3 = fVar7 * fVar6 * fVar6 * DAT_0136a108 + fVar11 * fVar8;
  }
  else {
    uVar3 = FUN_06976c44();
    if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f6d618);
    }
    uVar4 = FUN_068f9b78(uVar3,0,0);
    if ((uVar4 & 1) == 0) {
      lVar5 = FUN_06976c44();
      if (lVar5 == 0) {
LAB_0379c968:
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      FUN_068d6878(&stack0x00000008,lVar5,0);
      unaff_d8 = (ulong)(uint)((in_stack_00000010._4_4_ + in_stack_00000010._4_4_) *
                               (fStack0000000000000018 + fStack0000000000000018) *
                              (fStack000000000000001c + fStack000000000000001c));
      in_register_00005108 = 0;
      goto LAB_0379c840;
    }
    uVar4 = FUN_03c746a0();
    if ((uVar4 & 1) == 0) goto LAB_0379c840;
    if (in_stack_00000028 == 0) goto LAB_0379c968;
LAB_0379c8c8:
    fVar6 = (float)FUN_069771d4();
    fVar9 = (float)FUN_0379f01c();
    param_3 = param_3 * fVar6 * param_2;
  }
  unaff_d8 = (ulong)(uint)(fVar9 * param_3);
  in_register_00005108 = 0;
LAB_0379c840:
  auVar10._8_8_ = in_register_00005108;
  auVar10._0_8_ = unaff_d8;
  return auVar10;
}


