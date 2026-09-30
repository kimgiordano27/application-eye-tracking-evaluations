/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.ComputeMeshSegmentationDelegate$$BeginInvoke
ENTRY_POINT: 014743fc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_14;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_ComputeMeshSegmentationDelegate__BeginInvoke
               (undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined4 *puVar6;
  long lVar7;
  long unaff_x19;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  long *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  long in_stack_00000008;
  
  uVar2 = FUN_026df230(param_2,*param_1,0);
                    /* try { // try from 01474408 to 01574417 has its CatchHandler @ 014749fc */
  if ((uVar2 & 1) != 0) {
    uVar8 = *(undefined8 *)(unaff_x19 + 0x50);
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
                    /* try { // try from 0147442c to 0157442f has its CatchHandler @ 014749f4 */
    uVar2 = FUN_0268b4e0(uVar8,0,0);
    if ((uVar2 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_014747f0;
      plVar4 = *(long **)(unaff_x19 + 0x40);
      FUN_010e5b20(*(long *)(unaff_x19 + 0x50),&stack0x00000008,*unaff_x24);
      if ((in_stack_00000008 == 0) ||
         (uVar8 = FUN_0268fd4c(in_stack_00000008,0), plVar4 == (long *)0x0)) goto LAB_014747f0;
      uVar2 = (**(code **)(*plVar4 + 0x268))(plVar4,uVar8,*(undefined8 *)(*plVar4 + 0x270));
      if ((uVar2 & 1) == 0) {
        return;
      }
      plVar4 = (long *)FUN_00da4fb8(*unaff_x23,1);
      if (((*(long *)(unaff_x19 + 0x50) == 0) ||
          (FUN_010e5b20(*(long *)(unaff_x19 + 0x50),&stack0x00000008,*unaff_x24),
          in_stack_00000008 == 0)) ||
         (lVar3 = FUN_0268fd4c(in_stack_00000008,0), plVar4 == (long *)0x0)) goto LAB_014747f0;
      if ((lVar3 != 0) &&
         (lVar7 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar4 + 0x40)), lVar7 == 0)) {
LAB_014747f8:
        uVar8 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar8,0);
      }
      if ((int)plVar4[3] == 0) {
LAB_014747f4:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar4[4] = lVar3;
      plVar5 = *(long **)(unaff_x19 + 0x40);
      if (plVar5 == (long *)0x0) goto LAB_014747f0;
      (**(code **)(*plVar5 + 0x228))(plVar5,0,plVar4,1,*(undefined8 *)(*plVar5 + 0x230));
      plVar4 = *(long **)(unaff_x19 + 0x40);
      if (plVar4 == (long *)0x0) goto LAB_014747f0;
      (**(code **)(*plVar4 + 0x248))(plVar4,0,*(undefined8 *)(*plVar4 + 0x250));
      uVar8 = *(undefined8 *)(unaff_x19 + 0x50);
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      puVar1 = Method_UnityEngine_Component_GetComponentInChildren<Grabbable>__;
      FUN_0268c114(uVar8,0);
      *(undefined8 *)(unaff_x19 + 0x50) = 0;
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar8 = *(undefined8 *)puVar1;
    }
    else {
      if (*(long *)(unaff_x19 + 0x38) == 0) {
LAB_014747f0:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                (*(long *)(unaff_x19 + 0x38),0);
                    /* try { // try from 0147444c to 015744a3 has its CatchHandler @ 01474a08 */
      uVar8 = FUN_01474804();
      uVar9 = *(undefined8 *)(unaff_x19 + 0x28);
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_00d32864(*unaff_x27);
      }
      lVar3 = FUN_0112fd4c(uVar9,*(undefined8 *)
                                  Method_System_Collections_Generic_List<TMP_Character>_Clear__);
      *(long *)(unaff_x19 + 0x50) = lVar3;
      if ((lVar3 == 0) ||
         (lVar3 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                            (lVar3,0), lVar3 == 0)) goto LAB_014747f0;
      FUN_0269fea8(lVar3,uVar8,0);
      if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_014747f0;
      lVar3 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                        (*(long *)(unaff_x19 + 0x50),0);
      if (*(char *)(unaff_x28 + 0xd76) == '\0') {
        thunk_FUN_00d48444(
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          );
                    /* try { // try from 014744d4 to 015744ff has its CatchHandler @ 01474a00 */
        *(undefined1 *)(unaff_x28 + 0xd76) = 1;
      }
      if (lVar3 == 0) goto LAB_014747f0;
      puVar6 = *(undefined4 **)(*unaff_x25 + 0xb8);
      FUN_0269f750(*puVar6,puVar6[1],puVar6[2],lVar3,0);
      if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_014747f0;
      lVar3 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                        (*(long *)(unaff_x19 + 0x50),0);
      if (*(char *)(unaff_x29 + 0xf00) == '\0') {
        thunk_FUN_00d48444(Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__
                          );
        *(undefined1 *)(unaff_x29 + 0xf00) = 1;
      }
      if (lVar3 == 0) goto LAB_014747f0;
                    /* try { // try from 01474534 to 01574543 has its CatchHandler @ 014749dc */
      puVar6 = *(undefined4 **)
                (*(long *)Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__
                + 0xb8);
                    /* try { // try from 01474550 to 01574553 has its CatchHandler @ 014749ec */
      FUN_0269f994(*puVar6,puVar6[1],puVar6[2],puVar6[3],lVar3,0);
      if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_014747f0;
      lVar3 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                        (*(long *)(unaff_x19 + 0x50),0);
      if (*(char *)(unaff_x26 + 0xe1c) == '\0') {
        thunk_FUN_00d48444(
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          );
        *(undefined1 *)(unaff_x26 + 0xe1c) = 1;
      }
      if (lVar3 == 0) goto LAB_014747f0;
      lVar7 = *(long *)(*unaff_x25 + 0xb8);
      FUN_0269fd98(*(undefined4 *)(lVar7 + 0xc),*(undefined4 *)(lVar7 + 0x10),
                   *(undefined4 *)(lVar7 + 0x14),lVar3,0);
      if (((*(long *)(unaff_x19 + 0x50) == 0) ||
          (FUN_010e5b20(*(long *)(unaff_x19 + 0x50),&stack0x00000008,*unaff_x24),
          lVar3 = in_stack_00000008, in_stack_00000008 == 0)) ||
         (lVar7 = FUN_0268fd4c(in_stack_00000008,0), lVar7 == 0)) goto LAB_014747f0;
      FUN_0268b75c(lVar7,*(undefined8 *)Method_UnityEngine_UI_LayoutGroup_SetProperty<int>__,0);
      plVar4 = (long *)FUN_00da4fb8(*unaff_x23,1);
      lVar3 = FUN_0268fd4c(lVar3,0);
      if (plVar4 == (long *)0x0) goto LAB_014747f0;
      if ((lVar3 != 0) &&
         (lVar7 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar4 + 0x40)), lVar7 == 0))
      goto LAB_014747f8;
      if ((int)plVar4[3] == 0) goto LAB_014747f4;
      plVar4[4] = lVar3;
      plVar5 = *(long **)(unaff_x19 + 0x40);
      if (plVar5 == (long *)0x0) goto LAB_014747f0;
      (**(code **)(*plVar5 + 0x228))(plVar5,plVar4,0,1,*(undefined8 *)(*plVar5 + 0x230));
      puVar1 = Method_System_Array_Resize<Transform>__;
      plVar4 = *(long **)(unaff_x19 + 0x40);
      if (plVar4 == (long *)0x0) goto LAB_014747f0;
      (**(code **)(*plVar4 + 0x248))(plVar4,0,*(undefined8 *)(*plVar4 + 0x250));
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar8 = *(undefined8 *)puVar1;
    }
    FUN_02660dac(uVar8,0);
  }
  return;
}


