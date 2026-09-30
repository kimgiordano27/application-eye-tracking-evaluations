/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnInstanceDestroy
ENTRY_POINT: 01f93a24
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_UnityOpenXR__OnInstanceDestroy(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x28;
  long in_stack_00000038;
  long in_stack_00000040;
  
code_r0x01f93a24:
  lVar2 = thunk_FUN_0124baac(param_2,*(undefined8 *)(param_1 + 0x40));
                    /* try { // try from 01f93a2c to 02093a37 has its CatchHandler @ 01f93a50 */
  plVar5 = unaff_x24;
  param_2 = unaff_x25;
  if (lVar2 == 0) {
LAB_01f941d8:
    uVar7 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
    FUN_01230b78(uVar7,0);
  }
LAB_01f93a30:
                    /* try { // try from 01f93a38 to 02093a3b has its CatchHandler @ 01f93a40 */
  if ((uint)unaff_x19 < *(uint *)(unaff_x22 + 3)) {
    unaff_x24 = plVar5 + 1;
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01f9397c with catch @ 01f93a3c
                       try { // try from 01f93a3c to 02093a67 has its CatchHandler @ 01f93774 */
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01f93a38 with catch @ 01f93a40
                        */
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01f93954 with catch @ 01f93a44
                        */
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01f9387c with catch @ 01f93a48
                        */
    *plVar5 = param_2;
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01f9389c with catch @ 01f93a4c
                       catch(type#1 @ 026574d8) { ... } // from try @ 01f93a1c with catch @ 01f93a4c
                        */
    thunk_FUN_01286abc(plVar5,param_2);
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01f938b0 with catch @ 01f93a50
                       catch(type#1 @ 026574d8) { ... } // from try @ 01f93938 with catch @ 01f93a50
                       catch(type#1 @ 026574d8) { ... } // from try @ 01f93a2c with catch @ 01f93a50
                        */
    unaff_x19 = unaff_x19 + 1;
    uVar6 = (uint)unaff_x19;
    if ((int)uVar6 < (int)(*(uint *)(unaff_x23 + 0x18) - 1)) {
      if (*(uint *)(unaff_x23 + 0x18) <= uVar6) goto LAB_01f9340c;
      plVar5 = *(long **)(unaff_x20 + unaff_x19 * 8);
      if ((plVar5 == (long *)0x0) ||
         (param_2 = (**(code **)(*plVar5 + 0x1f8))(plVar5,*(undefined8 *)(*plVar5 + 0x200)),
         unaff_x22 == (long *)0x0)) goto LAB_01f92644;
      plVar5 = unaff_x24;
      if (param_2 != 0) goto LAB_01f93a1c;
      goto LAB_01f93a30;
    }
                    /* try { // try from 01f93a68 to 02093a6b has its CatchHandler @ 01f93a78 */
    if (in_stack_00000038 == 0) {
LAB_01f92644:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    if (*(int *)(in_stack_00000038 + 0x18) == 0) goto LAB_01f9340c;
                    /* catch() { ... } // from try @ 01f93a68 with catch @ 01f93a78 */
    uVar7 = *(undefined8 *)(in_stack_00000038 + 0x20);
                    /* try { // try from 01f93a84 to 02093a8f has its CatchHandler @ 01f93aa4 */
    if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
                    /* try { // try from 01f93a90 to 02093a9b has its CatchHandler @ 01f93774 */
      thunk_FUN_01220628();
    }
                    /* try { // try from 01f93a9c to 02093aa3 has its CatchHandler @ 01f93aa4 */
    uVar3 = FUN_01f801dc(uVar7,0,0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01f93a84 with catch @ 01f93aa4
                       catch(type#2 @ 00000000) { ... } // from try @ 01f93a9c with catch @ 01f93aa4
                        */
    if ((uVar3 & 1) == 0) {
      if (*(uint *)(unaff_x23 + 0x18) <= uVar6) goto LAB_01f9340c;
      plVar5 = *(long **)(unaff_x23 + (long)(int)uVar6 * 8 + 0x20);
      if ((plVar5 == (long *)0x0) ||
         (lVar2 = (**(code **)(*plVar5 + 0x1f8))(plVar5,*(undefined8 *)(*plVar5 + 0x200)),
         unaff_x22 == (long *)0x0)) goto LAB_01f92644;
      if ((lVar2 != 0) &&
         (lVar4 = thunk_FUN_0124baac(lVar2,*(undefined8 *)(*unaff_x22 + 0x40)), lVar4 == 0))
      goto LAB_01f941d8;
      uVar1 = *(uint *)(unaff_x22 + 3);
    }
    else {
      if (*(int *)(in_stack_00000038 + 0x18) == 0) goto LAB_01f9340c;
      uVar8 = *(undefined8 *)(in_stack_00000038 + 0x20);
      uVar7 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
      lVar2 = thunk_FUN_01f894b8(uVar8,uVar7,0);
      if (unaff_x22 == (long *)0x0) goto LAB_01f92644;
      if ((lVar2 != 0) &&
         (lVar4 = thunk_FUN_0124baac(lVar2,*(undefined8 *)(*unaff_x22 + 0x40)), lVar4 == 0))
      goto LAB_01f941d8;
      uVar1 = *(uint *)(unaff_x22 + 3);
    }
    if (uVar6 < uVar1) {
      unaff_x22[(long)(int)uVar6 + 4] = lVar2;
      thunk_FUN_01286abc(unaff_x22 + (long)(int)uVar6 + 4,lVar2);
      *unaff_x28 = unaff_x22;
      thunk_FUN_01286abc();
      if (*(int *)(in_stack_00000040 + 0x18) != 0) {
        return *unaff_x26;
      }
    }
  }
LAB_01f9340c:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
LAB_01f93a1c:
                    /* try { // try from 01f93a1c to 02093a2b has its CatchHandler @ 01f93a4c */
  param_1 = *unaff_x22;
  unaff_x25 = param_2;
  goto code_r0x01f93a24;
}


