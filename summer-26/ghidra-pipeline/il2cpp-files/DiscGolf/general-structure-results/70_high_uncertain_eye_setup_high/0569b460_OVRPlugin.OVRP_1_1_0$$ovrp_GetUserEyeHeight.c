/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetUserEyeHeight
ENTRY_POINT: 0569b460
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

void OVRPlugin_OVRP_1_1_0__ovrp_GetUserEyeHeight(undefined8 param_1,undefined1 param_2 [16])

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x23;
  undefined8 *unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 uStack0000000000000018;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  undefined8 uStack0000000000000060;
  undefined8 in_stack_00000080;
  
  uStack0000000000000058 = param_2._8_8_;
  uStack0000000000000050 = param_2._0_8_;
  uStack0000000000000040 = param_1;
  do {
    uStack0000000000000018 = 0;
    uStack0000000000000060 = in_stack_00000038;
    while (uVar3 = FUN_05232904(&stack0x00000040,*unaff_x23), uVar2 = uStack0000000000000058,
          (uVar3 & 1) != 0) {
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar4 = *(long *)(unaff_x21 + 0x10);
      if (lVar4 == 0) {
LAB_0569b650:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar5 = *(long *)(lVar4 + 0x10);
      lVar8 = *unaff_x26;
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_0569b650;
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
        puVar6 = (undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
        *puVar6 = uStack0000000000000050;
        LeanTween__value(puVar6);
      }
      else {
        FUN_040101ec(lVar4,uStack0000000000000050,
                     *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      }
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar4 = *(long *)(unaff_x20 + 0x10);
      if (lVar4 == 0) {
LAB_0569b648:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar5 = *(long *)(lVar4 + 0x10);
      lVar8 = *unaff_x26;
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_0569b648;
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
        puVar6 = (undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
        *puVar6 = uVar2;
        LeanTween__value(puVar6,uVar2);
      }
      else {
        FUN_040101ec(lVar4,uVar2,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      }
    }
    FUN_05232a24(&stack0x00000040,
                 *(undefined8 *)System_Collections_Generic_Dictionary<string,_JToken>_TypeInfo);
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if (lVar4 == 0) {
LAB_0569b6f4:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar5 = *(long *)(lVar4 + 0x10);
    lVar8 = *unaff_x28;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar5 == 0) goto LAB_0569b6f4;
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
      plVar7 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
      *plVar7 = unaff_x21;
      LeanTween__value(plVar7,unaff_x21);
    }
    else {
      FUN_040101ec(lVar4,unaff_x21,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70)
                  );
    }
    lVar4 = *(long *)(unaff_x19 + 0x28);
    if (lVar4 == 0) {
LAB_0569b6f0:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar5 = *(long *)(lVar4 + 0x10);
    lVar8 = *unaff_x28;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar5 == 0) goto LAB_0569b6f0;
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
      plVar7 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
      *plVar7 = unaff_x20;
      LeanTween__value(plVar7,unaff_x20);
    }
    else {
      FUN_040101ec(lVar4,unaff_x20,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70)
                  );
    }
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
    unaff_x21 = thunk_FUN_02dd3144(*unaff_x27);
    FUN_0569b7a0();
    unaff_x20 = thunk_FUN_02dd3144(*unaff_x27);
    FUN_0569b7a0();
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar4 = FUN_04e93570(*(long *)(unaff_x19 + 0x10),uVar2,
                         *(undefined8 *)
                          Meta_XR_ImmersiveDebugger_Manager_ManagerUtils_RegisterMember<MethodInfo>_TypeInfo
                        );
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_04e93a24(&stack0x00000018,lVar4,
                 *(undefined8 *)System_Collections_Generic_Dictionary<string,_JSONNode>_TypeInfo);
    uStack0000000000000040 = uStack0000000000000018;
    uStack0000000000000050 = in_stack_00000028;
    uStack0000000000000058 = in_stack_00000030;
  } while( true );
}


