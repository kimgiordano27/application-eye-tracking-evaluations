/*
FUNCTION_NAME: System.EmptyArray<OVRPlugin.Vector4s>$$.cctor
ENTRY_POINT: 07027dc4
PROGRAM: m3ar-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_EmptyArray<OVRPlugin_Vector4s>___cctor(void)

{
  int iVar1;
  uint uVar2;
  undefined1 in_ZR;
  ulong uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  int unaff_w23;
  long *unaff_x24;
  uint uVar7;
  undefined8 unaff_x25;
  long unaff_x26;
  int unaff_w27;
  uint unaff_w28;
  int unaff_w29;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 in_stack_00000008;
  int *in_stack_00000010;
  undefined8 *in_stack_00000018;
  
  while( true ) {
    uVar7 = (uint)unaff_x25;
    if ((bool)in_ZR) {
      if (unaff_x24 == (long *)0x0) goto LAB_07027fc4;
      uVar3 = (**(code **)(*unaff_x24 + 0x1b8))();
                    /* catch(type#1 @ 08931438) { ... } // from try @ 07027d6c with catch @ 07027de8
                        */
      if ((uVar3 & 1) != 0) {
        if (in_stack_00000008._4_1_ == '\x02') {
          FUN_07506ce8();
        }
        else if (in_stack_00000008._4_1_ == '\x01') {
          if (unaff_w28 < *(uint *)(unaff_x26 + 0x18)) {
            lVar4 = unaff_x19 + (long)(int)unaff_w28 * 0x28;
            uVar9 = in_stack_00000018[1];
            uVar8 = *in_stack_00000018;
            *(undefined8 *)(lVar4 + 0x20) = in_stack_00000018[2];
            *(undefined8 *)(lVar4 + 0x18) = uVar9;
            *(undefined8 *)(lVar4 + 0x10) = uVar8;
            if (unaff_w28 < *(uint *)(unaff_x26 + 0x18)) {
              return 1;
            }
          }
          goto LAB_07027fac;
        }
        return 0;
      }
                    /* catch(type#1 @ 08931438) { ... } // from try @ 07027c94 with catch @ 07027dec
                        */
      uVar7 = *(uint *)(unaff_x26 + 0x18);
    }
                    /* catch(type#1 @ 08931438) { ... } // from try @ 07027cbc with catch @ 07027df0
                        */
                    /* catch(type#1 @ 08931438) { ... } // from try @ 07027bb0 with catch @ 07027df4
                        */
    if (uVar7 <= unaff_w28) goto LAB_07027fac;
                    /* catch(type#1 @ 08931438) { ... } // from try @ 07027bfc with catch @ 07027df8
                        */
    unaff_w28 = *(uint *)(unaff_x19 + (long)(int)unaff_w28 * (long)unaff_w29 + 4);
    if ((int)uVar7 <= unaff_w23) {
      FUN_07506dec(0);
    }
    unaff_x25 = *(undefined8 *)(unaff_x26 + 0x18);
                    /* try { // try from 07027e14 to 07127e17 has its CatchHandler @ 07027e20 */
    unaff_w23 = unaff_w23 + 1;
    uVar7 = (uint)unaff_x25;
    if (uVar7 <= unaff_w28) break;
    in_ZR = *(int *)(unaff_x19 + (long)(int)unaff_w28 * (long)unaff_w29) == unaff_w27;
  }
                    /* catch() { ... } // from try @ 07027e14 with catch @ 07027e20 */
                    /* try { // try from 07027e24 to 07127e2b has its CatchHandler @ 07027e48 */
                    /* try { // try from 07027e2c to 07127e4b has its CatchHandler @ 070278a4 */
  if (*(int *)(unaff_x21 + 0x28) < 1) {
                    /* try { // try from 07027e60 to 0712807b has its CatchHandler @ 07027e60
                       catch() { ... } // from try @ 07027e60 with catch @ 07027e60
                       catch() { ... } // from try @ 0702818c with catch @ 07027e60
                       catch() { ... } // from try @ 0702823c with catch @ 07027e60
                       catch() { ... } // from try @ 070282b8 with catch @ 07027e60 */
    uVar6 = *(uint *)(unaff_x21 + 0x20);
    if (uVar6 == uVar7) {
      FUN_07028370();
      lVar5 = *(long *)(unaff_x21 + 0x10);
      *(uint *)(unaff_x21 + 0x20) = uVar7 + 1;
      if (lVar5 == 0) goto LAB_07027fc4;
      uVar7 = *(uint *)(lVar5 + 0x18);
      iVar1 = 0;
      if (uVar7 != 0) {
        iVar1 = unaff_w27 / (int)uVar7;
      }
      uVar2 = unaff_w27 - iVar1 * uVar7;
      if (uVar7 <= uVar2) goto LAB_07027fac;
      lVar4 = *(long *)(unaff_x21 + 0x18);
      in_stack_00000010 = (int *)(lVar5 + (ulong)uVar2 * 4 + 0x20);
    }
    else {
      lVar4 = *(long *)(unaff_x21 + 0x18);
      *(uint *)(unaff_x21 + 0x20) = uVar6 + 1;
    }
    if (lVar4 == 0) {
LAB_07027fc4:
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_07027fac;
    lVar4 = lVar4 + (long)(int)uVar6 * 0x28;
  }
  else {
    uVar6 = *(uint *)(unaff_x21 + 0x24);
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x21 + 0x28) + -1;
    if (uVar7 <= uVar6) {
LAB_07027fac:
                    /* WARNING: Subroutine does not return */
      FUN_04031894();
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 07027e24 with catch @ 07027e48
                        */
    lVar4 = unaff_x26 + (long)(int)uVar6 * 0x28;
    *(undefined4 *)(unaff_x21 + 0x24) = *(undefined4 *)(lVar4 + 0x24);
  }
  *(int *)(lVar4 + 0x20) = unaff_w27;
  iVar1 = *in_stack_00000010;
  *(undefined8 *)(lVar4 + 0x28) = unaff_x20;
  *(int *)(lVar4 + 0x24) = iVar1 + -1;
  uVar9 = in_stack_00000018[1];
  uVar8 = *in_stack_00000018;
  *(undefined8 *)(lVar4 + 0x40) = in_stack_00000018[2];
  *(undefined8 *)(lVar4 + 0x38) = uVar9;
  *(undefined8 *)(lVar4 + 0x30) = uVar8;
  *in_stack_00000010 = uVar6 + 1;
  return 1;
}


