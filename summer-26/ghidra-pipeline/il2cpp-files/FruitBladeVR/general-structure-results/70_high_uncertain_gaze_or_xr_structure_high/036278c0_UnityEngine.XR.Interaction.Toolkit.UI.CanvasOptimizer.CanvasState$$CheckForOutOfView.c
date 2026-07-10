/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.UI.CanvasOptimizer.CanvasState$$CheckForOutOfView
ENTRY_POINT: 036278c0
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 76
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior;structure_combo;keyword_support
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_9;paired_field_refs_with_structure_only;repeated_pose_getters;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;eye_or_gaze_keyword_boost_only;negative_framework_namespace_without_eye_use_flow
*/


void UnityEngine_XR_Interaction_Toolkit_UI_CanvasOptimizer_CanvasState__CheckForOutOfView
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,long param_5)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  
                    /* try { // try from 036278d4 to 037278e3 has its CatchHandler @ 03627cc4 */
  uVar15 = param_3;
  if ((DAT_03ef6a45 & 1) == 0) {
    FUN_01c5c92c(PTR_UnityEngine_Object_TypeInfo_03cb5a80);
    DAT_03ef6a45 = 1;
  }
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
                    /* try { // try from 03627920 to 03727933 has its CatchHandler @ 03627cbc */
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
                    /* try { // try from 0362794c to 0372795b has its CatchHandler @ 03627c88 */
  if (*(char *)(param_4 + 0x31) == '\0') {
    if (*(long *)(param_4 + 0x38) == 0) goto LAB_03627be8;
                    /* try { // try from 0362795c to 037279bf has its CatchHandler @ 0362723c */
    iVar3 = UnityEngine_Canvas__get_renderMode(*(long *)(param_4 + 0x38),0);
    if (iVar3 == 2) {
      fVar23 = *(float *)(param_4 + 0x50);
      fVar7 = (float)UnityEngine_Time__get_deltaTime(0);
      fVar23 = fVar23 + fVar7;
      uVar16 = 0x3f000000;
      *(float *)(param_4 + 0x50) = fVar23;
      if (0.5 <= fVar23) {
        *(undefined4 *)(param_4 + 0x50) = 0;
        if ((*(long *)(param_4 + 0x38) != 0) &&
           (lVar4 = UnityEngine_Component__get_transform(*(long *)(param_4 + 0x38),0), param_5 != 0)
           ) {
          uVar8 = UnityEngine_Transform__get_position(param_5,0);
          uVar14 = uVar16;
          uVar20 = uVar15;
                    /* try { // try from 036279c0 to 037279c3 has its CatchHandler @ 03627d48 */
          uVar9 = UnityEngine_Transform__get_forward(param_5,0);
          if (lVar4 != 0) {
            uVar17 = uVar14;
            uVar21 = uVar20;
                    /* try { // try from 036279d8 to 037279db has its CatchHandler @ 03627d44 */
            uVar10 = UnityEngine_Transform__get_position(lVar4,0);
            uVar18 = uVar17;
            uVar22 = uVar21;
                    /* try { // try from 036279f0 to 037279f3 has its CatchHandler @ 03627d38 */
            uVar11 = UnityEngine_Transform__get_forward(lVar4,0);
            uVar19 = uVar16;
            uVar13 = uVar15;
                    /* try { // try from 03627a08 to 03727a0b has its CatchHandler @ 03627d34 */
            uVar12 = Unity_Mathematics_float3__op_Implicit(uVar8,0);
            local_70 = CONCAT44(uVar19,uVar12);
            uVar19 = uVar14;
            uVar12 = uVar20;
            local_68 = uVar13;
                    /* try { // try from 03627a20 to 03727a23 has its CatchHandler @ 03627d30 */
            uVar13 = Unity_Mathematics_float3__op_Implicit(uVar9,0);
            local_80 = CONCAT44(uVar19,uVar13);
            uVar19 = uVar17;
            uVar13 = uVar21;
            local_78 = uVar12;
                    /* try { // try from 03627a38 to 03727a3b has its CatchHandler @ 03627d14 */
            uVar12 = Unity_Mathematics_float3__op_Implicit(uVar10,0);
            local_90 = CONCAT44(uVar19,uVar12);
                    /* try { // try from 03627a50 to 03727a53 has its CatchHandler @ 03627d10 */
            local_88 = uVar13;
            uVar5 = UnityEngine_XR_Interaction_Toolkit_Utilities_BurstGazeUtility__IsOutsideGaze
                              (param_1,&local_70,&local_80,&local_90);
                    /* try { // try from 03627a68 to 03727a6b has its CatchHandler @ 03627d0c */
            if ((uVar5 & 1) == 0) {
                    /* try { // try from 03627a80 to 03727a83 has its CatchHandler @ 03627d04 */
              uVar9 = Unity_Mathematics_float3__op_Implicit(uVar9,0);
              local_a0 = CONCAT44(uVar14,uVar9);
              local_98 = uVar20;
                    /* try { // try from 03627a98 to 03727a9b has its CatchHandler @ 03627cf0 */
              uVar14 = Unity_Mathematics_float3__op_Implicit(uVar11,0);
              local_b0 = CONCAT44(uVar18,uVar14);
              local_a8 = uVar22;
                    /* try { // try from 03627ab0 to 03727ab3 has its CatchHandler @ 03627cec */
              uVar5 = UnityEngine_XR_Interaction_Toolkit_Utilities_BurstGazeUtility__IsAlignedToGazeForward
                                (param_2,&local_a0,&local_b0);
              if ((uVar5 & 1) == 0) {
                    /* try { // try from 03627ac8 to 03727acb has its CatchHandler @ 03627ce4 */
                uVar14 = Unity_Mathematics_float3__op_Implicit(uVar8,0);
                local_c0 = CONCAT44(uVar16,uVar14);
                local_b8 = uVar15;
                    /* try { // try from 03627ae0 to 03727ae3 has its CatchHandler @ 03627ce0 */
                uVar15 = Unity_Mathematics_float3__op_Implicit(uVar10,0);
                local_d0 = CONCAT44(uVar17,uVar15);
                    /* try { // try from 03627af8 to 03727afb has its CatchHandler @ 03627cdc */
                local_c8 = uVar21;
                bVar2 = UnityEngine_XR_Interaction_Toolkit_Utilities_BurstGazeUtility__IsOutsideDistanceRange
                                  (param_3,&local_c0,&local_d0);
              }
              else {
                bVar2 = 0;
              }
            }
            else {
              bVar2 = 1;
            }
            puVar1 = PTR_UnityEngine_Object_TypeInfo_03cb5a80;
                    /* try { // try from 03627b10 to 03727b13 has its CatchHandler @ 03627cd8 */
            if (*(byte *)(param_4 + 0x32) == (bVar2 & 1)) {
              return;
            }
            uVar6 = *(undefined8 *)(param_4 + 0x40);
            *(byte *)(param_4 + 0x32) = bVar2 & 1;
                    /* try { // try from 03627b28 to 03727b2b has its CatchHandler @ 03627cd0 */
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_01cb0d4c();
            }
                    /* try { // try from 03627b40 to 03727b43 has its CatchHandler @ 03627ccc */
                    /* try { // try from 03627b44 to 03727b6f has its CatchHandler @ 0362723c */
            uVar5 = UnityEngine_Object__op_Inequality(uVar6,0,0);
            if ((uVar5 & 1) != 0) {
              if (*(long *)(param_4 + 0x40) == 0) goto LAB_03627be8;
              UnityEngine_Behaviour__set_enabled
                        (*(long *)(param_4 + 0x40),*(char *)(param_4 + 0x32) == '\0',0);
            }
            uVar6 = *(undefined8 *)(param_4 + 0x48);
                    /* try { // try from 03627b70 to 03727b73 has its CatchHandler @ 03627cb4 */
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_01cb0d4c();
            }
                    /* try { // try from 03627b88 to 03727b8b has its CatchHandler @ 03627cb0 */
            uVar5 = UnityEngine_Object__op_Inequality(uVar6,0,0);
            if ((uVar5 & 1) == 0) {
              return;
            }
            if (*(long *)(param_4 + 0x48) != 0) {
                    /* try { // try from 03627ba0 to 03727ba3 has its CatchHandler @ 03627cac */
                    /* try { // try from 03627bb8 to 03727bbb has its CatchHandler @ 03627ca8 */
              UnityEngine_Behaviour__set_enabled
                        (*(long *)(param_4 + 0x48),*(char *)(param_4 + 0x32) == '\0',0);
              return;
            }
          }
        }
LAB_03627be8:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03627be8 to 03727beb has its CatchHandler @ 03627ca4 */
        FUN_01c5cbd4();
      }
    }
  }
                    /* try { // try from 03627bd0 to 03727bd3 has its CatchHandler @ 03627cc4 */
  return;
}


