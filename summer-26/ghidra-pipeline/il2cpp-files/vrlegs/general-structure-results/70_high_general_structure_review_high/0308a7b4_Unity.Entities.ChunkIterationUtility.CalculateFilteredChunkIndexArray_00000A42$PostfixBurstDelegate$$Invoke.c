/*
FUNCTION_NAME: Unity.Entities.ChunkIterationUtility.CalculateFilteredChunkIndexArray_00000A42$PostfixBurstDelegate$$Invoke
ENTRY_POINT: 0308a7b4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_12;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


long Unity_Entities_ChunkIterationUtility_CalculateFilteredChunkIndexArray_00000A42_PostfixBurstDelegate__Invoke
               (undefined4 param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x19;
  undefined4 unaff_w20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x25;
  undefined8 *puVar6;
  long lVar7;
  long *unaff_x28;
  undefined8 uVar8;
  undefined8 *unaff_x29;
  undefined4 uVar9;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 in_stack_00000028;
  
  uVar2 = FUN_0304faa8(param_1,param_2,in_stack_00000028,0);
  if (unaff_x25 == 0) goto LAB_0308ac1c;
  *(undefined8 *)(unaff_x25 + 0x38) = uVar2;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(unaff_x25 + 0x38),uVar2);
  if ((*(long *)(unaff_x19 + 0x10) == 0) ||
     (lVar3 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x28), lVar3 == 0)) goto LAB_0308ac1c;
  FUN_02215a88(lVar3,unaff_w20,&stack0x00000020,*unaff_x29);
  lVar3 = *unaff_x22;
  if (lVar3 == 0) goto LAB_0308ac1c;
  if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  lVar4 = *unaff_x28;
  lVar1 = CONCAT44(uStack0000000000000024,uStack0000000000000020);
  uVar2 = *(undefined8 *)(lVar3 + 0x20);
  uVar9 = *(undefined4 *)(lVar3 + 0x28);
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar4 = *unaff_x28;
  }
  lVar7 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
  if (lVar7 == 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar4 = *unaff_x28;
    }
    uVar8 = **(undefined8 **)(lVar4 + 0xb8);
    lVar7 = thunk_FUN_01a89e68(*(undefined8 *)
                                Unity_Services_Economy_Internal_Models_ValidationErrorResponse_var);
    FUN_021de400(lVar7,uVar8,*(undefined8 *)System_ValueTuple<T1>_var,0);
    plVar5 = (long *)(*(long *)(*unaff_x28 + 0xb8) + 0x10);
    *plVar5 = lVar7;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5,lVar7);
  }
  in_stack_00000010 = uVar2;
  in_stack_00000018 = uVar9;
  FUN_01f63b68(lVar3,&stack0x00000010,lVar7,&stack0x00000020,
               *(undefined8 *)Unity_Entities_UpdateBeforeAttribute_var);
  uVar2 = FUN_0304faa8(uStack0000000000000020,uStack0000000000000024,in_stack_00000028,0);
  if (lVar1 == 0) goto LAB_0308ac1c;
  puVar6 = (undefined8 *)(lVar1 + 0x30);
  *puVar6 = uVar2;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar6,uVar2);
  if (*unaff_x21 == 0) {
LAB_0308abcc:
    uVar9 = 0xffffffff;
  }
  else {
    if (*unaff_x22 == 0) goto LAB_0308ac1c;
    uVar2 = FUN_02b34428(0,*(undefined4 *)(*unaff_x22 + 0x18),0);
    uVar8 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cd9880);
    FUN_021de1ac();
    uVar2 = FUN_01f71424(uVar2,uVar8,
                         *(undefined8 *)_Common_UpdateManager_UpdateTransformJobManager<TData>_var);
    lVar3 = FUN_01f70920(uVar2,*(undefined8 *)PTR_DAT_03cd9150);
    if (lVar3 == 0) goto LAB_0308ac1c;
    if (*(long *)(lVar3 + 0x18) == 0) goto LAB_0308abcc;
    FUN_01f74248();
    uVar2 = thunk_FUN_01a89e68(*(undefined8 *)
                                Unity_Services_CloudSave_Internal_Models_ValidationErrorResponse_var
                              );
    FUN_021de1ac();
    uVar2 = FUN_01f6d39c(lVar3,uVar2,*(undefined8 *)Unity_Entities_UpdateInGroupAttribute_var);
    FUN_01f70920(uVar2,*(undefined8 *)_Common_UpdateManager_UpdateJobManager<TData>_var);
    uVar9 = FUN_01f74514();
  }
  lVar3 = thunk_FUN_01a89e68(*(undefined8 *)System_IComparable<T>_var);
  FUN_0306b464(lVar3,0);
  if (lVar3 != 0) {
    *(undefined4 *)(lVar3 + 0x10) = unaff_w20;
    *(undefined4 *)(lVar3 + 0x14) = uVar9;
    return lVar3;
  }
LAB_0308ac1c:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


