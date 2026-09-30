/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnInstanceCreate
ENTRY_POINT: 01f938e0
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


undefined8 OVRPlugin_UnityOpenXR__OnInstanceCreate(long param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long *unaff_x22;
  uint unaff_w23;
  undefined8 *unaff_x26;
  long *unaff_x28;
  long in_stack_00000040;
  
  lVar2 = FUN_01230af8(**(undefined8 **)(param_1 + 0xca8),1);
  if ((*unaff_x28 != 0) && (lVar2 != 0)) {
                    /* try { // try from 01f93900 to 02093937 has its CatchHandler @ 01f93774 */
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(uint *)(lVar2 + 0x20) = *(int *)(*unaff_x28 + 0x18) - unaff_w23;
      lVar2 = thunk_FUN_01f894b8();
      if (unaff_x22 == (long *)0x0) goto LAB_01f92644;
                    /* try { // try from 01f93938 to 02093953 has its CatchHandler @ 01f93a50 */
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_0124baac(lVar2,*(undefined8 *)(*unaff_x22 + 0x40)), lVar3 == 0)) {
        uVar4 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
        FUN_01230b78(uVar4,0);
      }
      if (unaff_w23 < *(uint *)(unaff_x22 + 3)) {
        plVar5 = unaff_x22 + (long)(int)unaff_w23 + 4;
        *plVar5 = lVar2;
                    /* try { // try from 01f93954 to 0209395f has its CatchHandler @ 01f93a44 */
        thunk_FUN_01286abc(plVar5,lVar2);
        if (unaff_w23 < *(uint *)(unaff_x22 + 3)) {
          lVar2 = *unaff_x28;
          if (lVar2 == 0) goto LAB_01f92644;
          plVar5 = (long *)*plVar5;
          if (plVar5 != (long *)0x0) {
                    /* try { // try from 01f9397c to 0209397f has its CatchHandler @ 01f93a3c */
                    /* try { // try from 01f93980 to 02093a1b has its CatchHandler @ 01f93774 */
            bVar1 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
            if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_027b3f80)) {
                    /* WARNING: Subroutine does not return */
              FUN_01230f60(plVar5);
            }
          }
          FUN_01f89ca0(lVar2,unaff_w23,plVar5,0,*(int *)(lVar2 + 0x18) - unaff_w23,0);
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
LAB_01f92644:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


