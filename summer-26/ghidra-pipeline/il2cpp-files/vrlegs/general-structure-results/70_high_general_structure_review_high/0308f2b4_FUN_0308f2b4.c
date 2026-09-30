/*
FUNCTION_NAME: FUN_0308f2b4
ENTRY_POINT: 0308f2b4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_7;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_0308f2b4(undefined8 *param_1,long param_2,long param_3,undefined4 param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if ((DAT_0412b529 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cd8108);
    DAT_0412b529 = 1;
  }
  uVar2 = FUN_03096f6c(param_2);
  if ((uVar2 & 1) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  if ((((param_3 != 0) && (*(long *)(param_3 + 0x28) != 0)) && (param_2 != 0)) &&
     ((*(long *)(param_2 + 0x18) != 0 &&
      (lVar3 = *(long *)(*(long *)(param_3 + 0x28) + 0x28), lVar3 != 0)))) {
    FUN_02215a88(lVar3,*(undefined4 *)(*(long *)(param_2 + 0x18) + 0x24),&local_48,
                 *(undefined8 *)PTR_DAT_03cd8108);
    lVar3 = CONCAT44(uStack_44,local_48);
    if (lVar3 != 0) {
      iVar1 = *(int *)(lVar3 + 0x28);
      if (iVar1 == 0x1406) {
        FUN_030975ac(&local_48,param_2,param_3,param_4);
      }
      else if (iVar1 == 0x1403) {
        FUN_030972ac(&local_48,param_2,param_3,param_4);
      }
      else {
        if (iVar1 != 0x1401) {
          FUN_018748a8(lVar3);
          local_48 = *(undefined4 *)(lVar3 + 0x28);
          uVar4 = thunk_FUN_01a6ca08(System_NullReferenceException_var);
          uVar4 = thunk_FUN_01a89a98(uVar4,&local_48);
          uVar5 = thunk_FUN_01a6ca08(
                                    Unity_Physics_Systems_BroadphaseSystem___codegen__OnUpdate_00000B7C_PostfixBurstDelegate_var
                                    );
          uVar4 = FUN_025b4d3c(uVar5,uVar4,0);
          thunk_FUN_01a6ca08(PTR_DAT_03cc74c8);
          uVar5 = thunk_FUN_01a89e68();
          FUN_0276e9b0(uVar5,uVar4,0);
          uVar4 = thunk_FUN_01a6ca08(
                                    Unity_Physics_GraphicsIntegration_BufferInterpolatedRigidBodiesMotion___codegen__OnUpdate_00000A44_PostfixBurstDelegate_var
                                    );
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar5,uVar4);
        }
        FUN_03096f94(&local_48,param_2,param_3,param_4);
      }
      param_1[2] = local_38;
      param_1[1] = uStack_40;
      *param_1 = CONCAT44(uStack_44,local_48);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


