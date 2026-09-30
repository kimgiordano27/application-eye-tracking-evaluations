/*
FUNCTION_NAME: FUN_0308f460
ENTRY_POINT: 0308f460
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_9;ray_or_cast_sink_hits_21;telemetry_or_network_hits_11;frame_or_lifecycle_behavior
*/


long FUN_0308f460(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long local_48;
  
  if ((DAT_0412b52d & 1) == 0) {
    FUN_01ab69ac(
                Unity_Physics_Systems_BuildPhysicsWorld___codegen__OnCreate_00000A86_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(System_Variant_var);
    FUN_01ab69ac(PTR_DAT_03cd8108);
    FUN_01ab69ac(
                Unity_Physics_Systems_BuildPhysicsWorld___codegen__OnDestroy_00000A88_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(
                Unity_Physics_Systems_BuildPhysicsWorld___codegen__OnUpdate_00000A87_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(
                Unity_Physics_Systems_BuildPhysicsWorldDependencyResolver___codegen__OnCreate_00000A76_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(
                Unity_Physics_Systems_BuildPhysicsWorldDependencyResolver___codegen__OnUpdate_00000A77_PostfixBurstDelegate_var
                );
    DAT_0412b52d = 1;
  }
  uVar2 = FUN_03097c94(param_2);
  puVar1 = 
  Unity_Physics_Systems_BuildPhysicsWorld___codegen__OnDestroy_00000A88_PostfixBurstDelegate_var;
  if ((((param_1 != 0) && (*(long *)(param_1 + 0x28) != 0)) && (param_3 != 0)) &&
     (*(long *)(param_3 + 0x18) != 0)) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 0x28);
    if (lVar3 != 0) {
      FUN_02215a88(lVar3,*(undefined4 *)(*(long *)(param_3 + 0x18) + 0x10),&local_48,
                   *(undefined8 *)PTR_DAT_03cd8108);
      lVar3 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
      FUN_027b3d9c(lVar3,0);
      if ((local_48 != 0) &&
         (lVar4 = FUN_0309786c(param_3,param_1,*(undefined4 *)(local_48 + 0x2c)), lVar3 != 0)) {
        plVar7 = (long *)(lVar3 + 0x10);
        *plVar7 = lVar4;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar7,lVar4);
        uVar5 = FUN_03097904(param_3,param_1,*(undefined4 *)(local_48 + 0x2c));
        *(undefined8 *)(lVar3 + 0x18) = uVar5;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if (*plVar7 == 0 && ((uVar2 ^ 0xffffffff) & 1) == 0) {
          lVar3 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
          FUN_027b3d9c(lVar3,0);
          if (lVar3 == 0) goto LAB_0308f6f8;
          *(undefined1 *)(lVar3 + 0x20) = 1;
          puVar1 = 
          Unity_Physics_Systems_BuildPhysicsWorldDependencyResolver___codegen__OnUpdate_00000A77_PostfixBurstDelegate_var
          ;
          lVar4 = *(long *)
                   Unity_Physics_Systems_BuildPhysicsWorldDependencyResolver___codegen__OnUpdate_00000A77_PostfixBurstDelegate_var
          ;
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar4 = *(long *)puVar1;
          }
          lVar6 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
          if (lVar6 == 0) {
            if (*(int *)(lVar4 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar4 = *(long *)puVar1;
            }
            uVar5 = **(undefined8 **)(lVar4 + 0xb8);
            lVar6 = thunk_FUN_01a89e68(*(undefined8 *)System_Variant_var);
            FUN_0308b38c(lVar6,uVar5,
                         *(undefined8 *)
                          Unity_Physics_Systems_BuildPhysicsWorld___codegen__OnUpdate_00000A87_PostfixBurstDelegate_var
                        );
            plVar7 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
            *plVar7 = lVar6;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar7,lVar6);
          }
          *(long *)(lVar3 + 0x10) = lVar6;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    ((long *)(lVar3 + 0x10),lVar6);
          lVar4 = *(long *)puVar1;
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar4 = *(long *)puVar1;
          }
          lVar6 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
          if (lVar6 == 0) {
            if (*(int *)(lVar4 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar4 = *(long *)puVar1;
            }
            uVar5 = **(undefined8 **)(lVar4 + 0xb8);
            lVar6 = thunk_FUN_01a89e68(*(undefined8 *)
                                        Unity_Physics_Systems_BuildPhysicsWorld___codegen__OnCreate_00000A86_PostfixBurstDelegate_var
                                      );
            FUN_03097e48(lVar6,uVar5,
                         *(undefined8 *)
                          Unity_Physics_Systems_BuildPhysicsWorldDependencyResolver___codegen__OnCreate_00000A76_PostfixBurstDelegate_var
                        );
            plVar7 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
            *plVar7 = lVar6;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar7,lVar6);
          }
          *(long *)(lVar3 + 0x18) = lVar6;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    ((long *)(lVar3 + 0x18),lVar6);
        }
        return lVar3;
      }
    }
  }
LAB_0308f6f8:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


