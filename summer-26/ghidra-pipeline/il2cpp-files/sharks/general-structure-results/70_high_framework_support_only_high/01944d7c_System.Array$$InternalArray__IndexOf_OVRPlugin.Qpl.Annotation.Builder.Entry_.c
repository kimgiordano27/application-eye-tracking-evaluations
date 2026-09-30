/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<OVRPlugin.Qpl.Annotation.Builder.Entry>
ENTRY_POINT: 01944d7c
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


void System_Array__InternalArray__IndexOf<OVRPlugin_Qpl_Annotation_Builder_Entry>
               (undefined8 param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x23;
  
  while (unaff_x20 = unaff_x20 + 0xc, unaff_x23 != 4) {
    lVar4 = *(long *)(unaff_x19 + 0x38);
    if (lVar4 == 0) goto LAB_01944e18;
    if (*(uint *)(lVar4 + 0x18) <= unaff_x23) {
LAB_01944e1c:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5b0();
    }
    puVar1 = (undefined4 *)(lVar4 + unaff_x20);
    uVar3 = FUN_01944f00(puVar1[-2],puVar1[-1],*puVar1,param_1,&stack0x00000068,&stack0x0000007c,
                         *(undefined8 *)(unaff_x19 + 0x70),*(undefined8 *)(unaff_x19 + 0x78));
    lVar4 = *(long *)(unaff_x19 + 0x80);
    if (lVar4 == 0) goto LAB_01944e18;
    if (*(uint *)(lVar4 + 0x18) <= unaff_x23) goto LAB_01944e1c;
    lVar4 = *(long *)(lVar4 + unaff_x23 * 8 + 0x20);
    if (lVar4 == 0) goto LAB_01944e18;
    uVar3 = FUN_01944f00(*(undefined4 *)(lVar4 + 0x28),*(undefined4 *)(lVar4 + 0x2c),
                         *(undefined4 *)(lVar4 + 0x30),uVar3,&stack0x00000058,&stack0x0000007c,
                         *(undefined8 *)(unaff_x19 + 0x70),*(undefined8 *)(unaff_x19 + 0x78));
    lVar4 = *(long *)(unaff_x19 + 0x38);
    if (lVar4 == 0) goto LAB_01944e18;
    uVar2 = (uint)(unaff_x23 + 1) & 3;
    if (*(uint *)(lVar4 + 0x18) <= uVar2) goto LAB_01944e1c;
    lVar4 = lVar4 + (ulong)uVar2 * unaff_x21;
    uVar3 = FUN_01944f00(*(undefined4 *)(lVar4 + 0x20),*(undefined4 *)(lVar4 + 0x24),
                         *(undefined4 *)(lVar4 + 0x28),uVar3,&stack0x00000068,&stack0x0000007c,
                         *(undefined8 *)(unaff_x19 + 0x70),*(undefined8 *)(unaff_x19 + 0x78));
    lVar4 = *(long *)(unaff_x19 + 0x80);
    if (lVar4 == 0) goto LAB_01944e18;
    if (*(uint *)(lVar4 + 0x18) <= unaff_x23) goto LAB_01944e1c;
    lVar4 = *(long *)(lVar4 + unaff_x23 * 8 + 0x20);
    if (lVar4 == 0) goto LAB_01944e18;
    uVar3 = FUN_01944f00(*(undefined4 *)(lVar4 + 0x28),*(undefined4 *)(lVar4 + 0x2c),
                         *(undefined4 *)(lVar4 + 0x30),uVar3,&stack0x00000058,&stack0x0000007c,
                         *(undefined8 *)(unaff_x19 + 0x70),*(undefined8 *)(unaff_x19 + 0x78));
    lVar4 = *(long *)(unaff_x19 + 0x80);
    if (lVar4 == 0) goto LAB_01944e18;
    if (*(uint *)(lVar4 + 0x18) <= unaff_x23) goto LAB_01944e1c;
    lVar4 = *(long *)(lVar4 + unaff_x23 * 8 + 0x20);
    if (lVar4 == 0) goto LAB_01944e18;
    uVar3 = FUN_01944f00(*(undefined4 *)(lVar4 + 0x34),*(undefined4 *)(lVar4 + 0x38),
                         *(undefined4 *)(lVar4 + 0x3c),uVar3,&stack0x00000058,&stack0x0000007c,
                         *(undefined8 *)(unaff_x19 + 0x70),*(undefined8 *)(unaff_x19 + 0x78));
    lVar4 = *(long *)(unaff_x19 + 0x38);
    if (lVar4 == 0) goto LAB_01944e18;
    if (*(uint *)(lVar4 + 0x18) <= uVar2) goto LAB_01944e1c;
    lVar4 = lVar4 + (ulong)uVar2 * unaff_x21;
    uVar3 = FUN_01944f00(*(undefined4 *)(lVar4 + 0x20),*(undefined4 *)(lVar4 + 0x24),
                         *(undefined4 *)(lVar4 + 0x28),uVar3,&stack0x00000068,&stack0x0000007c,
                         *(undefined8 *)(unaff_x19 + 0x70),*(undefined8 *)(unaff_x19 + 0x78));
    lVar4 = *(long *)(unaff_x19 + 0x80);
    if (lVar4 == 0) goto LAB_01944e18;
    if (*(uint *)(lVar4 + 0x18) <= unaff_x23) goto LAB_01944e1c;
    lVar4 = *(long *)(lVar4 + unaff_x23 * 8 + 0x20);
    if (lVar4 == 0) goto LAB_01944e18;
    uVar3 = FUN_01944f00(*(undefined4 *)(lVar4 + 0x40),*(undefined4 *)(lVar4 + 0x44),
                         *(undefined4 *)(lVar4 + 0x48),uVar3,&stack0x00000058,&stack0x0000007c,
                         *(undefined8 *)(unaff_x19 + 0x70),*(undefined8 *)(unaff_x19 + 0x78));
    lVar4 = *(long *)(unaff_x19 + 0x80);
    if (lVar4 == 0) goto LAB_01944e18;
    if (*(uint *)(lVar4 + 0x18) <= unaff_x23) goto LAB_01944e1c;
    lVar4 = *(long *)(lVar4 + unaff_x23 * 8 + 0x20);
    if (lVar4 == 0) goto LAB_01944e18;
    uVar3 = FUN_01944f00(*(undefined4 *)(lVar4 + 0x28),*(undefined4 *)(lVar4 + 0x2c),
                         *(undefined4 *)(lVar4 + 0x30),uVar3,&stack0x00000058,&stack0x0000007c,
                         *(undefined8 *)(unaff_x19 + 0x70),*(undefined8 *)(unaff_x19 + 0x78));
    lVar4 = *(long *)(unaff_x19 + 0x38);
    if (lVar4 == 0) goto LAB_01944e18;
    if (*(uint *)(lVar4 + 0x18) <= unaff_x23) goto LAB_01944e1c;
    puVar1 = (undefined4 *)(lVar4 + unaff_x20);
    uVar3 = FUN_01944f00(puVar1[-2],puVar1[-1],*puVar1,uVar3,&stack0x00000068,&stack0x0000007c,
                         *(undefined8 *)(unaff_x19 + 0x70),*(undefined8 *)(unaff_x19 + 0x78));
    lVar4 = *(long *)(unaff_x19 + 0x80);
    if (lVar4 == 0) goto LAB_01944e18;
    if (*(uint *)(lVar4 + 0x18) <= unaff_x23) goto LAB_01944e1c;
    lVar4 = *(long *)(lVar4 + unaff_x23 * 8 + 0x20);
    if (lVar4 == 0) goto LAB_01944e18;
    uVar3 = FUN_01944f00(*(undefined4 *)(lVar4 + 0x40),*(undefined4 *)(lVar4 + 0x44),
                         *(undefined4 *)(lVar4 + 0x48),uVar3,&stack0x00000058,&stack0x0000007c,
                         *(undefined8 *)(unaff_x19 + 0x70),*(undefined8 *)(unaff_x19 + 0x78));
    lVar4 = *(long *)(unaff_x19 + 0x38);
    if (lVar4 == 0) goto LAB_01944e18;
    if (*(uint *)(lVar4 + 0x18) <= unaff_x23) goto LAB_01944e1c;
    puVar1 = (undefined4 *)(lVar4 + unaff_x20);
    uVar3 = FUN_01944f00(puVar1[-2],puVar1[-1],*puVar1,uVar3,&stack0x00000068,&stack0x0000007c,
                         *(undefined8 *)(unaff_x19 + 0x70),*(undefined8 *)(unaff_x19 + 0x78));
    lVar4 = *(long *)(unaff_x19 + 0x80);
    if (lVar4 == 0) goto LAB_01944e18;
    uVar2 = (int)unaff_x23 - 1U & 3;
    if (*(uint *)(lVar4 + 0x18) <= uVar2) goto LAB_01944e1c;
    lVar4 = *(long *)(lVar4 + (ulong)uVar2 * 8 + 0x20);
    if (lVar4 == 0) goto LAB_01944e18;
    param_1 = FUN_01944f00(*(undefined4 *)(lVar4 + 0x34),*(undefined4 *)(lVar4 + 0x38),
                           *(undefined4 *)(lVar4 + 0x3c),uVar3,&stack0x00000058,&stack0x0000007c,
                           *(undefined8 *)(unaff_x19 + 0x70),*(undefined8 *)(unaff_x19 + 0x78));
    unaff_x23 = unaff_x23 + 1;
  }
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
LAB_01944e18:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


