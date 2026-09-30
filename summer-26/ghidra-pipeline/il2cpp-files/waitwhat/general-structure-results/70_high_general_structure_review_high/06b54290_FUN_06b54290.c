/*
FUNCTION_NAME: FUN_06b54290
ENTRY_POINT: 06b54290
PROGRAM: waitwhat-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_11;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


void FUN_06b54290(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  int *piVar13;
  long *plVar14;
  undefined8 local_98;
  undefined8 *puStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  
  if ((DAT_0755fef6 & 1) == 0) {
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<CanvasTracker,_CanvasOptimizer_CanvasState>_MoveNext__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<CanvasTracker,_CanvasOptimizer_CanvasState>_get_Current__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary_Enumerator<Category,_Dictionary<Type,_Dictionary<InstanceHandle,_Inspector>>>_Dispose__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_List_Enumerator<TemplateAsset_UxmlSerializedDataOverride>_get_Current__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<Collider,_IXRInteractable>_MoveNext__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary_Enumerator<Category,_Dictionary<Type,_Dictionary<InstanceHandle,_Inspector>>>_get_Current__
                );
    DAT_0755fef6 = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  if (DAT_0755fefa == '\0') {
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<string,_List<string>>_Clear__);
    DAT_0755fefa = '\x01';
  }
  *(undefined1 *)
   (*(long *)(*(long *)Method_System_Collections_Generic_Dictionary<string,_List<string>>_Clear__ +
             0xb8) + 8) = 0;
  puVar8 = 
  Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<CanvasTracker,_CanvasOptimizer_CanvasState>_get_Current__
  ;
  puVar7 = 
  Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<CanvasTracker,_CanvasOptimizer_CanvasState>_MoveNext__
  ;
  puVar6 = 
  Method_System_Collections_Generic_List_Enumerator<TemplateAsset_UxmlSerializedDataOverride>_get_Current__
  ;
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_042e54fc(&local_98,*(long *)(param_1 + 0x18),
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary_Enumerator<Category,_Dictionary<Type,_Dictionary<InstanceHandle,_Inspector>>>_get_Current__
                );
    local_70 = local_88;
    puStack_78 = puStack_90;
    local_80 = local_98;
    local_98 = 0;
    puStack_90 = &local_80;
    while (uVar9 = FUN_054518b4(&local_80,*(undefined8 *)puVar8), lVar12 = local_70,
          (uVar9 & 1) != 0) {
      if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar10 = FUN_06b54c7c(local_70 + 0x18,0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      FUN_06c796fc(param_2,*(undefined8 *)(lVar10 + 0x18),*(undefined8 *)(lVar12 + 0x10),0);
      if (*(long *)(lVar12 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 06b54514 to 06c5452f has its CatchHandler @ 06b54614 */
        FUN_03188cd8();
      }
      lVar10 = *(long *)(*(long *)(lVar12 + 0x10) + 0x4b8);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      if (*(long *)(lVar10 + 0xf0) != 0) {
        FUN_06b4ccf0();
      }
      plVar14 = *(long **)(param_2 + 0x40);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar10 = *plVar14;
      uVar2 = *(undefined8 *)(lVar12 + 0x30);
      uVar4 = *(undefined8 *)(lVar12 + 0x38);
      uVar3 = *(undefined8 *)(lVar12 + 0x20);
      uVar5 = *(undefined8 *)(lVar12 + 0x28);
      uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar9 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar6) {
            puVar11 = (undefined8 *)(lVar10 + (long)(*piVar13 + 3) * 0x10 + 0x138);
            goto LAB_06b54454;
          }
          uVar9 = uVar9 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar9 != 0);
      }
      puVar11 = (undefined8 *)FUN_031c0d08(plVar14,*(long *)puVar6,3);
LAB_06b54454:
                    /* try { // try from 06b54454 to 06c54513 has its CatchHandler @ 06b54454
                       catch() { ... } // from try @ 06b54454 with catch @ 06b54454
                       catch() { ... } // from try @ 06b545ac with catch @ 06b54454
                       catch() { ... } // from try @ 06b545f0 with catch @ 06b54454
                       catch() { ... } // from try @ 06b54604 with catch @ 06b54454
                       catch() { ... } // from try @ 06b5464c with catch @ 06b54454 */
      (*(code *)*puVar11)(plVar14,uVar2,uVar4,uVar3,uVar5,puVar11[1]);
      if (*(long *)(lVar12 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      FUN_06b5631c(*(long *)(lVar12 + 0x10),param_2,0);
      FUN_06c7988c(param_2,0);
      FUN_06b54d5c(lVar12,0);
    }
    FUN_054518b0(&local_80,*(undefined8 *)puVar7);
    lVar12 = *(long *)(param_1 + 0x18);
    if (lVar12 != 0) {
      iVar1 = *(int *)(lVar12 + 0x18);
      *(undefined4 *)(lVar12 + 0x18) = 0;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      if (0 < iVar1) {
        FUN_0595236c(*(undefined8 *)(lVar12 + 0x10),0,iVar1,0);
      }
      FUN_0585646c(param_1 + 0x10,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


