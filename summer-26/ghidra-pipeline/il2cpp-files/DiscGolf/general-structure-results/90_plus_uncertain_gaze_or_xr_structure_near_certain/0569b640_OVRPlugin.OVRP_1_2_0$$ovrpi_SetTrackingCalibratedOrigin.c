/*
FUNCTION_NAME: OVRPlugin.OVRP_1_2_0$$ovrpi_SetTrackingCalibratedOrigin
ENTRY_POINT: 0569b640
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x0569b578) */
/* WARNING: Removing unreachable block (ram,0x0569b700) */

void OVRPlugin_OVRP_1_2_0__ovrpi_SetTrackingCalibratedOrigin
               (long param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  undefined8 *unaff_x23;
  undefined8 *unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  undefined8 unaff_x29;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000080;
  
code_r0x0569b640:
  FUN_040101ec(param_1,param_2,param_3);
  do {
    uVar3 = FUN_05232904(&stack0x00000070,*unaff_x25);
    uVar2 = in_stack_00000080;
    if ((uVar3 & 1) == 0) {
      FUN_05232a24(in_stack_00000010,
                   *(undefined8 *)
                    UnityEngine_XR_Interaction_Toolkit_Utilities_RegistrationList<IXRGroupMember>_TypeInfo
                  );
      if (in_stack_00000008 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96858(in_stack_00000008);
      }
      return;
    }
    lVar4 = *(long *)(unaff_x19 + 0x18);
    if (lVar4 == 0) {
LAB_0569b6ec:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar5 = *(long *)(lVar4 + 0x10);
    lVar8 = *unaff_x26;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar5 == 0) goto LAB_0569b6ec;
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
      puVar6 = (undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
      *puVar6 = in_stack_00000080;
      LeanTween__value(puVar6,in_stack_00000080);
    }
    else {
      FUN_040101ec(lVar4,in_stack_00000080,
                   *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
    }
    lVar4 = thunk_FUN_02dd3144(*unaff_x27);
    FUN_0569b7a0();
    param_2 = thunk_FUN_02dd3144(*unaff_x27);
    FUN_0569b7a0();
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar5 = FUN_04e93570(*(long *)(unaff_x19 + 0x10),uVar2,
                         *(undefined8 *)
                          Meta_XR_ImmersiveDebugger_Manager_ManagerUtils_RegisterMember<MethodInfo>_TypeInfo
                        );
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_04e93a24(&stack0x00000018,lVar5,
                 *(undefined8 *)System_Collections_Generic_Dictionary<string,_JSONNode>_TypeInfo);
    in_stack_00000040 = in_stack_00000018;
    in_stack_00000018 = 0;
    in_stack_00000048 = in_stack_00000020;
    in_stack_00000058 = in_stack_00000030;
    in_stack_00000050 = in_stack_00000028;
    in_stack_00000060 = in_stack_00000038;
    while (uVar3 = FUN_05232904(&stack0x00000040,*unaff_x23), uVar2 = in_stack_00000058,
          (uVar3 & 1) != 0) {
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar5 = *(long *)(lVar4 + 0x10);
      if (lVar5 == 0) {
LAB_0569b650:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar8 = *(long *)(lVar5 + 0x10);
      lVar9 = *unaff_x26;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar8 == 0) goto LAB_0569b650;
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        puVar6 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
        *puVar6 = in_stack_00000050;
        LeanTween__value(puVar6);
      }
      else {
        FUN_040101ec(lVar5,in_stack_00000050,
                     *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar5 = *(long *)(param_2 + 0x10);
      if (lVar5 == 0) {
LAB_0569b648:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar8 = *(long *)(lVar5 + 0x10);
      lVar9 = *unaff_x26;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar8 == 0) goto LAB_0569b648;
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        puVar6 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
        *puVar6 = uVar2;
        LeanTween__value(puVar6,uVar2);
      }
      else {
        FUN_040101ec(lVar5,uVar2,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
    }
    FUN_05232a24(&stack0x00000040,
                 *(undefined8 *)System_Collections_Generic_Dictionary<string,_JToken>_TypeInfo);
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if (lVar5 == 0) {
LAB_0569b6f4:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar8 = *(long *)(lVar5 + 0x10);
    lVar9 = *unaff_x28;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_0569b6f4;
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
      plVar7 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
      *plVar7 = lVar4;
      LeanTween__value(plVar7,lVar4);
    }
    else {
      FUN_040101ec(lVar5,lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
    param_1 = *(long *)(unaff_x19 + 0x28);
    if (param_1 == 0) {
LAB_0569b6f0:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar4 = *(long *)(param_1 + 0x10);
    lVar5 = *unaff_x28;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (lVar4 == 0) goto LAB_0569b6f0;
    uVar1 = *(uint *)(param_1 + 0x18);
    in_stack_00000020 = unaff_x29;
    if (*(uint *)(lVar4 + 0x18) <= uVar1) break;
    *(uint *)(param_1 + 0x18) = uVar1 + 1;
    plVar7 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
    *plVar7 = param_2;
    LeanTween__value(plVar7,param_2);
  } while( true );
  param_3 = *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70);
  goto code_r0x0569b640;
}


