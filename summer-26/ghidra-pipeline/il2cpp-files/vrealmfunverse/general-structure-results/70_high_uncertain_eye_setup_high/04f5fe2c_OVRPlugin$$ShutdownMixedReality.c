/*
FUNCTION_NAME: OVRPlugin$$ShutdownMixedReality
ENTRY_POINT: 04f5fe2c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin__ShutdownMixedReality
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined *puVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined8 *unaff_x20;
  undefined8 uVar9;
  long *unaff_x23;
  long unaff_x24;
  undefined8 *puVar10;
  long unaff_x25;
  undefined8 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 uStack0000000000000028;
  float fStack000000000000002c;
  
  puVar1 = UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledResourceInfo>_TypeInfo;
  puVar10 = *(undefined8 **)(unaff_x24 + 0x640);
  puVar8 = *(undefined4 **)(param_4 + 0xb8);
  puVar11 = *(undefined8 **)(unaff_x25 + 0x648);
  uVar15 = *puVar8;
  uVar17 = puVar8[1];
  uVar19 = puVar8[2];
  FUN_04aed12c(&stack0x00000030,&stack0x00000050,*unaff_x20);
  fVar3 = -INFINITY;
  uVar4 = 0;
  while (uVar9 = uVar4, uVar16 = uVar15, uVar18 = uVar17, uVar20 = uVar19, fVar21 = fVar3,
        uVar14 = param_3, uVar13 = param_2, uVar6 = FUN_047e3f3c(&stack0x00000030,*puVar10),
        (uVar6 & 1) != 0) {
    uVar7 = FUN_047e3de4(&stack0x00000030,*puVar11);
    iVar5 = FUN_04f5ffb8(fVar21);
    param_2 = uVar13;
    param_3 = uVar14;
    fVar3 = fVar21;
    uVar19 = uVar20;
    uVar17 = uVar18;
    uVar15 = uVar16;
    uVar4 = uVar9;
    if ((iVar5 != 0) &&
       (uVar12 = FUN_04f5d4c8(), fVar2 = fStack000000000000002c, param_2 = uVar13, param_3 = uVar14,
       uStack0000000000000020 = uVar12, uStack0000000000000024 = uVar13,
       uStack0000000000000028 = uVar14, fVar3 = fVar2, uVar19 = uVar14, uVar17 = uVar13,
       uVar15 = uVar12, uVar4 = uVar7, fStack000000000000002c <= fVar21)) {
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      param_2 = uVar18;
      param_3 = uVar20;
      uVar6 = FUN_04f60130(uVar16,&stack0x00000020);
      fVar3 = fVar21;
      uVar19 = uVar20;
      uVar17 = uVar18;
      uVar15 = uVar16;
      uVar4 = uVar9;
      if ((uVar6 & 1) != 0) {
        fVar3 = fVar2;
        uVar19 = uVar14;
        uVar17 = uVar13;
        uVar15 = uVar12;
        uVar4 = uVar7;
      }
    }
  }
  FUN_047e41f8(&stack0x00000030,*(undefined8 *)puVar1);
  return uVar9;
}


