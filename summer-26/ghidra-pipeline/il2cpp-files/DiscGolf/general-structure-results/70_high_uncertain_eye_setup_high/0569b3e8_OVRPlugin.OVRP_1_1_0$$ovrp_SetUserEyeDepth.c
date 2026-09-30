/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_SetUserEyeDepth
ENTRY_POINT: 0569b3e8
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

void OVRPlugin_OVRP_1_1_0__ovrp_SetUserEyeDepth(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long unaff_x19;
  undefined8 unaff_x22;
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
  
code_r0x0569b3e8:
  LeanTween__value(param_1,param_2);
  do {
    lVar3 = thunk_FUN_02dd3144(*unaff_x27);
    FUN_0569b7a0();
    lVar4 = thunk_FUN_02dd3144(*unaff_x27);
    FUN_0569b7a0();
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar5 = FUN_04e93570(*(long *)(unaff_x19 + 0x10),unaff_x22,
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
    while (uVar6 = FUN_05232904(&stack0x00000040,*unaff_x23), uVar2 = in_stack_00000058,
          (uVar6 & 1) != 0) {
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar5 = *(long *)(lVar3 + 0x10);
      if (lVar5 == 0) {
LAB_0569b650:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar7 = *(long *)(lVar5 + 0x10);
      lVar10 = *unaff_x26;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar7 == 0) goto LAB_0569b650;
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        puVar8 = (undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
        *puVar8 = in_stack_00000050;
        LeanTween__value(puVar8);
      }
      else {
        FUN_040101ec(lVar5,in_stack_00000050,
                     *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
      }
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar5 = *(long *)(lVar4 + 0x10);
      if (lVar5 == 0) {
LAB_0569b648:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar7 = *(long *)(lVar5 + 0x10);
      lVar10 = *unaff_x26;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar7 == 0) goto LAB_0569b648;
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        puVar8 = (undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
        *puVar8 = uVar2;
        LeanTween__value(puVar8,uVar2);
      }
      else {
        FUN_040101ec(lVar5,uVar2,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70))
        ;
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
    lVar7 = *(long *)(lVar5 + 0x10);
    lVar10 = *unaff_x28;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar7 == 0) goto LAB_0569b6f4;
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
      plVar9 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
      *plVar9 = lVar3;
      LeanTween__value(plVar9,lVar3);
    }
    else {
      FUN_040101ec(lVar5,lVar3,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
    }
    lVar3 = *(long *)(unaff_x19 + 0x28);
    if (lVar3 == 0) {
LAB_0569b6f0:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar5 = *(long *)(lVar3 + 0x10);
    lVar7 = *unaff_x28;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar5 == 0) goto LAB_0569b6f0;
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
      plVar9 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
      *plVar9 = lVar4;
      LeanTween__value(plVar9,lVar4);
    }
    else {
      FUN_040101ec(lVar3,lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
    }
    uVar6 = FUN_05232904(&stack0x00000070,*unaff_x25);
    unaff_x22 = in_stack_00000080;
    if ((uVar6 & 1) == 0) {
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
    lVar3 = *(long *)(unaff_x19 + 0x18);
    if (lVar3 == 0) {
LAB_0569b6ec:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar4 = *(long *)(lVar3 + 0x10);
    lVar5 = *unaff_x26;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar4 == 0) goto LAB_0569b6ec;
    uVar1 = *(uint *)(lVar3 + 0x18);
    in_stack_00000020 = unaff_x29;
    if (uVar1 < *(uint *)(lVar4 + 0x18)) break;
    FUN_040101ec(lVar3,in_stack_00000080,
                 *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
  } while( true );
  *(uint *)(lVar3 + 0x18) = uVar1 + 1;
  param_1 = (undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
  *param_1 = in_stack_00000080;
  param_2 = in_stack_00000080;
  goto code_r0x0569b3e8;
}


