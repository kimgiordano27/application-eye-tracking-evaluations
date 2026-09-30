/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetUserEyeDepth
ENTRY_POINT: 0569b384
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_20;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0569b578) */
/* WARNING: Removing unreachable block (ram,0x0569b700) */

void OVRPlugin_OVRP_1_1_0__ovrp_GetUserEyeDepth
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long unaff_x19;
  undefined8 *unaff_x23;
  undefined8 *unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  undefined8 unaff_x29;
  long lStack0000000000000008;
  undefined8 uStack0000000000000010;
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
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000080;
  
  lStack0000000000000008 = 0;
  uStack0000000000000010 = param_1;
  uStack0000000000000070 = param_2;
  uStack0000000000000080 = param_3;
  while( true ) {
    uVar3 = FUN_05232904(&stack0x00000070,*unaff_x25);
    uVar2 = uStack0000000000000080;
    lVar4 = lStack0000000000000008;
    if ((uVar3 & 1) == 0) {
      FUN_05232a24(uStack0000000000000010,
                   *(undefined8 *)
                    UnityEngine_XR_Interaction_Toolkit_Utilities_RegistrationList<IXRGroupMember>_TypeInfo
                  );
      if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96858(lVar4);
      }
      return;
    }
    lVar4 = *(long *)(unaff_x19 + 0x18);
    if (lVar4 == 0) break;
    lVar5 = *(long *)(lVar4 + 0x10);
    lVar9 = *unaff_x26;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar5 == 0) break;
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
      puVar6 = (undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
      *puVar6 = uStack0000000000000080;
      LeanTween__value(puVar6,uStack0000000000000080);
    }
    else {
      FUN_040101ec(lVar4,uStack0000000000000080,
                   *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
    lVar4 = thunk_FUN_02dd3144(*unaff_x27);
    FUN_0569b7a0();
    lVar5 = thunk_FUN_02dd3144(*unaff_x27);
    FUN_0569b7a0();
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar9 = FUN_04e93570(*(long *)(unaff_x19 + 0x10),uVar2,
                         *(undefined8 *)
                          Meta_XR_ImmersiveDebugger_Manager_ManagerUtils_RegisterMember<MethodInfo>_TypeInfo
                        );
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_04e93a24(&stack0x00000018,lVar9,
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
      lVar9 = *(long *)(lVar4 + 0x10);
      if (lVar9 == 0) {
LAB_0569b650:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar7 = *(long *)(lVar9 + 0x10);
      lVar10 = *unaff_x26;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (lVar7 == 0) goto LAB_0569b650;
      uVar1 = *(uint *)(lVar9 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
        puVar6 = (undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
        *puVar6 = in_stack_00000050;
        LeanTween__value(puVar6);
      }
      else {
        FUN_040101ec(lVar9,in_stack_00000050,
                     *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
      }
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar9 = *(long *)(lVar5 + 0x10);
      if (lVar9 == 0) {
LAB_0569b648:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar7 = *(long *)(lVar9 + 0x10);
      lVar10 = *unaff_x26;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (lVar7 == 0) goto LAB_0569b648;
      uVar1 = *(uint *)(lVar9 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
        puVar6 = (undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
        *puVar6 = uVar2;
        LeanTween__value(puVar6,uVar2);
      }
      else {
        FUN_040101ec(lVar9,uVar2,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70))
        ;
      }
    }
    FUN_05232a24(&stack0x00000040,
                 *(undefined8 *)System_Collections_Generic_Dictionary<string,_JToken>_TypeInfo);
    lVar9 = *(long *)(unaff_x19 + 0x20);
    if (lVar9 == 0) {
LAB_0569b6f4:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar7 = *(long *)(lVar9 + 0x10);
    lVar10 = *unaff_x28;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar7 == 0) goto LAB_0569b6f4;
    uVar1 = *(uint *)(lVar9 + 0x18);
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
      plVar8 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
      *plVar8 = lVar4;
      LeanTween__value(plVar8,lVar4);
    }
    else {
      FUN_040101ec(lVar9,lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
    }
    lVar4 = *(long *)(unaff_x19 + 0x28);
    if (lVar4 == 0) {
LAB_0569b6f0:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar9 = *(long *)(lVar4 + 0x10);
    lVar7 = *unaff_x28;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar9 == 0) goto LAB_0569b6f0;
    uVar1 = *(uint *)(lVar4 + 0x18);
    in_stack_00000020 = unaff_x29;
    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
      plVar8 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
      *plVar8 = lVar5;
      LeanTween__value(plVar8,lVar5);
    }
    else {
      FUN_040101ec(lVar4,lVar5,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


