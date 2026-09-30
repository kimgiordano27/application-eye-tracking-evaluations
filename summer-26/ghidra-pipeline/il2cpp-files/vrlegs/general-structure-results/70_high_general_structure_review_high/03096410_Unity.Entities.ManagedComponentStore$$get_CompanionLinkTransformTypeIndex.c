/*
FUNCTION_NAME: Unity.Entities.ManagedComponentStore$$get_CompanionLinkTransformTypeIndex
ENTRY_POINT: 03096410
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_19;ray_or_cast_sink_hits_3;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x03096b14) */
/* WARNING: Removing unreachable block (ram,0x03096bc8) */

void Unity_Entities_ManagedComponentStore__get_CompanionLinkTransformTypeIndex(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long in_x9;
  int *piVar7;
  undefined4 *unaff_x19;
  long *plVar8;
  int unaff_w23;
  undefined8 in_stack_00000008;
  
  lVar3 = (**(code **)(param_1 + in_x9 * 0x10 + 0x138))();
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  in_stack_00000008 = FUN_027e99e8(lVar3,0);
  uVar4 = FUN_02678c30(&stack0x00000008,0);
  if ((uVar4 & 1) == 0) {
    *unaff_x19 = 4;
    *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000008;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x12,0);
    if (*(int *)(*(long *)Fusion_RpcAttribute_var + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_01f07574(unaff_x19 + 2,&stack0x00000008);
    return;
  }
  FUN_02678cfc(&stack0x00000008,0);
  lVar3 = thunk_FUN_01a89e68(*(undefined8 *)Fusion_NetworkRunnerUpdater_NetworkRunnerUpdate_var);
  FUN_03096d98();
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(unaff_x19 + 0xe);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if (*(long *)(unaff_x19 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar5 = FUN_01f6d39c(*(undefined8 *)(*(long *)(unaff_x19 + 8) + 0x60),
                       *(undefined8 *)(unaff_x19 + 0xc),*(undefined8 *)Fusion_Log_Lock_var);
  uVar5 = FUN_01f70920(uVar5,*(undefined8 *)
                              Unity_Physics_Systems_NarrowphaseSystem___codegen__OnCreate_00000B84_PostfixBurstDelegate_var
                      );
  *(undefined8 *)(lVar3 + 0x18) = uVar5;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if (*(long *)(unaff_x19 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  *(undefined1 *)(lVar3 + 0x20) = *(undefined1 *)(*(long *)(unaff_x19 + 8) + 0x80);
  *(long *)(unaff_x19 + 0x10) = lVar3;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x10,lVar3);
  plVar8 = *(long **)(unaff_x19 + 10);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar3 = *plVar8;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)UnityEngine_InputSystem_MagneticFieldSensor_var) {
        puVar6 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_0309658c;
      }
      uVar4 = uVar4 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar4 != 0);
  }
  puVar6 = (undefined8 *)
           FUN_01a472ec(plVar8,*(long *)UnityEngine_InputSystem_MagneticFieldSensor_var,0);
LAB_0309658c:
  lVar3 = (*(code *)*puVar6)(plVar8,puVar6[1]);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  in_stack_00000008 = FUN_027e99e8(lVar3,0);
  uVar4 = FUN_02678c30(&stack0x00000008,0);
  if ((uVar4 & 1) == 0) {
    *unaff_x19 = 5;
    *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000008;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x12,0);
    if (*(int *)(*(long *)Fusion_RpcAttribute_var + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_01f07574(unaff_x19 + 2,&stack0x00000008);
    return;
  }
  FUN_02678cfc(&stack0x00000008,0);
  if (*(long *)(unaff_x19 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  plVar8 = *(long **)(*(long *)(unaff_x19 + 8) + 0x68);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar3 = *plVar8;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)Fusion_NetworkRunnerUpdater_NetworkRunnerRender_var) {
        puVar6 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_0309667c;
      }
      uVar4 = uVar4 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar4 != 0);
  }
  puVar6 = (undefined8 *)
           FUN_01a472ec(plVar8,*(long *)Fusion_NetworkRunnerUpdater_NetworkRunnerRender_var,0);
