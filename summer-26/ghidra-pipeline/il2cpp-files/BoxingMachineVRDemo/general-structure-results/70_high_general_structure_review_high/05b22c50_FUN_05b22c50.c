/*
FUNCTION_NAME: FUN_05b22c50
ENTRY_POINT: 05b22c50
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x05b23750) */
/* WARNING: Removing unreachable block (ram,0x05b2376c) */

void FUN_05b22c50(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5,long param_6,long param_7,undefined8 param_8,undefined8 param_9,
                 undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
                 undefined8 param_14,int param_15)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined1 (*pauVar15) [16];
  int *piVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  undefined4 uVar20;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined4 local_1a0;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined4 local_160;
  undefined1 local_150 [16];
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  long local_110;
  long local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  
  puVar6 = UnityEngine_XR_ARSubsystems_XRPointCloudSubsystemDescriptor_Cinfo_TypeInfo;
  local_a0 = param_10;
  uStack_98 = param_11;
  local_90 = param_8;
  uStack_88 = param_9;
  if ((DAT_06b81aa9 & 1) == 0) {
    FUN_02d6084c(Method_System_Collections_Generic_List_Enumerator<JsonSchemaNode>_Dispose__);
    FUN_02d6084c(Method_System_Collections_Generic_List_Enumerator<JsonSchemaNode>_MoveNext__);
    FUN_02d6084c(
                Method_System_Collections_Generic_Dictionary<BinaryOperatorHandler_OperatorQuery,_IOptimizedInvoker>_get_Item__
                );
    FUN_02d6084c(
                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
                );
    FUN_02d6084c(PTR_DAT_0675f3d0);
    FUN_02d6084c(Method_System_Collections_Generic_List_Enumerator<JsonSchemaNode>_get_Current__);
    FUN_02d6084c(Method_UnityEngine_UIElements_CustomStyleProperty<VectorImage>_get_name__);
    FUN_02d6084c(Method_System_Collections_Generic_List_Enumerator<KoreographyEvent>_Dispose__);
    FUN_02d6084c(Method_System_Collections_Generic_List_Enumerator<KoreographyEvent>_MoveNext__);
    FUN_02d6084c(Method_System_Collections_Generic_List_Enumerator<KoreographyEvent>_get_Current__);
    FUN_02d6084c(UnityEngine_XR_ARSubsystems_XRPointCloudSubsystemDescriptor_Cinfo_TypeInfo);
    FUN_02d6084c(Method_System_Collections_Generic_HashSet_Enumerator<LabelScopeInfo>_Dispose__);
    FUN_02d6084c(Method_System_Collections_Generic_HashSet_Enumerator<LabelScopeInfo>_MoveNext__);
    FUN_02d6084c(Method_System_Collections_Generic_HashSet_Enumerator<LabelScopeInfo>_get_Current__)
    ;
    FUN_02d6084c(Method_System_Collections_Generic_Dictionary<Texture,_TextureId>_Remove__);
    FUN_02d6084c(Method_System_Collections_Generic_List_Enumerator<LabelScopeInfo>_Dispose__);
    FUN_02d6084c(Method_System_Collections_Generic_List_Enumerator<JsonPosition>_MoveNext__);
    FUN_02d6084c(Method_System_Collections_Generic_List_Enumerator<LabelScopeInfo>_MoveNext__);
    FUN_02d6084c(Method_System_Collections_Generic_List_Enumerator<LabelScopeInfo>_get_Current__);
    FUN_02d6084c(Method_System_Collections_Generic_List_Enumerator<JsonPosition>_get_Current__);
    DAT_06b81aa9 = 1;
  }
  local_c0._0_8_ = 0;
  local_c0._8_8_ = 0;
  local_d0 = 0;
  local_110 = 0;
  local_108 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uVar20 = FUN_05b21e90(param_7);
  local_b0._8_8_ = uStack_88;
  local_b0._0_8_ = local_90;
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  if (DAT_06b81476 == '\0') {
    FUN_02d6084c(UnityEngine_XR_ARSubsystems_XRPointCloudSubsystemDescriptor_Cinfo_TypeInfo);
    DAT_06b81476 = '\x01';
  }
  lVar10 = *(long *)puVar6;
                    /* try { // try from 05b22e08 to 05c2306b has its CatchHandler @ 05b22e08
                       catch() { ... } // from try @ 05b22e08 with catch @ 05b22e08
                       catch() { ... } // from try @ 05b23104 with catch @ 05b22e08
                       catch() { ... } // from try @ 05b23194 with catch @ 05b22e08
                       catch() { ... } // from try @ 05b231bc with catch @ 05b22e08
                       catch() { ... } // from try @ 05b23388 with catch @ 05b22e08
                       catch() { ... } // from try @ 05b23470 with catch @ 05b22e08
                       catch() { ... } // from try @ 05b23480 with catch @ 05b22e08
                       catch() { ... } // from try @ 05b23508 with catch @ 05b22e08
                       catch() { ... } // from try @ 05b2351c with catch @ 05b22e08
                       catch() { ... } // from try @ 05b2353c with catch @ 05b22e08 */
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar10 = *(long *)puVar6;
  }
  puVar9 = Method_System_Collections_Generic_List_Enumerator<LabelScopeInfo>_get_Current__;
  puVar8 = Method_System_Collections_Generic_HashSet_Enumerator<LabelScopeInfo>_get_Current__;
  puVar7 = 
  Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
  ;
  pauVar15 = *(undefined1 (**) [16])(lVar10 + 0xb8);
  local_c0._8_8_ = *(undefined8 *)(*pauVar15 + 8);
  local_c0._0_8_ = *(undefined8 *)*pauVar15;
  auVar4 = *pauVar15;
  if (param_15 != 3) {
    auVar4 = *pauVar15;
    if (param_7 == 0) goto LAB_05b23748;
    local_d0 = *(undefined4 *)(param_7 + 0x128);
    uStack_e8 = *(undefined8 *)(param_7 + 0x110);
    local_f0 = *(undefined8 *)(param_7 + 0x108);
    uStack_d8 = *(undefined8 *)(param_7 + 0x120);
    local_e0 = *(undefined8 *)(param_7 + 0x118);
    uStack_f8 = *(undefined8 *)(param_7 + 0x100);
    local_100 = *(undefined8 *)(param_7 + 0xf8);
    uVar1 = *(undefined4 *)(param_7 + 0x160);
    uVar2 = *(undefined4 *)(param_7 + 0x164);
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_Dictionary<BinaryOperatorHandler_OperatorQuery,_IOptimizedInvoker>_get_Item__
                + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_05ae9368(&local_100,uVar1,uVar2,0);
    local_120 = local_d0;
    uStack_138 = uStack_e8;
    local_140 = local_f0;
    uStack_128 = uStack_d8;
    local_130 = local_e0;
    local_150._8_8_ = uStack_f8;
    local_150._0_8_ = local_100;
    if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<Texture,_TextureId>_Remove__
                + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uStack_188 = local_150._8_8_;
    local_190 = local_150._0_8_;
    uStack_178 = uStack_138;
    uStack_180 = local_140;
    uStack_168 = uStack_128;
    local_170 = local_130;
    local_160 = local_120;
    local_b0 = FUN_05b710a0(param_6,&local_190,
                            *(undefined8 *)
                             Method_System_Collections_Generic_List_Enumerator<JsonPosition>_get_Current__
                            ,0,0,1,0);
    FUN_05b21dc8(&local_100);
    uStack_1c8 = uStack_f8;
    local_1d0 = local_100;
    uStack_1b8 = uStack_e8;
    uStack_1c0 = local_f0;
    uStack_1a8 = uStack_d8;
    local_1b0 = local_e0;
    local_1a0 = local_d0;
    local_c0 = FUN_05b710a0(param_6,&local_1d0,
                            *(undefined8 *)
                             Method_System_Collections_Generic_List_Enumerator<JsonPosition>_MoveNext__
                            ,1,0,1,0);
    uVar11 = FUN_05af00c8(param_5,0);
    auVar4 = local_c0;
    if (param_6 == 0) goto LAB_05b23748;
    plVar12 = (long *)FUN_035272f4(param_6,*(undefined8 *)
                                            Method_System_Collections_Generic_List_Enumerator<LabelScopeInfo>_Dispose__
                                   ,&local_108,uVar11,*(undefined8 *)puVar9,0xea,
                                   *(undefined8 *)
                                    Method_System_Collections_Generic_List_Enumerator<KoreographyEvent>_get_Current__
                                  );
    if (local_108 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    *(undefined8 *)(local_108 + 0x10) = *(undefined8 *)(param_5 + 0xd8);
    thunk_FUN_02dd37b4((undefined8 *)(local_108 + 0x10));
    if (local_108 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    *(undefined4 *)(local_108 + 0x18) = uVar20;
    *(undefined4 *)(local_108 + 0x1c) = param_2;
    *(undefined4 *)(local_108 + 0x20) = param_3;
    *(undefined4 *)(local_108 + 0x24) = param_4;
    *(undefined8 *)(local_108 + 0x30) = uStack_88;
    *(undefined8 *)(local_108 + 0x28) = local_90;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar10 = *plVar12;
    uVar17 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar17 != 0) {
      piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar7) {
          puVar13 = (undefined8 *)(lVar10 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_05b23020;
        }
        uVar17 = uVar17 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar17 != 0);
    }
    puVar13 = (undefined8 *)FUN_02d9a5d4(plVar12,*(long *)puVar7,0);
LAB_05b23020:
    (*(code *)*puVar13)(plVar12,&local_90,1,puVar13[1]);
    local_150 = local_c0;
    if (local_108 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    *(undefined1 (*) [16])(local_108 + 0x38) = local_c0;
    lVar10 = *plVar12;
    uVar17 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar17 != 0) {
      piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
                    /* try { // try from 05b2306c to 05c23093 has its CatchHandler @ 05b231a8 */
        if (*(long *)(piVar16 + -2) == *(long *)puVar7) {
          puVar13 = (undefined8 *)(lVar10 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_05b23098;
        }
        uVar17 = uVar17 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar17 != 0);
    }
    puVar13 = (undefined8 *)FUN_02d9a5d4(plVar12,*(long *)puVar7,0);
LAB_05b23098:
    (*(code *)*puVar13)(plVar12,local_c0,2,puVar13[1]);
    if (local_108 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    *(undefined1 (*) [16])(local_108 + 0x48) = local_b0;
    lVar10 = *plVar12;
                    /* try { // try from 05b230c8 to 05c230f3 has its CatchHandler @ 05b231a4 */
    uVar17 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar17 != 0) {
      piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar7) {
                    /* try { // try from 05b23104 to 05c23187 has its CatchHandler @ 05b22e08 */
          puVar13 = (undefined8 *)(lVar10 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_05b23110;
        }
        uVar17 = uVar17 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar17 != 0);
    }
                    /* try { // try from 05b230fc to 05c23103 has its CatchHandler @ 05b231a0 */
    puVar13 = (undefined8 *)FUN_02d9a5d4(plVar12,*(long *)puVar7,0);
