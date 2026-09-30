/*
FUNCTION_NAME: FUN_01fb4924
ENTRY_POINT: 01fb4924
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


long FUN_01fb4924(long param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 extraout_x1;
  ulong uVar20;
  undefined8 uVar21;
  ulong uVar22;
  undefined8 in_stack_ffffffffffffff70;
  undefined8 local_68;
  
  if ((DAT_03780662 & 1) == 0) {
    thunk_FUN_00d48444(UnityEngine_UIElements_StyleSheets_Syntax_DataType_TypeInfo);
    thunk_FUN_00d48444(
                      Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_84>_SliceWithStride<Vector3>__
                      );
    thunk_FUN_00d48444(
                      Method_Unity_XR_CoreUtils_Collections_HashSetList<ISynchronousAffordanceStateReceiver>_get_Item__
                      );
    thunk_FUN_00d48444(System_Collections_Generic_List<RenderChain_RenderNodeData>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<Transform,_BindableVariable<PokeStateData>>__ctor__
                      );
    thunk_FUN_00d48444(StringLiteral_3346);
                    /* try { // try from 01fb49a0 to 020b4acf has its CatchHandler @ 01fb49a0
                       catch() { ... } // from try @ 01fb49a0 with catch @ 01fb49a0
                       catch() { ... } // from try @ 01fb4bc8 with catch @ 01fb49a0
                       catch() { ... } // from try @ 01fb4c2c with catch @ 01fb49a0
                       catch() { ... } // from try @ 01fb4c90 with catch @ 01fb49a0
                       catch() { ... } // from try @ 01fb4d70 with catch @ 01fb49a0 */
    thunk_FUN_00d48444(Method_Unity_XR_CoreUtils_Collections_HashSetList<object>_AsList__);
    thunk_FUN_00d48444(StringLiteral_8400);
    thunk_FUN_00d48444(Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__);
    DAT_03780662 = 1;
  }
  puVar4 = 
  Method_Unity_XR_CoreUtils_Collections_HashSetList<ISynchronousAffordanceStateReceiver>_get_Item__;
  local_68 = 0;
  if (*(long *)(param_1 + 0x30) == 0) {
    if (*(int *)(param_1 + 0x10) == 3) {
      lVar12 = *(long *)
                Method_Unity_XR_CoreUtils_Collections_HashSetList<ISynchronousAffordanceStateReceiver>_get_Item__
      ;
      cVar3 = *(char *)(param_1 + 0x14);
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar12 = *(long *)puVar4;
      }
      if (cVar3 == '\0') {
        lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
      }
      else {
        lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x18);
      }
    }
    else {
      lVar12 = *(long *)
                Method_Unity_XR_CoreUtils_Collections_HashSetList<ISynchronousAffordanceStateReceiver>_get_Item__
      ;
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar12 = *(long *)puVar4;
      }
      lVar12 = **(long **)(lVar12 + 0xb8);
    }
    return lVar12;
  }
  plVar11 = (long *)thunk_FUN_00d62348(*(undefined8 *)StringLiteral_8400);
  puVar4 = Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__;
  if (plVar11 != (long *)0x0) {
    FUN_017b46ec(plVar11,0);
    plVar11[2] = *(long *)(param_1 + 0x30);
    lVar12 = *(long *)(param_1 + 0x18);
    lVar14 = *(long *)(param_1 + 0x20);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if ((lVar12 != 0) &&
       (uVar8 = FUN_01fb0f98(lVar12,*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 8),0),
       puVar4 = 
       Method_System_Collections_Generic_Dictionary<Transform,_BindableVariable<PokeStateData>>__ctor__
       , lVar14 != 0)) {
      uVar8 = FUN_01fb25a0(lVar14,uVar8,0);
      lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
      if (lVar12 != 0) {
        FUN_017b46ec(lVar12,0);
        *(undefined4 *)(lVar12 + 0x10) = uVar8;
        plVar11[3] = lVar12;
        plVar13 = *(long **)(param_1 + 0x30);
        if ((((plVar13 != (long *)0x0) &&
             ((**(code **)(*plVar13 + 0x178))
                        (plVar13,plVar11,*(undefined8 *)(param_1 + 0x18),
                         *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(*plVar13 + 0x180)),
             puVar4 = 
             Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_84>_SliceWithStride<Vector3>__
             , *(long *)(param_1 + 0x18) != 0)) && (*(long *)(param_1 + 0x20) != 0)) &&
           (plVar13 = *(long **)(*(long *)(param_1 + 0x20) + 0x10), plVar13 != (long *)0x0)) {
          uVar9 = (**(code **)(*plVar13 + 0x298))(plVar13,*(undefined8 *)(*plVar13 + 0x2a0));
          uVar20 = (ulong)uVar9;
          lVar14 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
          if (lVar14 != 0) {
            FUN_01fae870(lVar14,uVar20);
            lVar15 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
            puVar5 = UnityEngine_UIElements_StyleSheets_Syntax_DataType_TypeInfo;
            if (lVar15 != 0) {
              FUN_01fae870(lVar15,uVar20);
              plVar13 = (long *)FUN_00da4fb8(*(undefined8 *)puVar5,uVar20);
              if (0 < (int)uVar9) {
                uVar22 = 0;
                do {
                  lVar16 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                  if ((lVar16 == 0) || (FUN_01fae870(lVar16,uVar20), plVar13 == (long *)0x0))
                  goto LAB_01fb4e78;
                  lVar17 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar13 + 0x40));
                  if (lVar17 == 0) {
                    uVar21 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                    FUN_00da5038(uVar21,0);
                  }
                  if (*(uint *)(plVar13 + 3) <= uVar22) goto LAB_01fb4e7c;
                  plVar13[uVar22 + 4] = lVar16;
                  uVar22 = uVar22 + 1;
                } while (uVar20 != uVar22);
              }
              (**(code **)(*plVar11 + 0x188))
                        (plVar11,lVar14,lVar15,plVar13,*(undefined8 *)(*plVar11 + 400));
              if (*(int *)(param_1 + 0x3c) < 1) {
                lVar15 = *(long *)(param_1 + 0x18);
                if (lVar15 != 0) {
                  if (*(char *)(lVar15 + 0x38) == '\0') {
                    if (*(char *)(param_1 + 0x40) != '\0') {
                      FUN_01fb5518(param_1,lVar14,plVar13);
                      lVar15 = *(long *)(param_1 + 0x18);
                    }
                  }
                  else if ((param_2 & 1) != 0) {
                    lVar16 = FUN_01fb55a0(param_1,lVar14,plVar13,*(undefined4 *)(lVar12 + 0x10));
                    puVar4 = System_Collections_Generic_List<RenderChain_RenderNodeData>_TypeInfo;
                    lVar15 = *(long *)(param_1 + 0x18);
                    if (lVar16 != 0) {
                      uVar9 = *(uint *)(param_1 + 0x10);
                      if (uVar9 < 2) {
                        bVar6 = false;
                      }
                      else {
                        bVar6 = *(char *)(param_1 + 0x14) != '\0';
                      }
                      plVar11 = (long *)plVar11[2];
                      if (plVar11 != (long *)0x0) {
                        uVar10 = (**(code **)(*plVar11 + 0x198))
                                           (plVar11,*(undefined8 *)(*plVar11 + 0x1a0));
                        lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                        if (lVar12 != 0) {
                          FUN_01fb5b38(lVar12,lVar16,lVar15,uVar9,bVar6,uVar10 & 1);
                          return lVar12;
                        }
                      }
                      goto LAB_01fb4e78;
                    }
                  }
                  puVar4 = StringLiteral_3346;
                  uVar9 = *(uint *)(param_1 + 0x10);
                  uVar21 = *(undefined8 *)(param_1 + 0x20);
                  uVar8 = *(undefined4 *)(lVar12 + 0x10);
                  if (uVar9 < 2) {
                    bVar6 = false;
                  }
                  else {
                    bVar6 = *(char *)(param_1 + 0x14) != '\0';
                  }
                  plVar11 = (long *)plVar11[2];
                  if (plVar11 != (long *)0x0) {
                    uVar7 = (**(code **)(*plVar11 + 0x198))
                                      (plVar11,*(undefined8 *)(*plVar11 + 0x1a0));
                    lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                    if (lVar12 != 0) {
                      FUN_01fb5bd8(lVar12,lVar14,plVar13,lVar15,uVar21,uVar8,uVar9,bVar6,
                                   CONCAT71((int7)((ulong)in_stack_ffffffffffffff70 >> 8),uVar7) &
                                   0xffffffffffffff01);
                      return lVar12;
                    }
                  }
                }
              }
              else {
                uVar18 = FUN_01fb4e8c(param_1,extraout_x1,plVar13,&local_68);
                uVar21 = local_68;
                if (*(char *)(param_1 + 0x40) != '\0') {
                  uVar19 = FUN_01fb5170(param_1,lVar14,local_68,uVar18);
                  FUN_01fb52e0(param_1,uVar19);
                  if (0 < (int)uVar9) {
                    if (plVar13 == (long *)0x0) goto LAB_01fb4e78;
                    uVar22 = 0;
                    do {
                      if (*(uint *)(plVar13 + 3) <= uVar22) {
LAB_01fb4e7c:
                    /* WARNING: Subroutine does not return */
                        FUN_00da5194();
                      }
                      uVar19 = FUN_01fb5170(param_1,plVar13[uVar22 + 4],uVar21,uVar18);
                      FUN_01fb52e0(param_1,uVar19);
                      uVar22 = uVar22 + 1;
                    } while (uVar20 != uVar22);
                  }
                }
                puVar4 = Method_Unity_XR_CoreUtils_Collections_HashSetList<object>_AsList__;
                plVar11 = (long *)plVar11[2];
                if (plVar11 != (long *)0x0) {
                  uVar8 = *(undefined4 *)(lVar12 + 0x10);
                  uVar21 = *(undefined8 *)(param_1 + 0x18);
                  uVar18 = *(undefined8 *)(param_1 + 0x20);
                  uVar1 = *(undefined4 *)(param_1 + 0x10);
                  uVar9 = (**(code **)(*plVar11 + 0x198))(plVar11,*(undefined8 *)(*plVar11 + 0x1a0))
                  ;
                  uVar19 = local_68;
                  uVar2 = *(undefined4 *)(param_1 + 0x3c);
                  lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                  if (lVar12 != 0) {
                    FUN_01fb5458(lVar12,lVar14,plVar13,uVar21,uVar18,uVar8,uVar1,uVar9 & 1,uVar19,
                                 uVar2);
                    return lVar12;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_01fb4e78:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


