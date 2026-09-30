/*
FUNCTION_NAME: OVRManager$$remove_SpatialAnchorCreateComplete
ENTRY_POINT: 03664c74
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_SpatialAnchorCreateComplete
               (ulong param_1,undefined8 param_2,long param_3,ulong param_4)

{
  char cVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong unaff_x20;
  undefined8 uVar6;
  byte unaff_w21;
  long lVar7;
  long unaff_x23;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_01efb3a4(Method_Oculus_Interaction_ListLayout_<>c_<_ctor>b__11_1__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_LessThanOrEqualHandler_<>c_<_ctor>b__0_87__);
    *(undefined1 *)(unaff_x23 + 0xd14) = 1;
  }
  puVar2 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
  if ((param_3 == 0) || (*(long *)(param_3 + 0x10) == 0)) {
LAB_03664e08:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  cVar1 = *(char *)(*(long *)(param_3 + 0x10) + 0x145);
  if ((param_4 & 1) == 0) {
    if (((unaff_x20 & 1) != 0) && (*(char *)(param_3 + 0x18) == '\0')) {
                    /* try { // try from 03664d4c to 03764d77 has its CatchHandler @ 03664d28 */
      uVar5 = *(undefined8 *)(param_3 + 0x38);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03664d40 with catch @ 03664d60
                        */
      if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ + 0xe0)
          == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar4 = FUN_04073094(uVar5,0,0);
      uVar5 = 0;
      if ((uVar4 & 1) != 0) {
        if (*(long *)(param_3 + 0x10) == 0) goto LAB_03664e08;
        uVar3 = *(undefined8 *)(param_3 + 0x38);
        uVar5 = FUN_04289a50(*(long *)(param_3 + 0x10),0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar2);
        }
        uVar4 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                          (uVar3,uVar5,0);
        uVar5 = 0;
        if ((uVar4 & 1) != 0) {
          uVar5 = *(undefined8 *)(param_3 + 0x38);
        }
      }
      lVar7 = *(long *)(*(long *)(*(long *)
                                   Method_Unity_VisualScripting_LessThanOrEqualHandler_<>c_<_ctor>b__0_87__
                                 + 0xb8) + 8);
      if (lVar7 != 0) {
        uVar6 = *(undefined8 *)(param_3 + 0x20);
        uVar3 = thunk_FUN_01f117cc(*(undefined8 *)
                                    Method_Oculus_Interaction_ListLayout_<>c_<_ctor>b__11_1__);
        goto LAB_03664d0c;
      }
    }
  }
  else {
    lVar7 = **(long **)(*(long *)
                         Method_Unity_VisualScripting_LessThanOrEqualHandler_<>c_<_ctor>b__0_87__ +
                       0xb8);
    if (lVar7 != 0) {
      uVar6 = *(undefined8 *)(param_3 + 0x20);
      uVar5 = *(undefined8 *)(param_3 + 0x38);
      uVar3 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_Oculus_Interaction_ListLayout_<>c_<_ctor>b__11_1__);
LAB_03664d0c:
      FUN_03662298(uVar3,uVar6,uVar5,cVar1 != '\0' | unaff_w21 & 1);
                    /* catch() { ... } // from try @ 03664d4c with catch @ 03664d28
                       catch() { ... } // from try @ 03664d90 with catch @ 03664d28
                       catch() { ... } // from try @ 03664de8 with catch @ 03664d28
                       catch() { ... } // from try @ 03664e78 with catch @ 03664d28 */
                    /* WARNING: Could not recover jumptable at 0x03664d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),uVar3,*(undefined8 *)(lVar7 + 0x28))
      ;
      return;
    }
  }
                    /* try { // try from 03664d40 to 03764d4b has its CatchHandler @ 03664d60 */
  return;
}


