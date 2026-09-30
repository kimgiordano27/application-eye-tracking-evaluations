/*
FUNCTION_NAME: FUN_03977644
ENTRY_POINT: 03977644
PROGRAM: vrlegs-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_11;ray_or_cast_sink_hits_3;telemetry_or_network_hits_3
*/


long FUN_03977644(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long local_48;
  
  puVar1 = Method_System_Collections_Generic_List<KeyValuePair<Point,_float>>_AddRange__;
  if ((DAT_041399af & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbe9d0);
    FUN_01ab69ac(PTR_DAT_03cc0588);
    FUN_01ab69ac(PTR_DAT_03ceb758);
    FUN_01ab69ac(PTR_DAT_03ccb9a8);
    FUN_01ab69ac(Method_System_Collections_Generic_List<KeyValuePair<Point,_float>>_Clear__);
    FUN_01ab69ac(
                Unity_Physics_Systems_NarrowphaseSystem___codegen__OnCreate_00000B84_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(PTR_DAT_03cc4ca0);
    FUN_01ab69ac(Method_System_Collections_Generic_List<KeyValuePair<Point,_float>>_GetEnumerator__)
    ;
    FUN_01ab69ac(PTR_DAT_03ccb9b0);
    FUN_01ab69ac(Method_System_Collections_Generic_List<KeyValuePair<Point,_float>>_Sort__);
    FUN_01ab69ac(PTR_DAT_03cbe000);
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(Method_System_Collections_Generic_List<KeyValuePair<Point,_float>>_get_Count__);
    FUN_01ab69ac(Method_System_Collections_Generic_List<KeyValuePair<Point,_float>>_get_Item__);
    FUN_01ab69ac(Method_System_Collections_Generic_List<KeyValuePair<Point,_float>>_AddRange__);
    FUN_01ab69ac(Method_System_Collections_Generic_List<KeyValuePair<PropertyName,_object>>__ctor__)
    ;
    FUN_01ab69ac(Method_System_Collections_Generic_List<KeyValuePair<PropertyName,_object>>_Add__);
    DAT_041399af = 1;
  }
  lVar7 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
  FUN_027b3d9c(lVar7,0);
  if (lVar7 == 0) goto LAB_03977ba0;
  *(undefined8 *)(lVar7 + 0x10) = param_3;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(lVar7 + 0x10),param_3);
  puVar3 = PTR_DAT_03ceb758;
  puVar2 = PTR_DAT_03cc0588;
  puVar1 = PTR_DAT_03cbdf88;
  if (param_1 == 0) goto LAB_03977ba0;
  FUN_01f49730(param_1,&local_48,*(undefined8 *)PTR_DAT_03cbe9d0);
  lVar11 = local_48;
  FUN_01f49730(param_1,&local_48,*(undefined8 *)puVar2);
  lVar4 = local_48;
  FUN_01f49730(param_1,&local_48,*(undefined8 *)puVar3);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar8 = FUN_036cee6c(lVar11,0,0);
  if ((uVar8 & 1) == 0) {
LAB_039778fc:
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar8 = FUN_036cee6c(local_48,0,0);
    if ((uVar8 & 1) == 0) {
      return 0;
    }
    if (local_48 == 0) goto LAB_03977ba0;
    uVar9 = FUN_03693c80(local_48,0);
    uVar10 = thunk_FUN_01a89e68(*(undefined8 *)
                                 Method_System_Collections_Generic_List<KeyValuePair<Point,_float>>_GetEnumerator__
                               );
    FUN_021de1ac(uVar10,lVar7,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<KeyValuePair<Point,_float>>_get_Item__,0);
    uVar9 = FUN_01f6d39c(uVar9,uVar10,
                         *(undefined8 *)
                          Method_System_Collections_Generic_List<KeyValuePair<Point,_float>>_Clear__
                        );
    uVar9 = FUN_01f70920(uVar9,*(undefined8 *)
                                Unity_Physics_Systems_NarrowphaseSystem___codegen__OnCreate_00000B84_PostfixBurstDelegate_var
                        );
    thunk_FUN_03692878(local_48,uVar9,0);
    lVar7 = FUN_036a0ed4(local_48,0);
    if (lVar7 == 0) goto LAB_03977ba0;
    iVar5 = FUN_036a2ca8(lVar7,0);
    if (0 < iVar5) {
      lVar11 = thunk_FUN_01a89e68(*(undefined8 *)
                                   Method_System_Collections_Generic_List<KeyValuePair<PropertyName,_object>>_Add__
                                 );
      FUN_027b3d9c(lVar11,0);
      lVar7 = FUN_036a0ed4(local_48,0);
      if (lVar11 == 0) goto LAB_03977ba0;
      plVar12 = (long *)(lVar11 + 0x10);
      *plVar12 = lVar7;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar12,lVar7);
      uVar9 = FUN_0304f638(param_1,param_2,0);
      uVar10 = FUN_03693c80(local_48,0);
      lVar7 = thunk_FUN_01a89e68(*(undefined8 *)
                                  Method_System_Collections_Generic_List<KeyValuePair<Point,_float>>_Sort__
                                );
      FUN_039775e4(lVar7,uVar9,param_1,uVar10);
      if (lVar7 == 0) goto LAB_03977ba0;
      *(long *)(lVar7 + 0x18) = local_48;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((long *)(lVar7 + 0x18),local_48);
      uVar9 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbe000);
      FUN_036a1b5c(uVar9,0);
      *(undefined8 *)(lVar7 + 0x20) = uVar9;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(lVar7 + 0x20),uVar9);
      if (*plVar12 == 0) goto LAB_03977ba0;
      uVar6 = FUN_036a2ca8(*plVar12,0);
      uVar9 = FUN_02b34428(0,uVar6,0);
      uVar10 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03ccb9b0);
      FUN_021de1ac(uVar10,lVar11,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<KeyValuePair<PropertyName,_object>>__ctor__
                   ,0);
      uVar9 = FUN_01f6d39c(uVar9,uVar10,*(undefined8 *)PTR_DAT_03ccb9a8);
      uVar9 = FUN_01f70920(uVar9,*(undefined8 *)PTR_DAT_03cc4ca0);
      *(undefined8 *)(lVar7 + 0x28) = uVar9;
      goto LAB_03977b80;
    }
    uVar9 = FUN_0304f638(param_1,param_2,0);
    uVar10 = FUN_03693c80(local_48,0);
    lVar7 = thunk_FUN_01a89e68(*(undefined8 *)
                                Method_System_Collections_Generic_List<KeyValuePair<Point,_float>>_Sort__
                              );
    FUN_039775e4(lVar7,uVar9,param_1,uVar10);
    uVar9 = FUN_036a0ed4(local_48,0);
  }
  else {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar8 = FUN_036cee6c(lVar4,0,0);
    if ((uVar8 & 1) == 0) goto LAB_039778fc;
    if (lVar4 == 0) goto LAB_03977ba0;
    uVar9 = FUN_03693c80(lVar4,0);
    uVar10 = thunk_FUN_01a89e68(*(undefined8 *)
                                 Method_System_Collections_Generic_List<KeyValuePair<Point,_float>>_GetEnumerator__
                               );
    FUN_021de1ac(uVar10,lVar7,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<KeyValuePair<Point,_float>>_get_Count__,0);
    uVar9 = FUN_01f6d39c(uVar9,uVar10,
                         *(undefined8 *)
                          Method_System_Collections_Generic_List<KeyValuePair<Point,_float>>_Clear__
                        );
    uVar9 = FUN_01f70920(uVar9,*(undefined8 *)
                                Unity_Physics_Systems_NarrowphaseSystem___codegen__OnCreate_00000B84_PostfixBurstDelegate_var
                        );
    thunk_FUN_03692878(lVar4,uVar9,0);
    uVar9 = FUN_0304f638(param_1,param_2,0);
    uVar10 = FUN_03693c80(lVar4,0);
    lVar7 = thunk_FUN_01a89e68(*(undefined8 *)
                                Method_System_Collections_Generic_List<KeyValuePair<Point,_float>>_Sort__
                              );
    FUN_039775e4(lVar7,uVar9,param_1,uVar10);
    if (lVar11 == 0) goto LAB_03977ba0;
    uVar9 = FUN_036a0b4c(lVar11,0);
  }
  if (lVar7 != 0) {
    *(undefined8 *)(lVar7 + 0x20) = uVar9;
LAB_03977b80:
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    return lVar7;
  }
LAB_03977ba0:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


