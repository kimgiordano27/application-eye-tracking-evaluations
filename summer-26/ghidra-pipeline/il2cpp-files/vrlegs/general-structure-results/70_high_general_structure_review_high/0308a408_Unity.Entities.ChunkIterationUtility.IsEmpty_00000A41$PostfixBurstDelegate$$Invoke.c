/*
FUNCTION_NAME: Unity.Entities.ChunkIterationUtility.IsEmpty_00000A41$PostfixBurstDelegate$$Invoke
ENTRY_POINT: 0308a408
PROGRAM: vrlegs-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


long Unity_Entities_ChunkIterationUtility_IsEmpty_00000A41_PostfixBurstDelegate__Invoke(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  long *plVar13;
  long unaff_x22;
  long *plVar14;
  undefined8 *unaff_x23;
  long unaff_x24;
  undefined8 *puVar15;
  long lVar16;
  undefined4 uVar17;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 in_stack_00000028;
  
  FUN_01ab69ac(System_ValueTuple<T1,_T2>_var);
                    /* catch() { ... } // from try @ 0308a404 with catch @ 0308a418 */
  FUN_01ab69ac(System_ValueTuple<T1,_T2,_T3>_var);
  FUN_01ab69ac(System_ValueTuple<T1,_T2,_T3,_T4>_var);
  FUN_01ab69ac(System_ValueTuple<T1,_T2,_T3,_T4,_T5>_var);
  FUN_01ab69ac(System_ValueTuple<T1,_T2,_T3,_T4,_T5,_T6>_var);
  FUN_01ab69ac(System_ValueTuple<T1,_T2,_T3,_T4,_T5,_T6,_T7>_var);
  FUN_01ab69ac(Unity_Entities_UpdateAfterAttribute_var);
  FUN_01ab69ac(System_ValueTuple<T1,_T2,_T3,_T4,_T5,_T6,_T7,_TRest>_var);
  FUN_01ab69ac(System_IComparable<T>_var);
  *(undefined1 *)(unaff_x22 + 0x4e0) = 1;
  lVar6 = thunk_FUN_01a89e68(*unaff_x23);
  FUN_027b3d9c(lVar6,0);
  if (lVar6 == 0) goto LAB_0308ac1c;
  plVar14 = (long *)(lVar6 + 0x10);
  *plVar14 = unaff_x21;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar14);
  plVar13 = (long *)(lVar6 + 0x18);
  *plVar13 = unaff_x24;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar13);
  puVar4 = System_ValueTuple<T1,_T2,_T3,_T4,_T5,_T6,_T7,_TRest>_var;
  puVar3 = Unity_Entities_UpdateBeforeAttribute_var;
  puVar2 = PTR_DAT_03cd8108;
  if (*plVar14 == 0) goto LAB_0308ac1c;
  iVar1 = *(int *)(*plVar14 + 0x18);
  if ((*plVar13 != 0) && (iVar1 != *(int *)(*plVar13 + 0x18))) {
    thunk_FUN_01a6ca08(PTR_DAT_03cbdd48);
    uVar7 = thunk_FUN_01a89e68();
    FUN_027a7930(uVar7,0);
    uVar8 = thunk_FUN_01a6ca08(System_ValueType_var);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar7,uVar8);
  }
  if ((unaff_x20 & 1) == 0) {
LAB_0308a678:
    if (unaff_x19 == 0) goto LAB_0308ac1c;
    uVar5 = FUN_01f73ff4();
    if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_0308ac1c;
    lVar6 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x28);
    if (lVar6 == 0) goto LAB_0308ac1c;
    FUN_02215a88(lVar6,uVar5,&stack0x00000020,*(undefined8 *)puVar2);
    lVar6 = *plVar14;
    if (lVar6 == 0) goto LAB_0308ac1c;
    if (*(int *)(lVar6 + 0x18) == 0) {
LAB_0308ac20:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    lVar11 = *(long *)puVar4;
    lVar9 = CONCAT44(uStack0000000000000024,uStack0000000000000020);
    uVar7 = *(undefined8 *)(lVar6 + 0x20);
    uVar17 = *(undefined4 *)(lVar6 + 0x28);
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar11 = *(long *)puVar4;
    }
    lVar10 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x18);
    if (lVar10 == 0) {
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar11 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar11 + 0xb8);
      lVar10 = thunk_FUN_01a89e68(*(undefined8 *)
                                   Unity_Services_Economy_Internal_Models_ValidationErrorResponse_var
                                 );
      FUN_021de400(lVar10,uVar8,*(undefined8 *)System_ValueTuple<T1,_T2>_var,0);
      plVar12 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
      *plVar12 = lVar10;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar12,lVar10);
    }
    in_stack_00000010 = uVar7;
    in_stack_00000018 = uVar17;
    FUN_01f63b68(lVar6,&stack0x00000010,lVar10,&stack0x00000020,*(undefined8 *)puVar3);
    uVar7 = FUN_0304faa8(uStack0000000000000020,uStack0000000000000024,in_stack_00000028,0);
    if (lVar9 == 0) goto LAB_0308ac1c;
    puVar15 = (undefined8 *)(lVar9 + 0x38);
    *puVar15 = uVar7;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar15,uVar7);
    if ((*(long *)(unaff_x19 + 0x10) == 0) ||
       (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x28), lVar6 == 0)) goto LAB_0308ac1c;
    FUN_02215a88(lVar6,uVar5,&stack0x00000020,*(undefined8 *)puVar2);
    lVar6 = *plVar14;
    if (lVar6 == 0) goto LAB_0308ac1c;
    if (*(int *)(lVar6 + 0x18) == 0) goto LAB_0308ac20;
    lVar11 = *(long *)puVar4;
    lVar9 = CONCAT44(uStack0000000000000024,uStack0000000000000020);
    uVar7 = *(undefined8 *)(lVar6 + 0x20);
    uVar17 = *(undefined4 *)(lVar6 + 0x28);
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar11 = *(long *)puVar4;
    }
    lVar10 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x20);
    if (lVar10 == 0) {
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar11 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar11 + 0xb8);
      lVar10 = thunk_FUN_01a89e68(*(undefined8 *)
                                   Unity_Services_Economy_Internal_Models_ValidationErrorResponse_var
                                 );
      FUN_021de400(lVar10,uVar8,*(undefined8 *)System_ValueTuple<T1,_T2,_T3>_var,0);
      plVar14 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x20);
      *plVar14 = lVar10;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar14,lVar10);
    }
    in_stack_00000010 = uVar7;
    in_stack_00000018 = uVar17;
    FUN_01f63b68(lVar6,&stack0x00000010,lVar10,&stack0x00000020,*(undefined8 *)puVar3);
    uVar7 = FUN_0304faa8(uStack0000000000000020,uStack0000000000000024,in_stack_00000028,0);
    if (lVar9 == 0) goto LAB_0308ac1c;
    puVar15 = (undefined8 *)(lVar9 + 0x30);
    *puVar15 = uVar7;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar15,uVar7);
    if (*plVar13 == 0) {
LAB_0308abcc:
      uVar17 = 0xffffffff;
    }
    else {
      uVar17 = FUN_01f73ff4();
    }
  }
  else {
    uVar7 = FUN_02b34428(0,iVar1,0);
    uVar8 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cd9880);
    FUN_021de1ac(uVar8,lVar6,*(undefined8 *)System_ValueTuple<T1,_T2,_T3,_T4>_var,0);
    uVar7 = FUN_01f71424(uVar7,uVar8,
                         *(undefined8 *)_Common_UpdateManager_UpdateTransformJobManager<TData>_var);
    lVar9 = FUN_01f70920(uVar7,*(undefined8 *)PTR_DAT_03cd9150);
    if (lVar9 == 0) goto LAB_0308ac1c;
    if (*(long *)(lVar9 + 0x18) == 0) goto LAB_0308a678;
    if (unaff_x19 == 0) goto LAB_0308ac1c;
    FUN_01f74248();
    uVar7 = thunk_FUN_01a89e68(*(undefined8 *)
                                Unity_Services_CloudSave_Internal_Models_ValidationErrorResponse_var
                              );
    FUN_021de1ac(uVar7,lVar6,*(undefined8 *)System_ValueTuple<T1,_T2,_T3,_T4,_T5>_var,0);
    uVar7 = FUN_01f6d39c(lVar9,uVar7,*(undefined8 *)Unity_Entities_UpdateInGroupAttribute_var);
    FUN_01f70920(uVar7,*(undefined8 *)_Common_UpdateManager_UpdateJobManager<TData>_var);
    uVar5 = FUN_01f74514();
    if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_0308ac1c;
    lVar9 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x28);
    if (lVar9 == 0) goto LAB_0308ac1c;
    FUN_02215a88(lVar9,uVar5,&stack0x00000020,*(undefined8 *)puVar2);
    lVar9 = *plVar14;
    if (lVar9 == 0) goto LAB_0308ac1c;
    if (*(int *)(lVar9 + 0x18) == 0) goto LAB_0308ac20;
    lVar10 = *(long *)puVar4;
    lVar11 = CONCAT44(uStack0000000000000024,uStack0000000000000020);
    uVar7 = *(undefined8 *)(lVar9 + 0x20);
    uVar17 = *(undefined4 *)(lVar9 + 0x28);
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar10 = *(long *)puVar4;
    }
    lVar16 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
    if (lVar16 == 0) {
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar10 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar10 + 0xb8);
      lVar16 = thunk_FUN_01a89e68(*(undefined8 *)
                                   Unity_Services_Economy_Internal_Models_ValidationErrorResponse_var
                                 );
      FUN_021de400(lVar16,uVar8,
                   *(undefined8 *)
                    Unity_Services_Leaderboards_Internal_Models_ValidationErrorResponse_var,0);
      plVar12 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
      *plVar12 = lVar16;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar12,lVar16);
    }
    in_stack_00000010 = uVar7;
    in_stack_00000018 = uVar17;
    FUN_01f63b68(lVar9,&stack0x00000010,lVar16,&stack0x00000020,
                 *(undefined8 *)Unity_Entities_UpdateBeforeAttribute_var);
    uVar7 = FUN_0304faa8(uStack0000000000000020,uStack0000000000000024,in_stack_00000028,0);
    if (lVar11 == 0) goto LAB_0308ac1c;
    puVar15 = (undefined8 *)(lVar11 + 0x38);
    *puVar15 = uVar7;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar15,uVar7);
    if ((*(long *)(unaff_x19 + 0x10) == 0) ||
       (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x28), lVar9 == 0)) goto LAB_0308ac1c;
    FUN_02215a88(lVar9,uVar5,&stack0x00000020,*(undefined8 *)puVar2);
    lVar9 = *plVar14;
    if (lVar9 == 0) goto LAB_0308ac1c;
    if (*(int *)(lVar9 + 0x18) == 0) goto LAB_0308ac20;
    lVar10 = *(long *)puVar4;
    lVar11 = CONCAT44(uStack0000000000000024,uStack0000000000000020);
    uVar7 = *(undefined8 *)(lVar9 + 0x20);
    uVar17 = *(undefined4 *)(lVar9 + 0x28);
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar10 = *(long *)puVar4;
    }
    lVar16 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x10);
    if (lVar16 == 0) {
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar10 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar10 + 0xb8);
      lVar16 = thunk_FUN_01a89e68(*(undefined8 *)
                                   Unity_Services_Economy_Internal_Models_ValidationErrorResponse_var
                                 );
      FUN_021de400(lVar16,uVar8,*(undefined8 *)System_ValueTuple<T1>_var,0);
      plVar12 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
      *plVar12 = lVar16;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar12,lVar16);
    }
    in_stack_00000010 = uVar7;
    in_stack_00000018 = uVar17;
    FUN_01f63b68(lVar9,&stack0x00000010,lVar16,&stack0x00000020,
                 *(undefined8 *)Unity_Entities_UpdateBeforeAttribute_var);
    uVar7 = FUN_0304faa8(uStack0000000000000020,uStack0000000000000024,in_stack_00000028,0);
    if (lVar11 == 0) goto LAB_0308ac1c;
    puVar15 = (undefined8 *)(lVar11 + 0x30);
    *puVar15 = uVar7;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar15,uVar7);
    if (*plVar13 == 0) goto LAB_0308abcc;
    if (*plVar14 == 0) goto LAB_0308ac1c;
    uVar7 = FUN_02b34428(0,*(undefined4 *)(*plVar14 + 0x18),0);
    uVar8 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cd9880);
    FUN_021de1ac(uVar8,lVar6,*(undefined8 *)System_ValueTuple<T1,_T2,_T3,_T4,_T5,_T6>_var,0);
    uVar7 = FUN_01f71424(uVar7,uVar8,
                         *(undefined8 *)_Common_UpdateManager_UpdateTransformJobManager<TData>_var);
    lVar9 = FUN_01f70920(uVar7,*(undefined8 *)PTR_DAT_03cd9150);
    if (lVar9 == 0) goto LAB_0308ac1c;
    if (*(long *)(lVar9 + 0x18) == 0) goto LAB_0308abcc;
    FUN_01f74248();
    uVar7 = thunk_FUN_01a89e68(*(undefined8 *)
                                Unity_Services_CloudSave_Internal_Models_ValidationErrorResponse_var
                              );
    FUN_021de1ac(uVar7,lVar6,*(undefined8 *)System_ValueTuple<T1,_T2,_T3,_T4,_T5,_T6,_T7>_var,0);
    uVar7 = FUN_01f6d39c(lVar9,uVar7,*(undefined8 *)Unity_Entities_UpdateInGroupAttribute_var);
    FUN_01f70920(uVar7,*(undefined8 *)_Common_UpdateManager_UpdateJobManager<TData>_var);
    uVar17 = FUN_01f74514();
  }
  lVar6 = thunk_FUN_01a89e68(*(undefined8 *)System_IComparable<T>_var);
  FUN_0306b464(lVar6,0);
  if (lVar6 != 0) {
    *(undefined4 *)(lVar6 + 0x10) = uVar5;
    *(undefined4 *)(lVar6 + 0x14) = uVar17;
    return lVar6;
  }
LAB_0308ac1c:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


