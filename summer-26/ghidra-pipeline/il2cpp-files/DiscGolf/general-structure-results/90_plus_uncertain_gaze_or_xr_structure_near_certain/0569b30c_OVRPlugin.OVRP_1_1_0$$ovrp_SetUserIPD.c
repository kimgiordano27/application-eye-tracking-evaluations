/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_SetUserIPD
ENTRY_POINT: 0569b30c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 114
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0569b578) */
/* WARNING: Removing unreachable block (ram,0x0569b700) */
/* WARNING: Removing unreachable block (ram,0x0569b70c) */

void OVRPlugin_OVRP_1_1_0__ovrp_SetUserIPD
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  undefined4 in_w9;
  long lVar14;
  long lVar15;
  long unaff_x19;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000070;
  undefined8 *in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = in_w9;
  if (0 < (int)param_4) {
    FUN_0550afb4(*(undefined8 *)(param_1 + 0x10),0,param_4,0);
  }
  puVar6 = Oculus_Platform_Request<AchievementDefinitionList>_TypeInfo;
  puVar5 = UnityEngine_Rendering_RenderGraphModule_RenderGraphResourcePool<GraphicsBuffer>_TypeInfo;
  puVar4 = UnityEngine_XR_Interaction_Toolkit_Utilities_RegistrationList<IXRInteractable>_TypeInfo;
  puVar3 = System_Collections_Generic_Dictionary<string,_Lobby>_TypeInfo;
  puVar2 = PTR_DAT_069fcea0;
  if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  FUN_04e93a24(&stack0x00000018,*(long *)(unaff_x19 + 0x10),
               *(undefined8 *)
                Meta_XR_ImmersiveDebugger_Manager_ManagerUtils_RegisterMember<MemberInfo>_TypeInfo);
  in_stack_00000090 = in_stack_00000038;
  in_stack_00000078 = in_stack_00000020;
  in_stack_00000070 = in_stack_00000018;
  in_stack_00000088 = in_stack_00000030;
  in_stack_00000080 = in_stack_00000028;
  while( true ) {
    uVar8 = FUN_05232904(&stack0x00000070,*(undefined8 *)puVar4);
    uVar7 = in_stack_00000080;
    if ((uVar8 & 1) == 0) {
      FUN_05232a24(&stack0x00000070,
                   *(undefined8 *)
                    UnityEngine_XR_Interaction_Toolkit_Utilities_RegistrationList<IXRGroupMember>_TypeInfo
                  );
      return;
    }
    lVar9 = *(long *)(unaff_x19 + 0x18);
    if (lVar9 == 0) break;
    lVar10 = *(long *)(lVar9 + 0x10);
    lVar14 = *(long *)puVar2;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar10 == 0) break;
    uVar1 = *(uint *)(lVar9 + 0x18);
    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
      puVar11 = (undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
      *puVar11 = in_stack_00000080;
      LeanTween__value(puVar11,in_stack_00000080);
    }
    else {
      FUN_040101ec(lVar9,in_stack_00000080,
                   *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
    }
    lVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar6);
    FUN_0569b7a0();
    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar6);
    FUN_0569b7a0();
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar14 = FUN_04e93570(*(long *)(unaff_x19 + 0x10),uVar7,
                          *(undefined8 *)
                           Meta_XR_ImmersiveDebugger_Manager_ManagerUtils_RegisterMember<MethodInfo>_TypeInfo
                         );
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_04e93a24(&stack0x00000018,lVar14,
                 *(undefined8 *)System_Collections_Generic_Dictionary<string,_JSONNode>_TypeInfo);
    in_stack_00000040 = in_stack_00000018;
    in_stack_00000018 = 0;
    in_stack_00000048 = in_stack_00000020;
    in_stack_00000058 = in_stack_00000030;
    in_stack_00000050 = in_stack_00000028;
    in_stack_00000060 = in_stack_00000038;
    in_stack_00000020 = &stack0x00000040;
    while (uVar8 = FUN_05232904(&stack0x00000040,*(undefined8 *)puVar3), uVar7 = in_stack_00000058,
          (uVar8 & 1) != 0) {
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar14 = *(long *)(lVar9 + 0x10);
      if (lVar14 == 0) {
LAB_0569b650:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar12 = *(long *)(lVar14 + 0x10);
      lVar15 = *(long *)puVar2;
      *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
      if (lVar12 == 0) goto LAB_0569b650;
      uVar1 = *(uint *)(lVar14 + 0x18);
      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(lVar14 + 0x18) = uVar1 + 1;
        puVar11 = (undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
        *puVar11 = in_stack_00000050;
        LeanTween__value(puVar11);
      }
      else {
        FUN_040101ec(lVar14,in_stack_00000050,
                     *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
      }
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar14 = *(long *)(lVar10 + 0x10);
      if (lVar14 == 0) {
LAB_0569b648:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar12 = *(long *)(lVar14 + 0x10);
      lVar15 = *(long *)puVar2;
      *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
      if (lVar12 == 0) goto LAB_0569b648;
      uVar1 = *(uint *)(lVar14 + 0x18);
      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(lVar14 + 0x18) = uVar1 + 1;
        puVar11 = (undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
        *puVar11 = uVar7;
        LeanTween__value(puVar11,uVar7);
      }
      else {
        FUN_040101ec(lVar14,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70)
                    );
      }
    }
    FUN_05232a24(&stack0x00000040,
                 *(undefined8 *)System_Collections_Generic_Dictionary<string,_JToken>_TypeInfo);
    lVar14 = *(long *)(unaff_x19 + 0x20);
    if (lVar14 == 0) {
LAB_0569b6f4:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar12 = *(long *)(lVar14 + 0x10);
    lVar15 = *(long *)puVar5;
    *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
    if (lVar12 == 0) goto LAB_0569b6f4;
    uVar1 = *(uint *)(lVar14 + 0x18);
    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
      plVar13 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
      *plVar13 = lVar9;
      LeanTween__value(plVar13,lVar9);
    }
    else {
      FUN_040101ec(lVar14,lVar9,*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
    }
    lVar9 = *(long *)(unaff_x19 + 0x28);
    if (lVar9 == 0) {
LAB_0569b6f0:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar14 = *(long *)(lVar9 + 0x10);
    lVar12 = *(long *)puVar5;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar14 == 0) goto LAB_0569b6f0;
    uVar1 = *(uint *)(lVar9 + 0x18);
    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
      plVar13 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
      *plVar13 = lVar10;
      LeanTween__value(plVar13,lVar10);
    }
    else {
      FUN_040101ec(lVar9,lVar10,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


