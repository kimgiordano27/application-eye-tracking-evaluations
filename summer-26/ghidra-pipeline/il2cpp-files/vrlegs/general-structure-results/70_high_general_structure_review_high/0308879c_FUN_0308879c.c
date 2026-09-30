/*
FUNCTION_NAME: FUN_0308879c
ENTRY_POINT: 0308879c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_3
*/


void FUN_0308879c(long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_0412b4d0 & 1) == 0) {
    FUN_01ab69ac(UnityEngine_Timeline_TrackBindingTypeAttribute_var);
    FUN_01ab69ac(UnityEngine_InputSystem_Controls_TouchControl_var);
    FUN_01ab69ac(PTR_DAT_03d02a60);
    FUN_01ab69ac(long_var);
    DAT_0412b4d0 = 1;
  }
  if (*(long *)(param_1 + 0x10) == 0)
  goto 
  Unity_Entities_ChunkIterationUtility_GatherEntitiesWithFilter_00000A31_PostfixBurstDelegate__Invoke
  ;
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x40);
  uVar2 = thunk_FUN_025bd1c0(uVar4,*(undefined8 *)UnityEngine_InputSystem_Controls_TouchControl_var,
                             0);
  if ((uVar2 & 1) == 0) {
    uVar2 = thunk_FUN_025bd1c0(uVar4,*(undefined8 *)PTR_DAT_03d02a60,0);
    if ((uVar2 & 1) != 0) {
      uVar4 = 2;
      goto LAB_03088848;
    }
    uVar2 = thunk_FUN_025bd1c0(uVar4,*(undefined8 *)long_var,0);
    if ((uVar2 & 1) == 0) goto LAB_03088818;
    FUN_039a67d0(param_2,1,0);
    puVar1 = UnityEngine_Timeline_TrackBindingTypeAttribute_var;
    lVar3 = *(long *)UnityEngine_Timeline_TrackBindingTypeAttribute_var;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar3 = *(long *)puVar1;
    }
    if ((*(long *)(param_1 + 0x10) == 0) || (param_2 == 0))
    goto 
    Unity_Entities_ChunkIterationUtility_GatherEntitiesWithFilter_00000A31_PostfixBurstDelegate__Invoke
    ;
    FUN_0369d118(*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x48),param_2,
                 **(undefined4 **)(lVar3 + 0xb8),0);
  }
  else {
LAB_03088818:
    uVar4 = 0;
LAB_03088848:
    FUN_039a67d0(param_2,uVar4,0);
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_039a682c(param_2,(ulong)(*(char *)(*(long *)(param_1 + 0x10) + 0x4c) == '\0') << 1,0);
    if (*(long *)(param_1 + 0x18) != 0) {
      uVar2 = FUN_03077608(*(long *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20),0);
      if ((uVar2 & 1) != 0) {
        FUN_039a6888(param_2,1,0);
      }
      FUN_039a69e0(param_2,1,0);
      return;
    }
  }
Unity_Entities_ChunkIterationUtility_GatherEntitiesWithFilter_00000A31_PostfixBurstDelegate__Invoke:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


