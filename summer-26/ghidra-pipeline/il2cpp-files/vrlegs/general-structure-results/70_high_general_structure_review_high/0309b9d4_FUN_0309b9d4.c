/*
FUNCTION_NAME: FUN_0309b9d4
ENTRY_POINT: 0309b9d4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2
*/


void FUN_0309b9d4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  int local_5c;
  long local_58;
  
  puVar1 = PTR_DAT_03cc16b0;
  if ((DAT_0412b54b & 1) == 0) {
    FUN_01ab69ac(System_Runtime_InteropServices_PreserveSigAttribute_var);
    FUN_01ab69ac(
                Unity_Physics_Systems_SyncCustomPhysicsProxySystem___codegen__OnCreate_00000B42_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(PTR_DAT_03cc5058);
    FUN_01ab69ac(PTR_DAT_03cbeda8);
    FUN_01ab69ac(System_Collections_Generic_IList<T>_var);
    FUN_01ab69ac(UnityEngine_InputSystem_Composites_TwoModifiersComposite_var);
    FUN_01ab69ac(PTR_DAT_03cc16b0);
    FUN_01ab69ac(System_TimeZoneInfo_TransitionTime_var);
    DAT_0412b54b = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  if (DAT_0411f481 == '\0') {
    FUN_01ab69ac(PTR_DAT_03cc16b0);
    DAT_0411f481 = '\x01';
  }
  puVar3 = 
  Unity_Physics_Systems_SyncCustomPhysicsProxySystem___codegen__OnCreate_00000B42_PostfixBurstDelegate_var
  ;
  puVar2 = PTR_DAT_03cc5058;
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar5 = *(long *)puVar1;
  }
  uVar9 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x18);
  uVar6 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
  FUN_021e451c(uVar6,uVar9,*(undefined8 *)puVar3);
  puVar4 = System_TimeZoneInfo_TransitionTime_var;
  puVar3 = UnityEngine_InputSystem_Composites_TwoModifiersComposite_var;
  puVar2 = System_Runtime_InteropServices_PreserveSigAttribute_var;
  puVar1 = PTR_DAT_03cbeda8;
  if ((param_1 != 0) && (lVar5 = *(long *)(param_1 + 0x48), lVar5 != 0)) {
    iVar8 = 0;
    do {
      if (*(int *)(lVar5 + 0x18) <= iVar8) {
        return;
      }
      FUN_02215a88(lVar5,iVar8,&local_58,*(undefined8 *)puVar3);
      if (local_58 == 0) break;
      puVar10 = (undefined8 *)(local_58 + 0x10);
      uVar7 = FUN_025be440(*puVar10,0);
      if ((uVar7 & 1) != 0) {
        local_5c = iVar8;
        uVar9 = thunk_FUN_01a89a98(*(undefined8 *)puVar1,&local_5c);
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
      lVar5 = *(long *)(param_1 + 0x48);
      iVar8 = iVar8 + 1;
    } while (lVar5 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