LAB_05b23110:
    (*(code *)*puVar13)(plVar12,local_b0,2,puVar13[1]);
    lVar10 = *(long *)puVar8;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar10);
      lVar10 = *(long *)puVar8;
    }
    lVar18 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
    if (lVar18 == 0) {
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(lVar10);
        lVar10 = *(long *)puVar8;
      }
      uVar11 = **(undefined8 **)(lVar10 + 0xb8);
      lVar18 = thunk_FUN_02d9d534(*(undefined8 *)
                                   Method_System_Collections_Generic_List_Enumerator<JsonSchemaNode>_Dispose__
                                 );
                    /* try { // try from 05b23188 to 05c2318b has its CatchHandler @ 05b2319c */
      FUN_04180a6c(lVar18,uVar11,
                   *(undefined8 *)
                    Method_System_Collections_Generic_HashSet_Enumerator<LabelScopeInfo>_Dispose__,0
                  );
                    /* try { // try from 05b23190 to 05c23193 has its CatchHandler @ 05b23198 */
                    /* try { // try from 05b23194 to 05c231b7 has its CatchHandler @ 05b22e08 */
                    /* catch() { ... } // from try @ 05b23190 with catch @ 05b23198 */
      plVar14 = (long *)(*(long *)(*(long *)puVar8 + 0xb8) + 8);
      *plVar14 = lVar18;
                    /* catch() { ... } // from try @ 05b23188 with catch @ 05b2319c */
                    /* catch() { ... } // from try @ 05b230fc with catch @ 05b231a0 */
      thunk_FUN_02dd37b4(plVar14,lVar18);
    }
                    /* catch() { ... } // from try @ 05b230c8 with catch @ 05b231a4 */
                    /* catch() { ... } // from try @ 05b2306c with catch @ 05b231a8 */
    lVar10 = *plVar12;
    lVar19 = *(long *)Method_System_Collections_Generic_List_Enumerator<KoreographyEvent>_Dispose__;
    uVar17 = (ulong)*(ushort *)(lVar10 + 0x12e);
                    /* try { // try from 05b231b8 to 05c231bb has its CatchHandler @ 05b234a0 */
                    /* try { // try from 05b231bc to 05c2331f has its CatchHandler @ 05b22e08 */
    if (uVar17 != 0) {
      piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)(lVar19 + 0x20)) {
          lVar10 = lVar10 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar19 + 0x50)) * 0x10 + 0x138;
          goto LAB_05b23200;
        }
        uVar17 = uVar17 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar17 != 0);
    }
    lVar10 = FUN_02d9a5d4(plVar12);
