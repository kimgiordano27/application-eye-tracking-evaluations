/*
FUNCTION_NAME: Unity.Services.Analytics.CustomEvent.<GetEnumerator>d__4$$System.IDisposable.Dispose
ENTRY_POINT: 08197c7c
PROGRAM: m3ar-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void Unity_Services_Analytics_CustomEvent_<GetEnumerator>d__4__System_IDisposable_Dispose(void)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x19;
  ulong unaff_x20;
  int unaff_w21;
  int unaff_w22;
  undefined1 uStack0000000000000000;
  undefined1 uStack0000000000000010;
  undefined1 uStack0000000000000028;
  undefined1 uStack0000000000000030;
  undefined1 uStack0000000000000038;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000048;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
  
  uStack0000000000000048 = 0;
  uStack0000000000000040 = 0;
  uStack0000000000000038 = 0;
  uStack0000000000000030 = 0;
  uStack0000000000000028 = 0;
  uStack0000000000000010 = 0;
  uStack0000000000000000 = 0;
  uVar3 = FUN_08105c60();
  *(undefined8 *)(unaff_x19 + 0x48) = uVar3;
  puVar2 = PTR_DAT_08fe90b8;
  iVar1 = unaff_w22 * unaff_w21;
  if ((unaff_x20 & 1) == 0) {
    iVar1 = 0;
  }
  if (*(int *)(unaff_x19 + 0x50) < iVar1) {
    if (*(long *)(unaff_x19 + 0x58) != 0) {
      thunk_FUN_08553ca8(*(long *)(unaff_x19 + 0x58),0);
    }
    uVar3 = *(undefined8 *)puVar2;
    *(int *)(unaff_x19 + 0x50) = iVar1;
    *(undefined1 *)(unaff_x19 + 0x60) = 1;
    uVar3 = thunk_FUN_0406deb8(uVar3);
    FUN_08554148(uVar3,0x10,0,iVar1 + 4,4,0);
    *(undefined8 *)(unaff_x19 + 0x58) = uVar3;
  }
  if (iVar1 == 0) {
    if (*(long *)(unaff_x19 + 0x58) != 0) {
      thunk_FUN_08553ca8(*(long *)(unaff_x19 + 0x58),0);
      *(undefined8 *)(unaff_x19 + 0x58) = 0;
    }
    *(undefined4 *)(unaff_x19 + 0x50) = 0;
  }
  if (*(long *)(unaff_x19 + 0x68) == 0) {
    uVar3 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f8c4e0);
    FUN_08591f10(uVar3,1,0x2b0,8,0);
    *(undefined8 *)(unaff_x19 + 0x68) = uVar3;
  }
  if (*(long *)(unaff_x19 + 0x70) == 0) {
    in_stack_00000060 = 0;
    in_stack_00000068 = 0;
    FUN_05a84c94(&stack0x00000060,1,4,1,*(undefined8 *)PTR_DAT_08feef30);
    *(undefined8 *)(unaff_x19 + 0x78) = in_stack_00000068;
    *(long *)(unaff_x19 + 0x70) = in_stack_00000060;
  }
  return;
}


