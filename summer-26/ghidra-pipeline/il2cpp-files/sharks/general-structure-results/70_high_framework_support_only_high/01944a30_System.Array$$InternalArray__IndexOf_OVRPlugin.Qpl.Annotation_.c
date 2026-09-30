/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<OVRPlugin.Qpl.Annotation>
ENTRY_POINT: 01944a30
PROGRAM: sharks-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IndexOf<OVRPlugin_Qpl_Annotation>(undefined8 param_1)

{
  ulong uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  ulong uVar7;
  
  uVar4 = FUN_01944f00(param_1,&stack0x00000068,&stack0x0000007c);
  lVar5 = *(long *)(unaff_x19 + 0x38);
  if (lVar5 != 0) {
    if (*(uint *)(lVar5 + 0x18) < 3) {
LAB_01944e1c:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5b0();
    }
    uVar4 = FUN_01944f00(*(undefined4 *)(lVar5 + 0x38),*(undefined4 *)(lVar5 + 0x3c),
                         *(undefined4 *)(lVar5 + 0x40),uVar4,&stack0x00000068,&stack0x0000007c,
                         *(undefined8 *)(unaff_x19 + 0x70),*(undefined8 *)(unaff_x19 + 0x78));
    lVar5 = *(long *)(unaff_x19 + 0x38);
    if (lVar5 != 0) {
      if (*(int *)(lVar5 + 0x18) == 0) goto LAB_01944e1c;
      uVar4 = FUN_01944f00(*(undefined4 *)(lVar5 + 0x20),*(undefined4 *)(lVar5 + 0x24),
                           *(undefined4 *)(lVar5 + 0x28),uVar4,&stack0x00000068,&stack0x0000007c,
                           *(undefined8 *)(unaff_x19 + 0x70),*(undefined8 *)(unaff_x19 + 0x78));
      lVar5 = *(long *)(unaff_x19 + 0x38);
      if (lVar5 != 0) {
        if (*(uint *)(lVar5 + 0x18) < 3) goto LAB_01944e1c;
        uVar4 = FUN_01944f00(*(undefined4 *)(lVar5 + 0x38),*(undefined4 *)(lVar5 + 0x3c),
                             *(undefined4 *)(lVar5 + 0x40),uVar4,&stack0x00000068,&stack0x0000007c,
                             *(undefined8 *)(unaff_x19 + 0x70),*(undefined8 *)(unaff_x19 + 0x78));
        lVar5 = *(long *)(unaff_x19 + 0x38);
        if (lVar5 != 0) {
          if (*(uint *)(lVar5 + 0x18) < 4) goto LAB_01944e1c;
          uVar4 = FUN_01944f00(*(undefined4 *)(lVar5 + 0x44),*(undefined4 *)(lVar5 + 0x48),
                               *(undefined4 *)(lVar5 + 0x4c),uVar4,&stack0x00000068,&stack0x0000007c
                               ,*(undefined8 *)(unaff_x19 + 0x70),*(undefined8 *)(unaff_x19 + 0x78))
          ;
          lVar5 = 0x28;
          uVar7 = 0;
          do {
            lVar6 = *(long *)(unaff_x19 + 0x38);
            if (lVar6 == 0) goto LAB_01944e18;
            if (*(uint *)(lVar6 + 0x18) <= uVar7) goto LAB_01944e1c;
            puVar2 = (undefined4 *)(lVar6 + lVar5);
            uVar4 = FUN_01944f00(puVar2[-2],puVar2[-1],*puVar2,uVar4,&stack0x00000068,
                                 &stack0x0000007c,*(undefined8 *)(unaff_x19 + 0x70),
                                 *(undefined8 *)(unaff_x19 + 0x78));
            lVar6 = *(long *)(unaff_x19 + 0x80);
            if (lVar6 == 0) goto LAB_01944e18;
            if (*(uint *)(lVar6 + 0x18) <= uVar7) goto LAB_01944e1c;
            lVar6 = *(long *)(lVar6 + uVar7 * 8 + 0x20);
            if (lVar6 == 0) goto LAB_01944e18;
            uVar4 = FUN_01944f00(*(undefined4 *)(lVar6 + 0x28),*(undefined4 *)(lVar6 + 0x2c),
                                 *(undefined4 *)(lVar6 + 0x30),uVar4,&stack0x00000058,
                                 &stack0x0000007c,*(undefined8 *)(unaff_x19 + 0x70),
                                 *(undefined8 *)(unaff_x19 + 0x78));
            lVar6 = *(long *)(unaff_x19 + 0x38);
            if (lVar6 == 0) goto LAB_01944e18;
            uVar1 = uVar7 + 1;
            uVar3 = (uint)uVar1 & 3;
            if (*(uint *)(lVar6 + 0x18) <= uVar3) goto LAB_01944e1c;
            lVar6 = lVar6 + (ulong)uVar3 * 0xc;
            uVar4 = FUN_01944f00(*(undefined4 *)(lVar6 + 0x20),*(undefined4 *)(lVar6 + 0x24),
                                 *(undefined4 *)(lVar6 + 0x28),uVar4,&stack0x00000068,
                                 &stack0x0000007c,*(undefined8 *)(unaff_x19 + 0x70),
                                 *(undefined8 *)(unaff_x19 + 0x78));
            lVar6 = *(long *)(unaff_x19 + 0x80);
            if (lVar6 == 0) goto LAB_01944e18;
            if (*(uint *)(lVar6 + 0x18) <= uVar7) goto LAB_01944e1c;
            lVar6 = *(long *)(lVar6 + uVar7 * 8 + 0x20);
            if (lVar6 == 0) goto LAB_01944e18;
            uVar4 = FUN_01944f00(*(undefined4 *)(lVar6 + 0x28),*(undefined4 *)(lVar6 + 0x2c),
                                 *(undefined4 *)(lVar6 + 0x30),uVar4,&stack0x00000058,
                                 &stack0x0000007c,*(undefined8 *)(unaff_x19 + 0x70),
                                 *(undefined8 *)(unaff_x19 + 0x78));
            lVar6 = *(long *)(unaff_x19 + 0x80);
            if (lVar6 == 0) goto LAB_01944e18;
            if (*(uint *)(lVar6 + 0x18) <= uVar7) goto LAB_01944e1c;
            lVar6 = *(long *)(lVar6 + uVar7 * 8 + 0x20);
            if (lVar6 == 0) goto LAB_01944e18;
            uVar4 = FUN_01944f00(*(undefined4 *)(lVar6 + 0x34),*(undefined4 *)(lVar6 + 0x38),
                                 *(undefined4 *)(lVar6 + 0x3c),uVar4,&stack0x00000058,
                                 &stack0x0000007c,*(undefined8 *)(unaff_x19 + 0x70),
                                 *(undefined8 *)(unaff_x19 + 0x78));
            lVar6 = *(long *)(unaff_x19 + 0x38);
            if (lVar6 == 0) goto LAB_01944e18;
            if (*(uint *)(lVar6 + 0x18) <= uVar3) goto LAB_01944e1c;
            lVar6 = lVar6 + (ulong)uVar3 * 0xc;
            uVar4 = FUN_01944f00(*(undefined4 *)(lVar6 + 0x20),*(undefined4 *)(lVar6 + 0x24),
                                 *(undefined4 *)(lVar6 + 0x28),uVar4,&stack0x00000068,
                                 &stack0x0000007c,*(undefined8 *)(unaff_x19 + 0x70),
                                 *(undefined8 *)(unaff_x19 + 0x78));
            lVar6 = *(long *)(unaff_x19 + 0x80);
            if (lVar6 == 0) goto LAB_01944e18;
            if (*(uint *)(lVar6 + 0x18) <= uVar7) goto LAB_01944e1c;
            lVar6 = *(long *)(lVar6 + uVar7 * 8 + 0x20);
            if (lVar6 == 0) goto LAB_01944e18;
            uVar4 = FUN_01944f00(*(undefined4 *)(lVar6 + 0x40),*(undefined4 *)(lVar6 + 0x44),
                                 *(undefined4 *)(lVar6 + 0x48),uVar4,&stack0x00000058,
                                 &stack0x0000007c,*(undefined8 *)(unaff_x19 + 0x70),
                                 *(undefined8 *)(unaff_x19 + 0x78));
            lVar6 = *(long *)(unaff_x19 + 0x80);
            if (lVar6 == 0) goto LAB_01944e18;
            if (*(uint *)(lVar6 + 0x18) <= uVar7) goto LAB_01944e1c;
            lVar6 = *(long *)(lVar6 + uVar7 * 8 + 0x20);
            if (lVar6 == 0) goto LAB_01944e18;
            uVar4 = FUN_01944f00(*(undefined4 *)(lVar6 + 0x28),*(undefined4 *)(lVar6 + 0x2c),
                                 *(undefined4 *)(lVar6 + 0x30),uVar4,&stack0x00000058,
                                 &stack0x0000007c,*(undefined8 *)(unaff_x19 + 0x70),
                                 *(undefined8 *)(unaff_x19 + 0x78));
            lVar6 = *(long *)(unaff_x19 + 0x38);
            if (lVar6 == 0) goto LAB_01944e18;
            if (*(uint *)(lVar6 + 0x18) <= uVar7) goto LAB_01944e1c;
            puVar2 = (undefined4 *)(lVar6 + lVar5);
            uVar4 = FUN_01944f00(puVar2[-2],puVar2[-1],*puVar2,uVar4,&stack0x00000068,
                                 &stack0x0000007c,*(undefined8 *)(unaff_x19 + 0x70),
                                 *(undefined8 *)(unaff_x19 + 0x78));
            lVar6 = *(long *)(unaff_x19 + 0x80);
            if (lVar6 == 0) goto LAB_01944e18;
            if (*(uint *)(lVar6 + 0x18) <= uVar7) goto LAB_01944e1c;
            lVar6 = *(long *)(lVar6 + uVar7 * 8 + 0x20);
            if (lVar6 == 0) goto LAB_01944e18;
            uVar4 = FUN_01944f00(*(undefined4 *)(lVar6 + 0x40),*(undefined4 *)(lVar6 + 0x44),
                                 *(undefined4 *)(lVar6 + 0x48),uVar4,&stack0x00000058,
                                 &stack0x0000007c,*(undefined8 *)(unaff_x19 + 0x70),
                                 *(undefined8 *)(unaff_x19 + 0x78));
            lVar6 = *(long *)(unaff_x19 + 0x38);
            if (lVar6 == 0) goto LAB_01944e18;
            if (*(uint *)(lVar6 + 0x18) <= uVar7) goto LAB_01944e1c;
            puVar2 = (undefined4 *)(lVar6 + lVar5);
            uVar4 = FUN_01944f00(puVar2[-2],puVar2[-1],*puVar2,uVar4,&stack0x00000068,
                                 &stack0x0000007c,*(undefined8 *)(unaff_x19 + 0x70),
                                 *(undefined8 *)(unaff_x19 + 0x78));
            lVar6 = *(long *)(unaff_x19 + 0x80);
            if (lVar6 == 0) goto LAB_01944e18;
            uVar3 = (int)uVar7 - 1U & 3;
            if (*(uint *)(lVar6 + 0x18) <= uVar3) goto LAB_01944e1c;
            lVar6 = *(long *)(lVar6 + (ulong)uVar3 * 8 + 0x20);
            if (lVar6 == 0) goto LAB_01944e18;
            uVar4 = FUN_01944f00(*(undefined4 *)(lVar6 + 0x34),*(undefined4 *)(lVar6 + 0x38),
                                 *(undefined4 *)(lVar6 + 0x3c),uVar4,&stack0x00000058,
                                 &stack0x0000007c,*(undefined8 *)(unaff_x19 + 0x70),
                                 *(undefined8 *)(unaff_x19 + 0x78));
            lVar5 = lVar5 + 0xc;
            uVar7 = uVar1;
          } while (uVar1 != 4);
          if (*(long *)(unaff_x19 + 0x60) != 0) {
            FUN_033cd4f8(*(long *)(unaff_x19 + 0x60),*(undefined8 *)(unaff_x19 + 0x70),0);
            if (*(long *)(unaff_x19 + 0x60) != 0) {
              FUN_033cd7d0(*(long *)(unaff_x19 + 0x60),*(undefined8 *)(unaff_x19 + 0x78),0);
              if (*(long *)(unaff_x19 + 0x60) != 0) {
                FUN_033cecbc(*(long *)(unaff_x19 + 0x60),*(undefined8 *)(unaff_x19 + 0x68),0);
                if (*(long *)(unaff_x19 + 0x60) != 0) {
                  FUN_033cf8b4(*(long *)(unaff_x19 + 0x60),0);
                  if (*(long *)(unaff_x19 + 0x58) != 0) {
                    FUN_033cbf34(*(long *)(unaff_x19 + 0x58),*(undefined8 *)(unaff_x19 + 0x60),0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_01944e18:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


