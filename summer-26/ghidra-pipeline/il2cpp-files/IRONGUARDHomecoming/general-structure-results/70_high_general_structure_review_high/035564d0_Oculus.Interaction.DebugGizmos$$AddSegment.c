/*
FUNCTION_NAME: Oculus.Interaction.DebugGizmos$$AddSegment
ENTRY_POINT: 035564d0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_1;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Oculus_Interaction_DebugGizmos__AddSegment(void)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  int unaff_w19;
  ushort *unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x24;
  undefined8 uVar8;
  undefined8 uVar9;
  
                    /* catch() { ... } // from try @ 0355612c with catch @ 035564d0 */
  thunk_FUN_01efb3a4();
                    /* catch() { ... } // from try @ 035560d0 with catch @ 035564d4 */
                    /* catch() { ... } // from try @ 0355628c with catch @ 035564d8 */
                    /* catch() { ... } // from try @ 03555fb4 with catch @ 035564dc */
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
                    /* catch() { ... } // from try @ 03555fcc with catch @ 035564e0 */
                    /* catch() { ... } // from try @ 03556450 with catch @ 035564e4 */
  *(undefined1 *)(unaff_x24 + 0x1ed) = 1;
  puVar3 = Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
                    /* catch() { ... } // from try @ 03556230 with catch @ 035564e8 */
  if (unaff_w19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
                    /* catch() { ... } // from try @ 0355618c with catch @ 035564ec */
  uVar1 = *unaff_x20;
  if (0x52 < uVar1) {
                    /* catch() { ... } // from try @ 03556504 with catch @ 03556514 */
                    /* try { // try from 0355651c to 0365658f has its CatchHandler @ 035566f8 */
    switch(uVar1) {
    case 0x70:
    case 0x71:
    case 0x74:
      break;
    case 0x72:
    case 0x75:
switchD_03556534_caseD_72:
      lVar5 = *(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
      uVar8 = *unaff_x23;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar5 = *(long *)puVar3;
      }
      uVar9 = **(undefined8 **)(lVar5 + 0xb8);
      if (*(int *)(*(long *)
                    Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
                  + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)
                            Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
                          );
      }
      uVar6 = FUN_035820b0(uVar8,uVar9,0);
      if ((uVar6 & 1) == 0) {
                    /* catch() { ... } // from try @ 035565a8 with catch @ 035565bc */
                    /* try { // try from 035565c4 to 03656637 has its CatchHandler @ 035566f8 */
        if (*(int *)(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__ + 0xe0)
            == 0) {
          thunk_FUN_01ee6d7c();
        }
        iVar4 = FUN_0354dfec();
        if ((iVar4 == 2) && (*(int *)(*(long *)puVar3 + 0xe0) == 0)) {
          thunk_FUN_01ee6d7c();
        }
      }
      else {
                    /* catch() { ... } // from try @ 035562ec with catch @ 03556590
                       try { // try from 03556590 to 036565a7 has its CatchHandler @ 03555da4 */
        uVar9 = *unaff_x22;
        uVar8 = *unaff_x23;
        if (*(int *)(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__ + 0xe0)
            == 0) {
          thunk_FUN_01ee6d7c();
        }
                    /* try { // try from 035565a8 to 036565ab has its CatchHandler @ 035565bc */
        uVar8 = FUN_0354fd6c(uVar9,uVar8);
        *unaff_x22 = uVar8;
      }
    case 0x6f:
    case 0x73:
switchD_03556534_caseD_6f:
      if (*(int *)(*(long *)Method_ftLightmaps_OnSceneChangedPlay__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar5 = FUN_0350aed8(0);
      *unaff_x21 = lVar5;
      thunk_FUN_01f51358();
      break;
    default:
      if (uVar1 == 0x55) {
                    /* try { // try from 0355665c to 0365665f has its CatchHandler @ 03556674 */
        lVar5 = *(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
        uVar8 = *unaff_x23;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar5 = *(long *)puVar3;
        }
                    /* catch() { ... } // from try @ 0355665c with catch @ 03556674 */
                    /* try { // try from 0355667c to 036566e3 has its CatchHandler @ 035566f8 */
        uVar9 = **(undefined8 **)(lVar5 + 0xb8);
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
                    + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
                            );
        }
        uVar6 = FUN_035820b0(uVar8,uVar9,0);
        if ((uVar6 & 1) != 0) {
          thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Member_ReflectField__);
          uVar8 = thunk_FUN_01f117cc();
          uVar9 = thunk_FUN_01efb3a4(
                                    Method_UnityEngine_InputSystem_Utilities_Observable_Where<InputControl>__
                                    );
          FUN_03553fd0(uVar8,uVar9);
          uVar9 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxnmq_f32__);
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar8,uVar9);
        }
        if (*unaff_x21 != 0) {
          plVar7 = (long *)FUN_0350b30c(*unaff_x21,0);
          puVar2 = Method_ftLightmaps_OnSceneChangedPlay__;
          if (plVar7 == (long *)0x0) {
                    /* catch() { ... } // from try @ 0355651c with catch @ 035566f8
                       catch() { ... } // from try @ 035565c4 with catch @ 035566f8
                       catch() { ... } // from try @ 0355667c with catch @ 035566f8
                       catch() { ... } // from try @ 035566f0 with catch @ 035566f8 */
            *unaff_x21 = 0;
          }
          else {
                    /* try { // try from 035566e4 to 036566ef has its CatchHandler @ 03555da4 */
            if ((*plVar7 != *(long *)Method_ftLightmaps_OnSceneChangedPlay__) ||
               (*unaff_x21 = (long)plVar7, *plVar7 != *(long *)puVar2)) {
                    /* try { // try from 035566f0 to 036566f7 has its CatchHandler @ 035566f8 */
                    /* WARNING: Subroutine does not return */
              FUN_01f08cfc(plVar7);
            }
          }
          thunk_FUN_01f51358();
          if ((*unaff_x21 != 0) && (lVar5 = *(long *)(*unaff_x21 + 0x78), lVar5 != 0)) {
            uVar8 = thunk_FUN_01ecaf38(lVar5,0);
            uVar9 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxnm_f32__;
            if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0)
                == 0) {
              thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__)
              ;
            }
            uVar9 = FUN_03579868(uVar9,0);
            uVar6 = FUN_03583338(uVar8,uVar9,0);
            if ((uVar6 & 1) != 0) {
              lVar5 = *unaff_x21;
              if (*(int *)(*(long *)
                            Method_Unity_VisualScripting_FullSerializer_Internal_fsVersionManager_GetVersionedType__
                          + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar8 = FUN_0351c438(0);
              if (lVar5 == 0) goto LAB_035567d0;
              FUN_0350aadc(lVar5,uVar8,0);
            }
            if (*(int *)(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__ +
                        0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar8 = FUN_0354f608();
            *unaff_x22 = uVar8;
            break;
          }
        }
LAB_035567d0:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
    }
switchD_03556534_caseD_70:
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
                    /* catch() { ... } // from try @ 03555f90 with catch @ 03556638
                       try { // try from 03556638 to 0365665b has its CatchHandler @ 03555da4 */
                    /* catch() { ... } // from try @ 03555fa8 with catch @ 0355663c */
                    /* catch() { ... } // from try @ 0355644c with catch @ 03556640 */
                    /* catch() { ... } // from try @ 03555ee4 with catch @ 03556644 */
                    /* catch() { ... } // from try @ 03556444 with catch @ 03556648 */
                    /* catch() { ... } // from try @ 03555f40 with catch @ 0355664c */
    FUN_035561b4();
    return;
  }
                    /* try { // try from 03556504 to 03656507 has its CatchHandler @ 03556514 */
  if (uVar1 != 0x4f) {
    if (uVar1 != 0x52) goto switchD_03556534_caseD_70;
    goto switchD_03556534_caseD_72;
  }
  goto switchD_03556534_caseD_6f;
}


