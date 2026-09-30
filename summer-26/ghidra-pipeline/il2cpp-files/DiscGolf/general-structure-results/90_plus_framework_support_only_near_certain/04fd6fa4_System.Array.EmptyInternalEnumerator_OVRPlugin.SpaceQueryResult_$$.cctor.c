/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceQueryResult>$$.cctor
ENTRY_POINT: 04fd6fa4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>___cctor(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  int unaff_w22;
  long unaff_x23;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long *unaff_x26;
  long unaff_x27;
  long in_stack_00000008;
  
  FUN_054f73b4();
  if (unaff_x23 != 0) {
    lVar1 = FUN_053f0e78();
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02dcfd18(lVar6);
    }
    if (lVar1 == 0) {
                    /* try { // try from 04fd7018 to 050d701b has its CatchHandler @ 04fd7024 */
      lVar2 = 0;
    }
    else {
                    /* try { // try from 04fd7004 to 050d7013 has its CatchHandler @ 04fd7014 */
      lVar2 = thunk_FUN_02dd3048(lVar1,lVar6);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 04fd6f84 with catch @ 04fd7014
                       catch() { ... } // from try @ 04fd7004 with catch @ 04fd7014 */
        FUN_02d96be0(lVar1,lVar6);
      }
    }
                    /* try { // try from 04fd701c to 050d7027 has its CatchHandler @ 04fd6d88 */
    lVar6 = *(long *)(unaff_x20 + 0x20);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04fd6f6c with catch @ 04fd7024
                       catch(type#2 @ 00000000) { ... } // from try @ 04fd7018 with catch @ 04fd7024
                        */
    *(long *)(unaff_x19 + 0x30) = lVar2;
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02dcfd18(lVar6);
    }
    if (lVar1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = thunk_FUN_02dd3048(lVar1,lVar6);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96be0(lVar1,lVar6);
      }
    }
    LeanTween__value((long *)(unaff_x19 + 0x30),lVar2);
    if (unaff_w22 == 0) {
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
      LeanTween__value((undefined8 *)(unaff_x19 + 0x10),0);
    }
    else {
      FUN_04fd68e8();
      uVar4 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x188);
      if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar4 = FUN_054f73b4(uVar4,0);
      if (in_stack_00000008 == 0) goto LAB_04fd71e4;
      lVar1 = FUN_053f0e78(in_stack_00000008,*(undefined8 *)PTR_DAT_06a11778,uVar4,0);
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x148);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02dcfd18(lVar6);
      }
      if (lVar1 == 0) {
        FUN_0550953c(0x10,0);
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar2 = thunk_FUN_02dd3048(lVar1,lVar6);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96be0(lVar1,lVar6);
      }
      if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
        uVar5 = 0;
        uVar3 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
        do {
          if (uVar3 <= uVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96868();
          }
          FUN_04fd69c8();
          uVar3 = (ulong)*(uint *)(lVar2 + 0x18);
          uVar5 = uVar5 + 1;
        } while ((long)uVar5 < (long)(int)*(uint *)(lVar2 + 0x18));
      }
    }
    lVar1 = *unaff_x26;
    *(undefined4 *)(unaff_x19 + 0x2c) = unaff_w21;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    lVar1 = FUN_0548850c(0);
    if (lVar1 != 0) {
      FUN_04b86570();
      return;
    }
  }
LAB_04fd71e4:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