LAB_05b23200:
    lVar10 = thunk_FUN_02d7fbac(*(undefined8 *)(lVar10 + 8),lVar19);
    (**(code **)(lVar10 + 8))(plVar12,lVar18,lVar10);
    auVar4 = local_c0;
    if (plVar12 != (long *)0x0) {
      lVar10 = *plVar12;
      uVar17 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar17 != 0) {
        piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0675f3d0) {
            puVar13 = (undefined8 *)(lVar10 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_05b2327c;
          }
          uVar17 = uVar17 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar17 != 0);
      }
      puVar13 = (undefined8 *)FUN_02d9a5d4(plVar12,*(long *)PTR_DAT_0675f3d0,0);
LAB_05b2327c:
      (*(code *)*puVar13)(plVar12,puVar13[1]);
      auVar4 = local_c0;
    }
  }
  puVar5 = PTR_DAT_0675f3d0;
  local_c0 = auVar4;
  uVar11 = FUN_05af00c8(param_5,0);
  auVar4 = local_c0;
  if (param_6 == 0) {
LAB_05b23748:
    local_c0 = auVar4;
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  plVar12 = (long *)FUN_03526ed8(param_6,*(undefined8 *)
                                          Method_System_Collections_Generic_List_Enumerator<LabelScopeInfo>_MoveNext__
                                 ,&local_110,uVar11,*(undefined8 *)puVar9,0xfc,
                                 *(undefined8 *)
                                  Method_System_Collections_Generic_List_Enumerator<KoreographyEvent>_MoveNext__
                                );
  if (local_110 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  *(undefined8 *)(local_110 + 0x10) = *(undefined8 *)(param_5 + 0xd8);
  thunk_FUN_02dd37b4((undefined8 *)(local_110 + 0x10));
  if (local_110 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  *(long *)(local_110 + 0x20) = param_7;
  *(int *)(local_110 + 0x18) = param_15;
  *(undefined4 *)(local_110 + 0x28) = uVar20;
  *(undefined4 *)(local_110 + 0x2c) = param_2;
  *(undefined4 *)(local_110 + 0x30) = param_3;
  *(undefined4 *)(local_110 + 0x34) = param_4;
  thunk_FUN_02dd37b4((long *)(local_110 + 0x20),param_7);
  if (param_15 != 3) {
                    /* try { // try from 05b23320 to 05c23327 has its CatchHandler @ 05b2351c */
    local_150 = local_c0;
    if (local_110 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    *(undefined1 (*) [16])(local_110 + 0x48) = local_c0;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar10 = *plVar12;
                    /* try { // try from 05b23338 to 05c23387 has its CatchHandler @ 05b23528 */
    uVar17 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar17 != 0) {
      piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar7) {
          puVar13 = (undefined8 *)(lVar10 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_05b23380;
        }
        uVar17 = uVar17 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar17 != 0);
    }
    puVar13 = (undefined8 *)FUN_02d9a5d4(plVar12,*(long *)puVar7,0);
LAB_05b23380:
                    /* try { // try from 05b23388 to 05c2345f has its CatchHandler @ 05b22e08 */
    (*(code *)*puVar13)(plVar12,local_c0,1,puVar13[1]);
  }
  local_150._8_8_ = uStack_88;
  local_150._0_8_ = local_90;
  if (local_110 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  *(undefined8 *)(local_110 + 0x60) = uStack_88;
  *(undefined8 *)(local_110 + 0x58) = local_90;
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar10 = *plVar12;
  uVar17 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar17 != 0) {
    piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)puVar7) {
        puVar13 = (undefined8 *)(lVar10 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_05b233fc;
      }
      uVar17 = uVar17 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar17 != 0);
  }
  puVar13 = (undefined8 *)FUN_02d9a5d4(plVar12,*(long *)puVar7,0);
