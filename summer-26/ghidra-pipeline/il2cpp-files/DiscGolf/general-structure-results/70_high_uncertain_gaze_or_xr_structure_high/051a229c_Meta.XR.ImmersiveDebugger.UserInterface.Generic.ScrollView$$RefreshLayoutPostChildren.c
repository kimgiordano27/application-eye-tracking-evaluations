/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ScrollView$$RefreshLayoutPostChildren
ENTRY_POINT: 051a229c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


bool Meta_XR_ImmersiveDebugger_UserInterface_Generic_ScrollView__RefreshLayoutPostChildren
               (long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  uint in_w9;
  uint in_w10;
  long in_x11;
  uint in_w12;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar5;
  uint unaff_w23;
  uint uVar6;
  ulong unaff_x24;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  while( true ) {
    uVar6 = (uint)unaff_x24;
    if (in_w12 <= uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    if (-1 < *(int *)(in_x11 + 0x20 +
                     (-(unaff_x24 >> 0x1f & 1) & 0xffffffe000000000 | (unaff_x24 & 0xffffffff) << 5)
                     )) break;
    unaff_x24 = (ulong)in_w10;
    if (in_w9 == in_w10) {
      *(undefined8 *)(unaff_x19 + 0x18) = 0;
      *(undefined8 *)(unaff_x19 + 0x20) = 0;
      *(uint *)(unaff_x19 + 0xc) = unaff_w23 + 1;
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
      goto LAB_051a2328;
    }
    in_x11 = *(long *)(param_1 + 0x18);
    in_w10 = in_w10 + 1;
    *(uint *)(unaff_x19 + 0xc) = in_w10;
    if (in_x11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    in_w12 = *(uint *)(in_x11 + 0x18);
  }
  lVar4 = *(long *)(unaff_x20 + 0x20);
  lVar1 = in_x11 + 0x20 + (long)(int)uVar6 * 0x20;
  uVar2 = *(undefined8 *)(lVar1 + 8);
  uVar3 = *(undefined8 *)(lVar1 + 0x10);
  uVar5 = *(undefined8 *)(lVar1 + 0x18);
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02dcfd18();
  }
  FUN_03e469a4(&stack0x00000008,uVar2,uVar3,uVar5,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x38));
  *(undefined8 *)(unaff_x19 + 0x18) = in_stack_00000010;
  *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000008;
  *(undefined8 *)(unaff_x19 + 0x20) = in_stack_00000018;
  LeanTween__value(unaff_x19 + 0x10,0);
  in_w10 = uVar6;
LAB_051a2328:
  return in_w10 < unaff_w23;
}


