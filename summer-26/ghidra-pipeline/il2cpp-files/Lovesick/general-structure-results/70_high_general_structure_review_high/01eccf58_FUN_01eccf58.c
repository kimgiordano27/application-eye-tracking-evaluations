/*
FUNCTION_NAME: FUN_01eccf58
ENTRY_POINT: 01eccf58
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


void FUN_01eccf58(long param_1,long *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  if ((DAT_0377ffc9 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<WeakReference>_Clear__);
    thunk_FUN_00d48444(StringLiteral_13941);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_Locomotion_TeleportProceduralArcVisual_HandleInteractorPostProcessed__
                      );
    DAT_0377ffc9 = 1;
  }
  if ((*(int *)(param_1 + 0x50) != 0) && (*(int *)(param_1 + 0x50) != 0xb)) {
    uVar5 = thunk_FUN_00d48444(PTR_DAT_033ea8a0);
    uVar5 = FUN_00da4fb8(uVar5,2);
    puVar4 = PTR_DAT_033f1778;
    thunk_FUN_00d48444(PTR_DAT_033f1778);
    FUN_00acb0a4();
    lVar7 = thunk_FUN_00d48444(puVar4);
    iVar3 = *(int *)(param_1 + 0x50);
    uVar6 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x30);
    FUN_00ac2be8(uVar6);
    uVar6 = FUN_00bd94ec(uVar6,(long)iVar3);
    FUN_00ac2be8(uVar5);
    FUN_00acb0b4(uVar5,uVar6);
    FUN_00acb320(uVar5,0,uVar6);
    lVar7 = thunk_FUN_00d48444(puVar4);
    uVar6 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x30);
    FUN_00ac2be8(uVar6);
    uVar6 = FUN_00bd94ec(uVar6,1);
    FUN_00ac2be8(uVar5);
    FUN_00acb0b4(uVar5,uVar6);
    FUN_00acb320(uVar5,1,uVar6);
    uVar6 = thunk_FUN_00d48444(MB3_MeshBakerCommon_<>c_TypeInfo);
    uVar6 = FUN_01f71d98(uVar6,uVar5,0);
    thunk_FUN_00d48444(System_Data_ConstraintTable_TypeInfo);
    uVar5 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    FUN_017713a8(uVar5,uVar6,0);
LAB_01ecd1b8:
    uVar6 = thunk_FUN_00d48444(
                              Method_System_Collections_Generic_List_Enumerator<DecalEntityChunk>_MoveNext__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar5,uVar6);
  }
  if (param_2 == (long *)0x0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar5 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar6 = thunk_FUN_00d48444(StringLiteral_12758);
    FUN_016ec5b8(uVar5,uVar6,0);
    uVar6 = thunk_FUN_00d48444(
                              Method_System_Collections_Generic_List_Enumerator<DecalEntityChunk>_MoveNext__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar5,uVar6);
  }
  lVar7 = *param_2;
  bVar1 = *(byte *)(lVar7 + 300);
  bVar2 = *(byte *)(*(long *)StringLiteral_13941 + 300);
  if ((bVar1 < bVar2) ||
     (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)StringLiteral_13941)) {
    bVar2 = *(byte *)(*(long *)Method_System_Collections_Generic_List<WeakReference>_Clear__ + 300);
    if ((bVar1 < bVar2) ||
       (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) !=
        *(long *)Method_System_Collections_Generic_List<WeakReference>_Clear__)) {
      bVar2 = *(byte *)(*(long *)
                         Method_Oculus_Interaction_Locomotion_TeleportProceduralArcVisual_HandleInteractorPostProcessed__
                       + 300);
      if ((bVar1 < bVar2) ||
         (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) !=
          *(long *)
           Method_Oculus_Interaction_Locomotion_TeleportProceduralArcVisual_HandleInteractorPostProcessed__
         )) {
        uVar5 = thunk_FUN_00d48444(Method_Obi_ObiNativeList<Vector4>_set_Item__);
        uVar6 = FUN_01f75600(uVar5,0);
        thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
        uVar5 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        FUN_016f2f28(uVar5,uVar6,0);
        goto LAB_01ecd1b8;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x50) = 1;
  FUN_01ecc3b8(param_1);
  *(long **)(param_1 + 0xa0) = param_2;
  return;
}


