/*
FUNCTION_NAME: Unity.Entities.ManagedComponentStore$$.ctor
ENTRY_POINT: 030964fc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_14;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x03096b14) */
/* WARNING: Removing unreachable block (ram,0x03096bc8) */

void Unity_Entities_ManagedComponentStore___ctor(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long in_x9;
  int *piVar7;
  undefined4 *unaff_x19;
  long *plVar8;
  int unaff_w23;
  undefined8 in_stack_00000008;
  
  piVar7 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar7 + -2) == param_3) {
      puVar3 = (undefined8 *)(param_1 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_0309658c;
    }
    in_x9 = in_x9 + -1;
    piVar7 = piVar7 + 4;
  } while (in_x9 != 0);
  puVar3 = (undefined8 *)FUN_01a472ec();
LAB_0309658c:
  lVar4 = (*(code *)*puVar3)();
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  in_stack_00000008 = FUN_027e99e8(lVar4,0);
  uVar5 = FUN_02678c30(&stack0x00000008,0);
  if ((uVar5 & 1) == 0) {
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
  lVar4 = *plVar8;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)Fusion_NetworkRunnerUpdater_NetworkRunnerRender_var) {
        puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_0309667c;
      }
      uVar5 = uVar5 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_01a472ec(plVar8,*(long *)Fusion_NetworkRunnerUpdater_NetworkRunnerRender_var,0);
LAB_0309667c:
  iVar1 = (*(code *)*puVar3)(plVar8,puVar3[1]);
  if (0 < iVar1) {
    if (*(long *)(unaff_x19 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar2 = FUN_036a3408(*(long *)(unaff_x19 + 0xe),0);
    uVar6 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb90,uVar2);
    *(undefined8 *)(unaff_x19 + 0x14) = uVar6;
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
                    /* try { // try from 030966d4 to 03196787 has its CatchHandler @ 030966d4
                       catch() { ... } // from try @ 030966d4 with catch @ 030966d4
                       catch() { ... } // from try @ 030968e0 with catch @ 030966d4
                       catch() { ... } // from try @ 03096940 with catch @ 030966d4
                       catch() { ... } // from try @ 03096994 with catch @ 030966d4
                       catch() { ... } // from try @ 03096a08 with catch @ 030966d4 */
    lVar4 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)
             Unity_Physics_Systems_NarrowphaseSystem___codegen__OnUpdate_00000B85_PostfixBurstDelegate_var
           ) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03096728;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01a472ec(plVar8,*(long *)
                                  Unity_Physics_Systems_NarrowphaseSystem___codegen__OnUpdate_00000B85_PostfixBurstDelegate_var
                          ,0);
LAB_03096728:
    uVar6 = (*(code *)*puVar3)(plVar8,puVar3[1]);
    *(undefined8 *)(unaff_x19 + 0x16) = uVar6;
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
      lVar4 = *plVar8;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_03cbed20) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_03096994;
          }
          uVar5 = uVar5 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_01a472ec(plVar8,*(long *)PTR_DAT_03cbed20,0);
LAB_03096994:
      uVar5 = (*(code *)*puVar3)(plVar8,puVar3[1]);
      if ((uVar5 & 1) == 0) {
        if ((-1 < unaff_w23) || (plVar8 = *(long **)(unaff_x19 + 0x16), plVar8 == (long *)0x0))
        goto LAB_03096b08;
        lVar4 = *plVar8;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 == 0) goto LAB_03096ae0;
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        goto LAB_03096ac8;
      }
      plVar8 = *(long **)(unaff_x19 + 0x16);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar4 = *plVar8;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)Fusion_NetworkBehaviour_InterestGroupsCallback_var)
          {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_03096a00;
          }
          uVar5 = uVar5 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_01a472ec(plVar8,*(long *)Fusion_NetworkBehaviour_InterestGroupsCallback_var,0);
LAB_03096a00:
      uVar6 = (*(code *)*puVar3)(plVar8,puVar3[1]);
      lVar4 = FUN_030954ec(*(undefined8 *)(unaff_x19 + 10),*(undefined8 *)(unaff_x19 + 0xe),uVar6,
                           *(undefined8 *)(unaff_x19 + 0x14));
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      in_stack_00000008 = FUN_027e99e8(lVar4,0);
      uVar5 = FUN_02678c30(&stack0x00000008,0);
      if ((uVar5 & 1) == 0) {
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
    uVar5 = uVar5 - 1;
    piVar7 = piVar7 + 4;
    if (uVar5 == 0) break;
LAB_03096ac8:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_03cbed08) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_03096afc;
    }
  }
LAB_03096ae0:
  puVar3 = (undefined8 *)FUN_01a472ec(plVar8,*(long *)PTR_DAT_03cbed08,0);
LAB_03096afc:
  (*(code *)*puVar3)(plVar8,puVar3[1]);
LAB_03096b08:
  *(undefined8 *)(unaff_x19 + 0x16) = 0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x16,0);
  *(undefined8 *)(unaff_x19 + 0x14) = 0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x14,0);
LAB_03096b38:
  lVar4 = *(long *)(unaff_x19 + 0xe);
  if (lVar4 != 0) {
    FUN_036aa804(lVar4,0,0);
    puVar3 = (undefined8 *)(unaff_x19 + 0x10);
    uVar6 = *puVar3;
    *unaff_x19 = 0xfffffffe;
    *(undefined8 *)(unaff_x19 + 0xe) = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0xe,0);
    *puVar3 = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar3,0);
    if (*(int *)(*(long *)Fusion_RpcAttribute_var + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_02145584(unaff_x19 + 2,uVar6,*(undefined8 *)System_Xml_Linq_SaveOptions_var);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