LAB_05b233fc:
  (*(code *)*puVar13)(plVar12,&local_90,1,puVar13[1]);
  if (local_110 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  *(undefined8 *)(local_110 + 0x68) = param_13;
  *(undefined8 *)(local_110 + 0x70) = param_14;
  lVar10 = *plVar12;
  uVar17 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar17 != 0) {
    piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) ==
          *(long *)Method_UnityEngine_UIElements_CustomStyleProperty<VectorImage>_get_name__) {
                    /* try { // try from 05b23468 to 05c2346b has its CatchHandler @ 05b23524 */
                    /* try { // try from 05b2346c to 05c2346f has its CatchHandler @ 05b23520 */
                    /* try { // try from 05b23470 to 05c23473 has its CatchHandler @ 05b22e08 */
        puVar13 = (undefined8 *)(lVar10 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_05b23474;
      }
      uVar17 = uVar17 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar17 != 0);
  }
                    /* try { // try from 05b23460 to 05c23463 has its CatchHandler @ 05b23524 */
  puVar13 = (undefined8 *)
            FUN_02d9a5d4(plVar12,*(long *)
                                  Method_UnityEngine_UIElements_CustomStyleProperty<VectorImage>_get_name__
                         ,0);
                    /* try { // try from 05b23464 to 05c23467 has its CatchHandler @ 05b23520 */
