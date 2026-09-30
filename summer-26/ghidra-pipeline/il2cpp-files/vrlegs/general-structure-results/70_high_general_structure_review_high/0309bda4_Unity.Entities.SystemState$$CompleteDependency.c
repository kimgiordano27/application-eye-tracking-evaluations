/*
FUNCTION_NAME: Unity.Entities.SystemState$$CompleteDependency
ENTRY_POINT: 0309bda4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;ray_or_cast_sink_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void Unity_Entities_SystemState__CompleteDependency(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long unaff_x19;
  long *unaff_x20;
  int iVar8;
  long unaff_x21;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  
  FUN_01ab69ac();
  *(undefined1 *)(unaff_x21 + 0x481) = 1;
  puVar2 = 
  Unity_Physics_Systems_SyncCustomPhysicsProxySystem___codegen__OnCreate_00000B42_PostfixBurstDelegate_var
  ;
  puVar1 = PTR_DAT_03cc5058;
  lVar5 = *unaff_x20;
                    /* try { // try from 0309bdc0 to 0319bdc3 has its CatchHandler @ 0309be88 */
                    /* try { // try from 0309bdc4 to 0319bdc7 has its CatchHandler @ 0309be7c */
                    /* try { // try from 0309bdc8 to 0319bdcb has its CatchHandler @ 0309be74 */
  if (*(int *)(lVar5 + 0xe0) == 0) {
                    /* try { // try from 0309bdcc to 0319be13 has its CatchHandler @ 0309b87c */
    thunk_FUN_01a58e78();
    lVar5 = *unaff_x20;
  }
  uVar9 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x18);
  uVar6 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
  FUN_021e451c(uVar6,uVar9,*(undefined8 *)puVar2);
  puVar4 = TransformBakingSystem___codegen__OnUpdate_00000006_PostfixBurstDelegate_var;
  puVar3 = TransformBakingSystem___codegen__OnCreate_00000005_PostfixBurstDelegate_var;
  puVar2 = System_Runtime_InteropServices_PreserveSigAttribute_var;
  puVar1 = PTR_DAT_03cbeda8;
  if ((unaff_x19 != 0) && (lVar5 = *(long *)(unaff_x19 + 0x78), lVar5 != 0)) {
    iVar8 = 0;
    do {
      if (*(int *)(lVar5 + 0x18) <= iVar8) {
        return;
      }
      FUN_02215a88(lVar5,iVar8,&stack0x00000008,*(undefined8 *)puVar3);
      if (in_stack_00000008 == 0) break;
      puVar10 = (undefined8 *)(in_stack_00000008 + 0x10);
      uVar7 = FUN_025be440(*puVar10,0);
      if ((uVar7 & 1) != 0) {
        in_stack_00000000._4_4_ = iVar8;
        uVar9 = thunk_FUN_01a89a98(*(undefined8 *)puVar1,(long)&stack0x00000000 + 4);
        uVar9 = FUN_025b4d3c(*(undefined8 *)puVar4,uVar9,0);
        *puVar10 = uVar9;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar10,uVar9);
      }
      uVar9 = *puVar10;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar9 = FUN_0309bee8(uVar6,uVar9);
      *puVar10 = uVar9;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar10,uVar9);
      lVar5 = *(long *)(unaff_x19 + 0x78);
      iVar8 = iVar8 + 1;
    } while (lVar5 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


