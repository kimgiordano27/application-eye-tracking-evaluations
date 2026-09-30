/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_SetClientVersion
ENTRY_POINT: 01f9370c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_SetClientVersion(undefined8 param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 in_w8;
  long *unaff_x22;
  uint unaff_w23;
  undefined8 *unaff_x26;
  long *unaff_x28;
  long in_stack_00000040;
  
  *(undefined4 *)(param_2 + 0x20) = in_w8;
  lVar2 = thunk_FUN_01f894b8(param_1,param_2,0);
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01f936a0 with catch @ 01f93718
                        */
  if (unaff_x22 == (long *)0x0) goto LAB_01f92644;
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01f936b4 with catch @ 01f9371c
                        */
                    /* try { // try from 01f93734 to 02093737 has its CatchHandler @ 01f93744 */
  if ((lVar2 != 0) &&
     (lVar3 = thunk_FUN_0124baac(lVar2,*(undefined8 *)(*unaff_x22 + 0x40)), lVar3 == 0)) {
    uVar5 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
    FUN_01230b78(uVar5,0);
  }
  if (unaff_w23 < *(uint *)(unaff_x22 + 3)) {
                    /* catch() { ... } // from try @ 01f93734 with catch @ 01f93744 */
    plVar4 = unaff_x22 + (long)(int)unaff_w23 + 4;
    *plVar4 = lVar2;
                    /* try { // try from 01f93750 to 0209375b has its CatchHandler @ 01f93770 */
    thunk_FUN_01286abc(plVar4,lVar2);
                    /* try { // try from 01f9375c to 02093767 has its CatchHandler @ 01f93640 */
    if (unaff_w23 < *(uint *)(unaff_x22 + 3)) {
                    /* try { // try from 01f93768 to 0209376f has its CatchHandler @ 01f93770 */
      lVar2 = *unaff_x28;
      if (lVar2 == 0) {
LAB_01f92644:
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01f93750 with catch @ 01f93770
                       catch(type#2 @ 00000000) { ... } // from try @ 01f93768 with catch @ 01f93770
                        */
                    /* try { // try from 01f93774 to 0209387b has its CatchHandler @ 01f93774
                       catch() { ... } // from try @ 01f93774 with catch @ 01f93774
                       catch() { ... } // from try @ 01f93900 with catch @ 01f93774
                       catch() { ... } // from try @ 01f93980 with catch @ 01f93774
                       catch() { ... } // from try @ 01f93a3c with catch @ 01f93774
                       catch() { ... } // from try @ 01f93a90 with catch @ 01f93774 */
      if (unaff_w23 < *(uint *)(lVar2 + 0x18)) {
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) goto LAB_01f92644;
        bVar1 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
        if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_027b3f80
           )) {
                    /* WARNING: Subroutine does not return */
          FUN_01230f60();
        }
        FUN_01f89750(plVar4,*(undefined8 *)(lVar2 + (long)(int)unaff_w23 * 8 + 0x20),0,0);
        *unaff_x28 = (long)unaff_x22;
        thunk_FUN_01286abc();
        if (*(int *)(in_stack_00000040 + 0x18) != 0) {
          return *unaff_x26;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