LAB_05b23474:
                    /* try { // try from 05b23474 to 05c2347f has its CatchHandler @ 05b23524 */
                    /* try { // try from 05b23480 to 05c234df has its CatchHandler @ 05b22e08 */
  (*(code *)*puVar13)(plVar12,param_13,param_14,0,6,puVar13[1]);
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
                    /* catch() { ... } // from try @ 05b231b8 with catch @ 05b234a0 */
  if (DAT_06b80ff8 == '\0') {
    FUN_02d6084c(PTR_DAT_0676c4a8);
    DAT_06b80ff8 = '\x01';
  }
  puVar6 = PTR_DAT_0676c4a8;
  if (*(int *)(*(long *)PTR_DAT_0676c4a8 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
                    /* try { // try from 05b234e0 to 05c23507 has its CatchHandler @ 05b2358c */
  if (DAT_06b80ff9 == '\0') {
    FUN_02d6084c(PTR_DAT_0676c4a8);
    DAT_06b80ff9 = '\x01';
  }
  uVar3 = (uint)local_a0._2_2_;
  if (local_a0._2_2_ != 0) {
    lVar10 = *(long *)puVar6;
                    /* try { // try from 05b23508 to 05c23513 has its CatchHandler @ 05b22e08 */
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
                    /* try { // try from 05b23514 to 05c2351b has its CatchHandler @ 05b2358c */
      lVar10 = *(long *)puVar6;
    }
    piVar16 = *(int **)(lVar10 + 0xb8);
                    /* catch() { ... } // from try @ 05b23320 with catch @ 05b2351c
                       try { // try from 05b2351c to 05c23537 has its CatchHandler @ 05b22e08 */
                    /* catch() { ... } // from try @ 05b23464 with catch @ 05b23520
                       catch() { ... } // from try @ 05b2346c with catch @ 05b23520 */
                    /* catch() { ... } // from try @ 05b23460 with catch @ 05b23524
                       catch() { ... } // from try @ 05b23468 with catch @ 05b23524
                       catch() { ... } // from try @ 05b23474 with catch @ 05b23524 */
    if (uVar3 << 0x10 != *piVar16) {
                    /* catch() { ... } // from try @ 05b23338 with catch @ 05b23528 */
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
                    /* try { // try from 05b23538 to 05c2353b has its CatchHandler @ 05b23568 */
        piVar16 = *(int **)(*(long *)puVar6 + 0xb8);
      }
                    /* try { // try from 05b2353c to 05c23577 has its CatchHandler @ 05b22e08 */
      if (uVar3 << 0x10 != piVar16[1]) goto LAB_05b235c0;
    }
    local_150._8_8_ = uStack_98;
    local_150._0_8_ = local_a0;
    if (local_110 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    *(undefined8 *)(local_110 + 0x40) = uStack_98;
    *(undefined8 *)(local_110 + 0x38) = local_a0;
    lVar10 = *plVar12;
                    /* catch() { ... } // from try @ 05b23538 with catch @ 05b23568 */
    uVar17 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar17 != 0) {
      piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
                    /* try { // try from 05b23578 to 05c2358b has its CatchHandler @ 05b2358c */
        if (*(long *)(piVar16 + -2) == *(long *)puVar7) {
          puVar13 = (undefined8 *)(lVar10 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_05b235ac;
        }
        uVar17 = uVar17 - 1;
        piVar16 = piVar16 + 4;
                    /* catch() { ... } // from try @ 05b234e0 with catch @ 05b2358c
                       catch() { ... } // from try @ 05b23514 with catch @ 05b2358c
                       catch() { ... } // from try @ 05b23578 with catch @ 05b2358c */
      } while (uVar17 != 0);
    }
    puVar13 = (undefined8 *)FUN_02d9a5d4(plVar12,*(long *)puVar7,0);
LAB_05b235ac:
    (*(code *)*puVar13)(plVar12,&local_a0,1,puVar13[1]);
  }
