/*
FUNCTION_NAME: System.Linq.Enumerable.WhereSelectArrayIterator<NameAndParameters,-Vector4>$$MoveNext
ENTRY_POINT: 027930ac
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 71
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_3;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void System_Linq_Enumerable_WhereSelectArrayIterator<NameAndParameters,_Vector4>__MoveNext
               (undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  ulong uVar9;
  undefined4 *puVar10;
  undefined4 in_stack_00000008;
  
  iVar1 = thunk_FUN_01dff49c(param_1,param_2,0);
  if (iVar1 != 0) {
    FUN_033b2d60(6,0);
  }
  uVar2 = FUN_033aadfc();
  if (uVar2 < unaff_w19) {
    OVRManager_PassthroughCapabilities___ctor(0);
  }
  iVar1 = FUN_033aadfc();
  if (*(long *)(unaff_x21 + 0x10) != 0) {
    iVar3 = FUN_02b149a0(*(long *)(unaff_x21 + 0x10),
                         *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28));
                    /* try { // try from 0279310c to 0289310f has its CatchHandler @ 0279311c */
                    /* try { // try from 02793110 to 02893133 has its CatchHandler @ 02792efc */
    if ((int)(iVar1 - unaff_w19) < iVar3) {
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 0279308c with catch @ 02793118
                        */
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 02793074 with catch @ 0279311c
                       catch(type#1 @ 03fad958) { ... } // from try @ 0279310c with catch @ 0279311c
                        */
      FUN_033b2d60(5,0);
    }
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x20);
                    /* try { // try from 02793134 to 02893137 has its CatchHandler @ 02793148 */
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      FUN_01dde7f8(lVar8);
    }
                    /* catch() { ... } // from try @ 02793134 with catch @ 02793148 */
    lVar8 = thunk_FUN_01de26bc();
    if (lVar8 != 0) {
      System_Linq_Enumerable_WhereSelectArrayIterator<NameAndParameters,_Vector3>__Clone();
      return;
    }
                    /* try { // try from 02793180 to 028931a7 has its CatchHandler @ 027931bc */
    plVar4 = (long *)thunk_FUN_01de26bc();
    if (plVar4 == (long *)0x0) {
      FUN_033b3618();
    }
    lVar8 = *(long *)(unaff_x21 + 0x10);
    if (lVar8 != 0) {
                    /* try { // try from 027931a8 to 028931b3 has its CatchHandler @ 02792efc */
      uVar2 = *(uint *)(lVar8 + 0x20);
      if (0 < (int)uVar2) {
        lVar8 = *(long *)(lVar8 + 0x18);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        uVar9 = 0;
        puVar10 = (undefined4 *)(lVar8 + 0x30);
        do {
          if (*(uint *)(lVar8 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db78();
          }
          if (-1 < (int)puVar10[-4]) {
            in_stack_00000008 = *puVar10;
            lVar5 = thunk_FUN_01de23e8(*(undefined8 *)
                                        (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x40),
                                       &stack0x00000008);
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db70();
            }
            if ((lVar5 != 0) &&
               (lVar6 = thunk_FUN_01de26bc(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
              uVar7 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
              FUN_01d7da3c(uVar7,0);
            }
            if (*(uint *)(plVar4 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db78();
            }
            plVar4[(long)(int)unaff_w19 + 4] = lVar5;
            thunk_FUN_01e10808(plVar4 + (long)(int)unaff_w19 + 4,lVar5);
            unaff_w19 = unaff_w19 + 1;
          }
          uVar9 = uVar9 + 1;
          puVar10 = puVar10 + 6;
        } while (uVar2 != uVar9);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


