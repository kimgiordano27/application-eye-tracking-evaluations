/*
FUNCTION_NAME: SuperTextMeshData.<>c$$<RebuildDictionaries>b__45_20
ENTRY_POINT: 00e55130
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SuperTextMeshData_<>c__<RebuildDictionaries>b__45_20(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = Method_System_Collections_Generic_List<FocusController_FocusedElement>_Add__;
  puVar2 = PTR_DAT_033f06a0;
  if ((DAT_03774da4 & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f06a0);
    thunk_FUN_00d48444(PTR_DAT_033ea8a0);
    thunk_FUN_00d48444(StringLiteral_5979);
    thunk_FUN_00d48444(
                      Polenter_Serialization_Advanced_SizeOptimizedBinaryReader_HeaderCallback<string>_TypeInfo
                      );
    thunk_FUN_00d48444(StringLiteral_3135);
    thunk_FUN_00d48444(Method_System_Threading_Tasks_UnwrapPromise<VoidTaskResult>__ctor__);
    thunk_FUN_00d48444(PTR_DAT_033f1f98);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<FocusController_FocusedElement>_Add__)
    ;
    thunk_FUN_00d48444(Method_Unity_Collections_NativeArray<int>_GetHashCode__);
    DAT_03774da4 = 1;
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)puVar3;
  lVar4 = FUN_00da4fb8(*(undefined8 *)puVar2,3);
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  FUN_00e547c8(DAT_028aa140,DAT_028aa144,DAT_028aa148,0x42400000,0,0x41700000,&local_50,
               *(undefined8 *)puVar3);
  puVar2 = Method_System_Threading_Tasks_UnwrapPromise<VoidTaskResult>__ctor__;
  if (lVar4 != 0) {
    uStack_68 = uStack_48;
    local_70 = local_50;
    uStack_58 = uStack_38;
    uStack_60 = uStack_40;
    if (*(int *)(lVar4 + 0x18) != 0) {
      *(undefined8 *)(lVar4 + 0x28) = uStack_48;
      *(undefined8 *)(lVar4 + 0x20) = local_50;
      *(undefined8 *)(lVar4 + 0x38) = uStack_38;
      *(undefined8 *)(lVar4 + 0x30) = uStack_40;
      uStack_88 = 0;
      local_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      FUN_00e547c8(DAT_028aa14c,DAT_028aa150,DAT_028aa154,0x42100000,0xc1400000,0x40000000,&local_90
                   ,*(undefined8 *)puVar2);
      puVar2 = PTR_DAT_033ea8a0;
      if (1 < *(uint *)(lVar4 + 0x18)) {
        *(undefined8 *)(lVar4 + 0x48) = uStack_88;
        *(undefined8 *)(lVar4 + 0x40) = local_90;
        *(undefined8 *)(lVar4 + 0x58) = uStack_78;
        *(undefined8 *)(lVar4 + 0x50) = uStack_80;
        plVar5 = (long *)FUN_00da4fb8(*(undefined8 *)puVar2,5);
        puVar2 = StringLiteral_3135;
        if (plVar5 == (long *)0x0) goto LAB_00e55414;
        if ((*(long *)StringLiteral_3135 != 0) &&
           (lVar6 = thunk_FUN_00d6225c(*(long *)StringLiteral_3135,*(undefined8 *)(*plVar5 + 0x40)),
           lVar6 == 0)) {
LAB_00e55408:
          uVar7 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar7,0);
        }
        puVar3 = PTR_DAT_033f1f98;
        uVar8 = *(uint *)(plVar5 + 3);
        if (uVar8 != 0) {
          plVar5[4] = *(long *)puVar2;
          lVar6 = *(long *)puVar3;
          if (lVar6 != 0) {
            lVar6 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar5 + 0x40));
            if (lVar6 == 0) goto LAB_00e55408;
            uVar8 = *(uint *)(plVar5 + 3);
          }
          puVar2 = 
          Polenter_Serialization_Advanced_SizeOptimizedBinaryReader_HeaderCallback<string>_TypeInfo;
          if (1 < uVar8) {
            plVar5[5] = *(long *)puVar3;
            lVar6 = *(long *)puVar2;
            if (lVar6 != 0) {
              lVar6 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar5 + 0x40));
              if (lVar6 == 0) goto LAB_00e55408;
              uVar8 = *(uint *)(plVar5 + 3);
            }
            puVar3 = Method_Unity_Collections_NativeArray<int>_GetHashCode__;
            if (2 < uVar8) {
              plVar5[6] = *(long *)puVar2;
              lVar6 = *(long *)puVar3;
              if (lVar6 != 0) {
                lVar6 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar5 + 0x40));
                if (lVar6 == 0) goto LAB_00e55408;
                uVar8 = *(uint *)(plVar5 + 3);
              }
              puVar2 = StringLiteral_5979;
              if (3 < uVar8) {
                plVar5[7] = *(long *)puVar3;
                lVar6 = *(long *)puVar2;
                if (lVar6 != 0) {
                  lVar6 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar5 + 0x40));
                  if (lVar6 == 0) goto LAB_00e55408;
                  uVar8 = *(uint *)(plVar5 + 3);
                }
                if (4 < uVar8) {
                  plVar5[8] = *(long *)puVar2;
                  uVar1 = _UNK_028aa178;
                  uVar7 = _DAT_028aa170;
                  if (2 < *(uint *)(lVar4 + 0x18)) {
                    *(long **)(lVar4 + 0x60) = plVar5;
                    *(undefined8 *)(lVar4 + 0x78) = 0xc1880000;
                    *(undefined8 *)(lVar4 + 0x70) = uVar1;
                    *(undefined8 *)(lVar4 + 0x68) = uVar7;
                    *(long *)(param_1 + 0x30) = lVar4;
                    thunk_FUN_0268a01c(param_1,0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
LAB_00e55414:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