LAB_05b235c0:
  lVar10 = *(long *)puVar8;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar10);
    lVar10 = *(long *)puVar8;
  }
  lVar18 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x10);
  if (lVar18 == 0) {
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar10);
      lVar10 = *(long *)puVar8;
    }
    uVar11 = **(undefined8 **)(lVar10 + 0xb8);
    lVar18 = thunk_FUN_02d9d534(*(undefined8 *)
                                 Method_System_Collections_Generic_List_Enumerator<JsonSchemaNode>_MoveNext__
                               );
    FUN_04180bc0(lVar18,uVar11,
                 *(undefined8 *)
                  Method_System_Collections_Generic_HashSet_Enumerator<LabelScopeInfo>_MoveNext__,0)
    ;
    plVar14 = (long *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x10);
    *plVar14 = lVar18;
    thunk_FUN_02dd37b4(plVar14,lVar18);
  }
  lVar10 = *plVar12;
  lVar19 = *(long *)Method_System_Collections_Generic_List_Enumerator<JsonSchemaNode>_get_Current__;
  uVar17 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar17 != 0) {
    piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)(lVar19 + 0x20)) {
        lVar10 = lVar10 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar19 + 0x50)) * 0x10 + 0x138;
        goto LAB_05b2369c;
      }
      uVar17 = uVar17 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar17 != 0);
  }
  lVar10 = FUN_02d9a5d4(plVar12);
LAB_05b2369c:
  lVar10 = thunk_FUN_02d7fbac(*(undefined8 *)(lVar10 + 8),lVar19);
  (**(code **)(lVar10 + 8))(plVar12,lVar18,lVar10);
  if (plVar12 != (long *)0x0) {
    lVar10 = *plVar12;
    uVar17 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar17 != 0) {
      piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
          puVar13 = (undefined8 *)(lVar10 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_05b23710;
        }
        uVar17 = uVar17 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar17 != 0);
    }
    puVar13 = (undefined8 *)FUN_02d9a5d4(plVar12,*(long *)puVar5,0);
LAB_05b23710:
    (*(code *)*puVar13)(plVar12,puVar13[1]);
  }
  return;
}


