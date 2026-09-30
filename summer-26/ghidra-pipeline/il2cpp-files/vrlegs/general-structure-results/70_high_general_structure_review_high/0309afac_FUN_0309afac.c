/*
FUNCTION_NAME: FUN_0309afac
ENTRY_POINT: 0309afac
PROGRAM: vrlegs-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2
*/


void FUN_0309afac(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined1 auVar10 [16];
  long local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  long local_58;
  
  if ((DAT_0412b54e & 1) == 0) {
    FUN_01ab69ac(Unity_Physics_Authoring_CleanPhysicsDebugDataSystem_Editor_var);
    FUN_01ab69ac(UnityEngine_InputSystem_LowLevel_IInputStateTypeInfo_var);
    FUN_01ab69ac(System_Globalization_NumberFormatInfo_var);
    FUN_01ab69ac(PTR_DAT_03d02aa8);
    FUN_01ab69ac(PTR_DAT_03cc9c00);
    FUN_01ab69ac(
                Unity_Entities_StructuralChange_SetSharedComponentDataIndexWithBurst_00000F95_PostfixBurstDelegate_var
                );
    DAT_0412b54e = 1;
  }
  local_78._0_8_ = 0;
  local_78._8_8_ = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  local_68 = FUN_03043750(param_1,0);
  puVar5 = 
  Unity_Entities_StructuralChange_SetSharedComponentDataIndexWithBurst_00000F95_PostfixBurstDelegate_var
  ;
  puVar4 = System_Globalization_NumberFormatInfo_var;
  puVar3 = Unity_Physics_Authoring_CleanPhysicsDebugDataSystem_Editor_var;
  puVar2 = PTR_DAT_03d02aa8;
  puVar1 = PTR_DAT_03cc9c00;
  if ((param_2 != 0) && (lVar6 = *(long *)(param_2 + 0x40), lVar6 != 0)) {
    iVar9 = 0;
    do {
      if (*(int *)(lVar6 + 0x18) <= iVar9) {
        return;
      }
      FUN_02215a88(lVar6,iVar9,&local_c0,*(undefined8 *)puVar4);
      if (local_c0 == 0) break;
      uVar7 = FUN_025be440(*(undefined8 *)(local_c0 + 0x10),0);
      if ((uVar7 & 1) != 0) {
        auVar10 = FUN_0304a834(local_68,*(undefined8 *)puVar2,0);
        local_78 = auVar10;
        auVar10 = FUN_0304ad0c(local_78,iVar9,0);
        local_78 = auVar10;
        auVar10 = FUN_0304a834(local_78,*(undefined8 *)puVar5,0);
        local_78 = auVar10;
        auVar10 = FUN_0304a834(local_78,*(undefined8 *)puVar1,0);
        local_78 = auVar10;
        FUN_030455d4(&local_c0,local_78,0);
        uStack_98 = uStack_b8;
        local_a0 = local_c0;
        uStack_88 = uStack_a8;
        uStack_90 = uStack_b0;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar8 = FUN_03049a68(&local_a0,0);
        uVar7 = FUN_025be440(uVar8,0);
        if ((uVar7 & 1) == 0) {
          if (*(long *)(param_2 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          FUN_02215a88(*(long *)(param_2 + 0x40),iVar9,&local_58,*(undefined8 *)puVar4);
          if (local_58 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          *(undefined8 *)(local_58 + 0x10) = uVar8;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    ((undefined8 *)(local_58 + 0x10),uVar8);
        }
      }
      lVar6 = *(long *)(param_2 + 0x40);
      iVar9 = iVar9 + 1;
    } while (lVar6 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