LAB_0309667c:
  iVar1 = (*(code *)*puVar6)(plVar8,puVar6[1]);
  if (0 < iVar1) {
    if (*(long *)(unaff_x19 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar2 = FUN_036a3408(*(long *)(unaff_x19 + 0xe),0);
    uVar5 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb90,uVar2);
    *(undefined8 *)(unaff_x19 + 0x14) = uVar5;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if (*(long *)(unaff_x19 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    plVar8 = *(long **)(*(long *)(unaff_x19 + 8) + 0x68);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar3 = *plVar8;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)
             Unity_Physics_Systems_NarrowphaseSystem___codegen__OnUpdate_00000B85_PostfixBurstDelegate_var
           ) {
          puVar6 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03096728;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01a472ec(plVar8,*(long *)
                                  Unity_Physics_Systems_NarrowphaseSystem___codegen__OnUpdate_00000B85_PostfixBurstDelegate_var
                          ,0);
LAB_03096728:
    uVar5 = (*(code *)*puVar6)(plVar8,puVar6[1]);
    *(undefined8 *)(unaff_x19 + 0x16) = uVar5;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if (unaff_w23 != 6) goto LAB_03096938;
    in_stack_00000008 = *(undefined8 *)(unaff_x19 + 0x12);
    unaff_w23 = -1;
    *(undefined8 *)(unaff_x19 + 0x12) = 0;
    *unaff_x19 = 0xffffffff;
    do {
      FUN_02678cfc(&stack0x00000008,0);
LAB_03096938:
      plVar8 = *(long **)(unaff_x19 + 0x16);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar3 = *plVar8;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_03cbed20) {
            puVar6 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_03096994;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)FUN_01a472ec(plVar8,*(long *)PTR_DAT_03cbed20,0);
LAB_03096994:
      uVar4 = (*(code *)*puVar6)(plVar8,puVar6[1]);
      if ((uVar4 & 1) == 0) {
        if ((-1 < unaff_w23) || (plVar8 = *(long **)(unaff_x19 + 0x16), plVar8 == (long *)0x0))
        goto LAB_03096b08;
        lVar3 = *plVar8;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 == 0) goto LAB_03096ae0;
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto LAB_03096ac8;
      }
      plVar8 = *(long **)(unaff_x19 + 0x16);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar3 = *plVar8;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)Fusion_NetworkBehaviour_InterestGroupsCallback_var)
          {
            puVar6 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_03096a00;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_01a472ec(plVar8,*(long *)Fusion_NetworkBehaviour_InterestGroupsCallback_var,0);
LAB_03096a00:
      uVar5 = (*(code *)*puVar6)(plVar8,puVar6[1]);
      lVar3 = FUN_030954ec(*(undefined8 *)(unaff_x19 + 10),*(undefined8 *)(unaff_x19 + 0xe),uVar5,
                           *(undefined8 *)(unaff_x19 + 0x14));
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      in_stack_00000008 = FUN_027e99e8(lVar3,0);
      uVar4 = FUN_02678c30(&stack0x00000008,0);
      if ((uVar4 & 1) == 0) {
        *unaff_x19 = 6;
        *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000008;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x12,0);
        if (*(int *)(*(long *)Fusion_RpcAttribute_var + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01f07574(unaff_x19 + 2,&stack0x00000008);
        return;
      }
    } while( true );
  }
  goto LAB_03096b38;
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar7 = piVar7 + 4;
    if (uVar4 == 0) break;
LAB_03096ac8:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_03cbed08) {
      puVar6 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_03096afc;
    }
  }
LAB_03096ae0:
  puVar6 = (undefined8 *)FUN_01a472ec(plVar8,*(long *)PTR_DAT_03cbed08,0);
LAB_03096afc:
  (*(code *)*puVar6)(plVar8,puVar6[1]);
LAB_03096b08:
  *(undefined8 *)(unaff_x19 + 0x16) = 0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x16,0);
  *(undefined8 *)(unaff_x19 + 0x14) = 0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x14,0);
LAB_03096b38:
  lVar3 = *(long *)(unaff_x19 + 0xe);
  if (lVar3 != 0) {
    FUN_036aa804(lVar3,0,0);
    puVar6 = (undefined8 *)(unaff_x19 + 0x10);
    uVar5 = *puVar6;
    *unaff_x19 = 0xfffffffe;
    *(undefined8 *)(unaff_x19 + 0xe) = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0xe,0);
    *puVar6 = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar6,0);
    if (*(int *)(*(long *)Fusion_RpcAttribute_var + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_02145584(unaff_x19 + 2,uVar5,*(undefined8 *)System_Xml_Linq_SaveOptions_var);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


