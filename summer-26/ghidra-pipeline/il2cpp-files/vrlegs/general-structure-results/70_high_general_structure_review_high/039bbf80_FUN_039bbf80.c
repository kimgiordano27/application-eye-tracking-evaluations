/*
FUNCTION_NAME: FUN_039bbf80
ENTRY_POINT: 039bbf80
PROGRAM: vrlegs-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_10;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_039bbf80(long param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long local_68;
  
  puVar1 = Method_System_Collections_Generic_List<DataRelation>_Add__;
  if ((DAT_04139b9d & 1) == 0) {
    FUN_01ab69ac(System_Action<PromoCodeTaskPostData>_TypeInfo);
    FUN_01ab69ac(Method_System_Collections_Generic_List<DataRelation>_GetEnumerator__);
    FUN_01ab69ac(Method_System_Collections_Generic_List<DataRelation>_ToArray__);
    FUN_01ab69ac(Method_System_Collections_Generic_List<DataRelation>_get_Count__);
    FUN_01ab69ac(Method_System_Collections_Generic_List<DataRow>__ctor__);
    FUN_01ab69ac(Method_System_Collections_Generic_List<DataRow>_Contains__);
    FUN_01ab69ac(Method_System_Collections_Generic_List<DataRow>_GetEnumerator__);
    FUN_01ab69ac(Method_System_Collections_Generic_List<DataRow>_InsertRange__);
    FUN_01ab69ac(Method_System_Collections_Generic_List<DataRow>_get_Count__);
    FUN_01ab69ac(Method_System_Collections_Generic_List<DataTable>__ctor__);
    FUN_01ab69ac(System_Action<Task<IPAddress[]>>_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03d01e30);
    FUN_01ab69ac(Method_System_Collections_Generic_List<Collider>_GetEnumerator__);
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(Method_System_Collections_Generic_List<DataTable>__ctor__);
    FUN_01ab69ac(Method_System_Collections_Generic_List<DataTable>_Add__);
    FUN_01ab69ac(Method_System_Collections_Generic_List<DataTable>_Contains__);
    FUN_01ab69ac(Method_System_Collections_Generic_List<DataTable>_GetEnumerator__);
    FUN_01ab69ac(Method_System_Collections_Generic_List<DataTable>_ToArray__);
    FUN_01ab69ac(Method_System_Collections_Generic_List<DataTable>_get_Count__);
    FUN_01ab69ac(Method_System_Collections_Generic_List<DataRelation>_Add__);
    FUN_01ab69ac(Method_System_Collections_Generic_List<DataColumn>_get_Count__);
    DAT_04139b9d = 1;
  }
  lVar6 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
  FUN_027b3d9c(lVar6,0);
  if (lVar6 != 0) {
    *(undefined8 *)(lVar6 + 0x18) = param_4;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(lVar6 + 0x18),param_4);
    puVar2 = Method_System_Collections_Generic_List<DataColumn>_get_Count__;
    puVar1 = System_Action<PromoCodeTaskPostData>_TypeInfo;
    if (param_2 == 0) goto LAB_039bc530;
    FUN_01f7e3e4(param_2,&local_68,*(undefined8 *)PTR_DAT_03d01e30);
    *(long *)(lVar6 + 0x10) = local_68;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    uVar7 = FUN_01f3dbf4(*(undefined8 *)puVar1);
    lVar10 = *(long *)puVar2;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar10);
      lVar10 = *(long *)puVar2;
    }
    puVar5 = Method_System_Collections_Generic_List<DataTable>_GetEnumerator__;
    puVar4 = Method_System_Collections_Generic_List<DataRow>_InsertRange__;
    puVar3 = Method_System_Collections_Generic_List<DataRelation>_get_Count__;
    puVar1 = Method_System_Collections_Generic_List<DataRelation>_GetEnumerator__;
    lVar11 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
    if (lVar11 == 0) {
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar10);
        lVar10 = *(long *)puVar2;
      }
      uVar12 = **(undefined8 **)(lVar10 + 0xb8);
      lVar11 = thunk_FUN_01a89e68(*(undefined8 *)
                                   Method_System_Collections_Generic_List<DataRow>_get_Count__);
      FUN_021de1ac(lVar11,uVar12,
                   *(undefined8 *)Method_System_Collections_Generic_List<DataTable>__ctor__,0);
      plVar8 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
      *plVar8 = lVar11;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar8,lVar11);
    }
    uVar7 = FUN_01f71424(uVar7,lVar11,*(undefined8 *)puVar3);
    uVar12 = thunk_FUN_01a89e68(*(undefined8 *)puVar4);
    FUN_021de1ac(uVar12,lVar6,*(undefined8 *)puVar5,0);
    uVar7 = FUN_01f6d39c(uVar7,uVar12,*(undefined8 *)puVar1);
    lVar10 = *(long *)puVar2;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar10);
      lVar10 = *(long *)puVar2;
    }
    puVar4 = Method_System_Collections_Generic_List<DataTable>_ToArray__;
    puVar3 = Method_System_Collections_Generic_List<DataTable>__ctor__;
    puVar1 = Method_System_Collections_Generic_List<DataRow>__ctor__;
    lVar11 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x10);
    if (lVar11 == 0) {
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar10);
        lVar10 = *(long *)puVar2;
      }
      uVar12 = **(undefined8 **)(lVar10 + 0xb8);
      lVar11 = thunk_FUN_01a89e68(*(undefined8 *)puVar3);
      FUN_021de1ac(lVar11,uVar12,
                   *(undefined8 *)Method_System_Collections_Generic_List<DataTable>_Add__,0);
      plVar8 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
      *plVar8 = lVar11;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar8,lVar11);
    }
    uVar7 = FUN_01f71424(uVar7,lVar11,*(undefined8 *)puVar1);
    uVar12 = thunk_FUN_01a89e68(*(undefined8 *)puVar3);
    FUN_021de1ac(uVar12,lVar6,*(undefined8 *)puVar4,0);
    uVar7 = FUN_01f71424(uVar7,uVar12,*(undefined8 *)puVar1);
    lVar10 = *(long *)puVar2;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar10);
      lVar10 = *(long *)puVar2;
    }
    puVar4 = Method_System_Collections_Generic_List<DataTable>_get_Count__;
    puVar3 = Method_System_Collections_Generic_List<DataRow>_Contains__;
    puVar1 = Method_System_Collections_Generic_List<DataRelation>_ToArray__;
    lVar11 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x18);
    if (lVar11 == 0) {
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar10);
        lVar10 = *(long *)puVar2;
      }
      uVar12 = **(undefined8 **)(lVar10 + 0xb8);
      lVar11 = thunk_FUN_01a89e68(*(undefined8 *)
                                   Method_System_Collections_Generic_List<DataRow>_GetEnumerator__);
      FUN_021de1ac(lVar11,uVar12,
                   *(undefined8 *)Method_System_Collections_Generic_List<DataTable>_Contains__,0);
      plVar8 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
      *plVar8 = lVar11;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar8,lVar11);
    }
    uVar12 = thunk_FUN_01a89e68(*(undefined8 *)puVar3);
    FUN_021de1ac(uVar12,lVar6,*(undefined8 *)puVar4,0);
    uVar7 = FUN_01f70a5c(uVar7,lVar11,uVar12,*(undefined8 *)puVar1);
    puVar1 = PTR_DAT_03cbdf88;
    if (param_3 == 0) goto LAB_039bc530;
    FUN_01f7e3e4(param_3,&local_68,*(undefined8 *)PTR_DAT_03d01e30);
    lVar6 = local_68;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar9 = FUN_036d35a8(lVar6,0,0);
    if ((uVar9 & 1) != 0) {
      FUN_01f7e2fc(param_3,*(undefined8 *)System_Action<Task<IPAddress[]>>_TypeInfo);
    }
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_039bc530;
    FUN_01f7e3e4(*(long *)(param_1 + 0x10),&local_68,
                 *(undefined8 *)Method_System_Collections_Generic_List<Collider>_GetEnumerator__);
    lVar6 = FUN_030aa2b0(0,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)puVar1);
    }
    uVar9 = FUN_036cee6c(local_68,0,0);
    if ((uVar9 & 1) != 0) {
      if (local_68 == 0) goto LAB_039bc530;
      uVar12 = *(undefined8 *)(local_68 + 0x28);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar9 = FUN_036cee6c(uVar12,0,0);
      if ((uVar9 & 1) != 0) {
        lVar10 = *(long *)(local_68 + 0x28);
        if ((lVar10 == 0) || (lVar6 == 0)) goto LAB_039bc530;
        uVar12 = *(undefined8 *)(lVar10 + 0x18);
        *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(lVar10 + 0x20);
        *(undefined8 *)(lVar6 + 0x18) = uVar12;
        *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(lVar10 + 0x28);
        *(undefined4 *)(lVar6 + 0x30) = *(undefined4 *)(lVar10 + 0x30);
        *(undefined1 *)(lVar6 + 0x34) = *(undefined1 *)(lVar10 + 0x34);
        goto LAB_039bc4e4;
      }
    }
    if (lVar6 != 0) {
LAB_039bc4e4:
      FUN_030aa4cc(lVar6,uVar7,0);
      uVar7 = FUN_036cf428(param_3,0);
      FUN_030a998c(lVar6,uVar7,0);
      return;
    }
  }
LAB_039bc530:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


