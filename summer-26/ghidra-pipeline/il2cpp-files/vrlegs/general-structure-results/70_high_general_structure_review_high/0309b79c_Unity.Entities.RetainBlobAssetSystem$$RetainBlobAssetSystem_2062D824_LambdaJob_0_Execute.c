/*
FUNCTION_NAME: Unity.Entities.RetainBlobAssetSystem$$RetainBlobAssetSystem_2062D824_LambdaJob_0_Execute
ENTRY_POINT: 0309b79c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_6;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Entities_RetainBlobAssetSystem__RetainBlobAssetSystem_2062D824_LambdaJob_0_Execute(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  int in_w8;
  long unaff_x19;
  long *unaff_x20;
  int iVar9;
  long unaff_x21;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  int iStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  if (in_w8 == 0) {
    FUN_01ab69ac(PTR_DAT_03cc16b0);
    *(undefined1 *)(unaff_x21 + 0x481) = 1;
  }
  puVar2 = 
  Unity_Physics_Systems_SyncCustomPhysicsProxySystem___codegen__OnCreate_00000B42_PostfixBurstDelegate_var
  ;
  puVar1 = PTR_DAT_03cc5058;
  lVar6 = *unaff_x20;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar6 = *unaff_x20;
  }
  uVar10 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x18);
  uVar7 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
  FUN_021e451c(uVar7,uVar10,*(undefined8 *)puVar2);
  puVar5 = Mono_CSharp_TimeReporter_TimerType_var;
  puVar4 = 
  Unity_Physics_Systems_SyncCustomPhysicsProxySystem___codegen__OnUpdate_00000B43_PostfixBurstDelegate_var
  ;
  puVar3 = System_Runtime_InteropServices_PreserveSigAttribute_var;
  puVar2 = System_Globalization_NumberFormatInfo_var;
  puVar1 = PTR_DAT_03cbeda8;
  if ((unaff_x19 != 0) && (lVar6 = *(long *)(unaff_x19 + 0x30), lVar6 != 0)) {
    iVar9 = 0;
    do {
      if (*(int *)(lVar6 + 0x18) <= iVar9) {
        return;
      }
      FUN_02215a88(lVar6,iVar9,&stack0x00000008,*(undefined8 *)puVar4);
      lVar6 = CONCAT44(uStack000000000000000c,iStack0000000000000008);
      if (lVar6 == 0) break;
      uVar8 = FUN_0304e7e8(*(undefined8 *)(lVar6 + 0x14),0);
      if ((uVar8 & 1) != 0) {
        lVar11 = *(long *)(unaff_x19 + 0x40);
        FUN_022412e0((undefined8 *)(lVar6 + 0x14),&stack0x00000008,*(undefined8 *)PTR_DAT_03cc1798);
        if (lVar11 == 0) break;
        FUN_02215a88(lVar11,iStack0000000000000008,&stack0x00000008,*(undefined8 *)puVar2);
        lVar11 = CONCAT44(uStack000000000000000c,iStack0000000000000008);
        if (lVar11 == 0) break;
        uVar8 = FUN_025be440(*(undefined8 *)(lVar11 + 0x18),0);
        if ((uVar8 & 1) == 0) {
          if (*(long *)(lVar11 + 0x18) == 0) break;
          uVar8 = FUN_025bd594(*(long *)(lVar11 + 0x18),*(undefined8 *)PTR_DAT_03d29258,0);
          if ((uVar8 & 1) == 0) {
            uVar10 = *(undefined8 *)(lVar11 + 0x18);
            if (*(int *)(*(long *)PTR_DAT_03cc1608 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar10 = FUN_026e66e0(uVar10,0);
            *(undefined8 *)(lVar6 + 0x30) = uVar10;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          }
        }
        puVar12 = (undefined8 *)(lVar6 + 0x30);
        uVar8 = FUN_025be440(*puVar12,0);
        if ((uVar8 & 1) != 0) {
          *puVar12 = *(undefined8 *)(lVar11 + 0x10);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar12);
        }
      }
      puVar12 = (undefined8 *)(lVar6 + 0x30);
      uVar8 = FUN_025be440(*puVar12,0);
      if ((uVar8 & 1) != 0) {
        iStack0000000000000008 = iVar9;
        uVar10 = thunk_FUN_01a89a98(*(undefined8 *)puVar1,&stack0x00000008);
        uVar10 = FUN_025b4d3c(*(undefined8 *)puVar5,uVar10,0);
        *puVar12 = uVar10;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar12,uVar10);
      }
      uVar10 = *puVar12;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar10 = FUN_0309bee8(uVar7,uVar10);
      *puVar12 = uVar10;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar12,uVar10);
      lVar6 = *(long *)(unaff_x19 + 0x30);
      iVar9 = iVar9 + 1;
    } while (lVar6 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


