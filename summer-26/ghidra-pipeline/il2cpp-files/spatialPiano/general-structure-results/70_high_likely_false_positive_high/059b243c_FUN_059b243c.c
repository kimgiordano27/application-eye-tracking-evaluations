/*
FUNCTION_NAME: FUN_059b243c
ENTRY_POINT: 059b243c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_21;paired_field_refs_with_structure_only;telemetry_or_network_hits_6;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_059b243c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 local_68;
  
  puVar2 = Method_System_Collections_Generic_List<UIDocument>_Insert__;
  if ((DAT_06bc1c11 & 1) == 0) {
    FUN_02f08768(Method_System_Collections_Generic_List<UIDocument>_Insert__);
    FUN_02f08768(
                Method_System_Collections_Generic_List<DataBindingManager_BindingRequest>_get_Count__
                );
                    /* try { // try from 059b2488 to 05ab2533 has its CatchHandler @ 059b2488
                       catch() { ... } // from try @ 059b2488 with catch @ 059b2488
                       catch() { ... } // from try @ 059b2608 with catch @ 059b2488
                       catch() { ... } // from try @ 059b2670 with catch @ 059b2488
                       catch() { ... } // from try @ 059b26c4 with catch @ 059b2488 */
    FUN_02f08768(
                Method_System_Collections_Generic_List<DataBindingManager_BindingRequest>_get_Item__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_List<DataBindingManager_BindingRequest>_set_Item__
                );
    FUN_02f08768(Method_System_Collections_Generic_List<DataBindingManager_ChangesFromUI>__ctor__);
    FUN_02f08768(Method_System_Collections_Generic_List<DataBindingManager_ChangesFromUI>_Add__);
    FUN_02f08768(Method_System_Collections_Generic_List<DataBindingManager_ChangesFromUI>_Clear__);
    FUN_02f08768(Method_Unity_Collections_NativeArray<CPUSharedInstanceFlags>_AsReadOnly__);
    FUN_02f08768(Method_Unity_Collections_NativeArray<CPUSharedInstanceFlags>_Dispose__);
    FUN_02f08768(Method_Unity_Collections_NativeArray<CPUSharedInstanceFlags>_GetSubArray__);
    FUN_02f08768(Method_Unity_Collections_NativeArray<Color>__ctor__);
    FUN_02f08768(Method_Unity_Collections_NativeArray<Color>__ctor__);
    FUN_02f08768(Method_Unity_Collections_NativeArray<Color>_Dispose__);
    FUN_02f08768(Method_Unity_Collections_NativeArray<ConfigurationDescriptor>_Dispose__);
    FUN_02f08768(Method_Unity_Collections_NativeArray<ConfigurationDescriptor>_get_IsCreated__);
    FUN_02f08768(Method_System_Collections_Generic_List<Value>_Clear__);
                    /* try { // try from 059b2534 to 05ab254f has its CatchHandler @ 059b2690 */
    FUN_02f08768(PTR_DAT_067c9cb8);
    FUN_02f08768(Method_Unity_Collections_NativeArray<BoundingSphere>_Dispose__);
    FUN_02f08768(Method_Unity_Collections_NativeArray<byte>_Reinterpret<byte>__);
                    /* try { // try from 059b255c to 05ab255f has its CatchHandler @ 059b2688 */
    FUN_02f08768(Method_Unity_Collections_NativeArray<byte>_Reinterpret<float>__);
    FUN_02f08768(PTR_DAT_067d7cf0);
                    /* try { // try from 059b2570 to 05ab258f has its CatchHandler @ 059b268c */
    FUN_02f08768(Method_System_Collections_Generic_List<HandJointId>__ctor__);
    FUN_02f08768(Method_Unity_Collections_NativeArray<byte>_Reinterpret<ushort>__);
    FUN_02f08768(Method_Unity_Collections_NativeArray<byte>_Reinterpret<uint>__);
    FUN_02f08768(Method_Unity_Collections_NativeArray<byte>_Reinterpret<Vector3>__);
    FUN_02f08768(Method_Unity_Collections_NativeArray<byte>__ctor__);
                    /* try { // try from 059b25a8 to 05ab25b3 has its CatchHandler @ 059b2684 */
    FUN_02f08768(PTR_DAT_067d6b88);
                    /* try { // try from 059b25b8 to 05ab25bb has its CatchHandler @ 059b2680 */
    FUN_02f08768(Method_System_Collections_Generic_Dictionary<int,_GraphicsFence>_set_Item__);
    FUN_02f08768(PTR_DAT_067d6b90);
    FUN_02f08768(Method_Unity_Collections_NativeArray<byte>__ctor__);
                    /* try { // try from 059b25d8 to 05ab25e7 has its CatchHandler @ 059b267c */
    DAT_06bc1c11 = 1;
  }
  puVar3 = Method_Unity_Collections_NativeArray<byte>_Reinterpret<Vector3>__;
  puVar1 = PTR_DAT_067c9cb8;
                    /* try { // try from 059b25f4 to 05ab25f7 has its CatchHandler @ 059b2678 */
  local_68 = 0;
                    /* try { // try from 059b25fc to 05ab2607 has its CatchHandler @ 059b2670 */
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
                    /* try { // try from 059b2608 to 05ab2667 has its CatchHandler @ 059b2488 */
  FUN_059531d0(param_1,0);
  FUN_0624193c(param_1,*(undefined8 *)puVar3,0);
  lVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
  FUN_0623f858(lVar6,0);
  puVar2 = Method_System_Collections_Generic_List<DataBindingManager_ChangesFromUI>__ctor__;
  if (lVar6 != 0) {
    FUN_0623f468(lVar6,1,0);
    lVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
    FUN_059a0670();
    puVar5 = Method_Unity_Collections_NativeArray<byte>__ctor__;
    puVar4 = Method_System_Collections_Generic_List<DataBindingManager_ChangesFromUI>_Clear__;
    puVar3 = PTR_DAT_067d6b90;
    if (lVar7 != 0) {
                    /* try { // try from 059b2668 to 05ab266b has its CatchHandler @ 059b2680 */
                    /* try { // try from 059b266c to 05ab266f has its CatchHandler @ 059b2674 */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 059b25fc with catch @ 059b2670
                       try { // try from 059b2670 to 05ab26ab has its CatchHandler @ 059b2488 */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 059b266c with catch @ 059b2674
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 059b25f4 with catch @ 059b2678
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 059b25d8 with catch @ 059b267c
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 059b25b8 with catch @ 059b2680
                       catch(type#1 @ 06402238) { ... } // from try @ 059b2668 with catch @ 059b2680
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 059b25a8 with catch @ 059b2684
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 059b255c with catch @ 059b2688
                        */
      FUN_0623f514(lVar7,*(undefined8 *)Method_Unity_Collections_NativeArray<byte>__ctor__,0);
                    /* catch(type#1 @ 06402238) { ... } // from try @ 059b2570 with catch @ 059b268c
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 059b2534 with catch @ 059b2690
                        */
      FUN_03e2ef28(lVar7,*(undefined8 *)puVar3,*(undefined8 *)puVar4);
      uVar13 = *(undefined8 *)puVar5;
      *(long *)(param_1 + 0x2f0) = lVar7;
                    /* try { // try from 059b26ac to 05ab26af has its CatchHandler @ 059b26b8 */
      FUN_0624193c(lVar6,uVar13,0);
                    /* catch() { ... } // from try @ 059b26ac with catch @ 059b26b8 */
                    /* try { // try from 059b26bc to 05ab26c3 has its CatchHandler @ 059b26cc */
      FUN_06247510(lVar6,*(undefined8 *)(param_1 + 0x2f0),0);
                    /* try { // try from 059b26c4 to 05ab26cf has its CatchHandler @ 059b2488 */
      lVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 059b26bc with catch @ 059b26cc
                        */
      FUN_0623f858(lVar7,0);
      if (lVar7 != 0) {
        FUN_0623f468(lVar7,1,0);
        lVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
        FUN_059a0670();
        puVar5 = Method_Unity_Collections_NativeArray<byte>_Reinterpret<byte>__;
        puVar3 = PTR_DAT_067d6b88;
        if (lVar8 != 0) {
          FUN_0623f514(lVar8,*(undefined8 *)
                              Method_Unity_Collections_NativeArray<byte>_Reinterpret<byte>__,0);
          FUN_03e2ef28(lVar8,*(undefined8 *)puVar3,*(undefined8 *)puVar4);
          uVar13 = *(undefined8 *)puVar5;
          *(long *)(param_1 + 0x2f8) = lVar8;
          FUN_0624193c(lVar7,uVar13,0);
          FUN_06247510(lVar7,*(undefined8 *)(param_1 + 0x2f8),0);
          lVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
          FUN_0623f858(lVar8,0);
          if (lVar8 != 0) {
            FUN_0623f468(lVar8,1,0);
            lVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
            FUN_059a0670();
            puVar5 = Method_Unity_Collections_NativeArray<byte>_Reinterpret<uint>__;
            puVar3 = Method_Unity_Collections_NativeArray<byte>_Reinterpret<float>__;
            if (lVar9 != 0) {
              FUN_0623f514(lVar9,*(undefined8 *)
                                  Method_Unity_Collections_NativeArray<byte>_Reinterpret<uint>__,0);
              FUN_03e2ef28(lVar9,*(undefined8 *)puVar3,*(undefined8 *)puVar4);
              uVar13 = *(undefined8 *)puVar5;
              *(long *)(param_1 + 0x2e8) = lVar9;
              FUN_0624193c(lVar8,uVar13,0);
              FUN_06247510(lVar8,*(undefined8 *)(param_1 + 0x2e8),0);
              lVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
              FUN_0623f858(lVar9,0);
              if (lVar9 != 0) {
                FUN_0623f468(lVar9,1,0);
                lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                FUN_059a0670();
                puVar5 = Method_Unity_Collections_NativeArray<byte>_Reinterpret<ushort>__;
                puVar3 = Method_System_Collections_Generic_List<Value>_Clear__;
                puVar1 = Method_System_Collections_Generic_List<HandJointId>__ctor__;
                puVar2 = PTR_DAT_067d7cf0;
                if (lVar10 != 0) {
                  FUN_0623f514(lVar10,*(undefined8 *)
                                       Method_Unity_Collections_NativeArray<byte>_Reinterpret<ushort>__
                               ,0);
                  FUN_03e2ef28(lVar10,*(undefined8 *)puVar2,*(undefined8 *)puVar4);
                  uVar13 = *(undefined8 *)puVar5;
                  *(long *)(param_1 + 0x300) = lVar10;
                  FUN_0624193c(lVar9,uVar13,0);
                  FUN_06247510(lVar9,*(undefined8 *)(param_1 + 0x300),0);
                  lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                  FUN_059be2f4(lVar10,*(undefined8 *)puVar1,0);
                  puVar1 = Method_Unity_Collections_NativeArray<byte>__ctor__;
                  puVar2 = 
                  Method_System_Collections_Generic_Dictionary<int,_GraphicsFence>_set_Item__;
                  if (lVar10 != 0) {
                    FUN_059be3bc(lVar10,2,0);
                    FUN_0623f468(lVar10,1,0);
                    FUN_0624193c(lVar10,*(undefined8 *)puVar1,0);
                    lVar11 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                    FUN_059be2f4(lVar11,*(undefined8 *)puVar2,0);
                    puVar2 = PTR_DAT_067c9cb8;
                    if (lVar11 != 0) {
                      FUN_059be3bc(lVar11,2,0);
                      FUN_0623f468(lVar11,1,0);
                      FUN_0624193c(lVar11,*(undefined8 *)puVar1,0);
                      lVar12 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                      FUN_0623f858(lVar12,0);
                      puVar1 = Method_Unity_Collections_NativeArray<BoundingSphere>_Dispose__;
                      if (lVar12 != 0) {
                        FUN_0623f514(lVar12,*(undefined8 *)
                                             Method_Unity_Collections_NativeArray<BoundingSphere>_Dispose__
                                     ,0);
                        FUN_0623f468(lVar12,1,0);
                        FUN_0624193c(lVar12,*(undefined8 *)puVar1,0);
                        FUN_06247510(lVar12,lVar10,0);
                        FUN_06247510(lVar12,lVar6,0);
                        FUN_06247510(lVar12,lVar7,0);
                        lVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                        FUN_0623f858(lVar6,0);
                        puVar5 = Method_Unity_Collections_NativeArray<Color>__ctor__;
                        puVar4 = 
                        Method_System_Collections_Generic_List<DataBindingManager_BindingRequest>_set_Item__
                        ;
                        puVar3 = 
                        Method_System_Collections_Generic_List<DataBindingManager_BindingRequest>_get_Item__
                        ;
                        puVar2 = 
                        Method_System_Collections_Generic_List<DataBindingManager_BindingRequest>_get_Count__
                        ;
                        if (lVar6 != 0) {
                          FUN_0623f514(lVar6,*(undefined8 *)puVar1,0);
                          FUN_0623f468(lVar6,1,0);
                          FUN_0624193c(lVar6,*(undefined8 *)puVar1,0);
                          FUN_06247510(lVar6,lVar11,0);
                          FUN_06247510(lVar6,lVar8,0);
                    /* try { // try from 059b2a38 to 05ab2a97 has its CatchHandler @ 059b2a38
                       catch() { ... } // from try @ 059b2a38 with catch @ 059b2a38
                       catch() { ... } // from try @ 059b2acc with catch @ 059b2a38
                       catch() { ... } // from try @ 059b2b08 with catch @ 059b2a38
                       catch() { ... } // from try @ 059b2b18 with catch @ 059b2a38
                       catch() { ... } // from try @ 059b2b58 with catch @ 059b2a38 */
                          FUN_06247510(lVar6,lVar9,0);
                          local_68 = *(undefined8 *)(param_1 + 0x260);
                          FUN_0624b7dc(&local_68,lVar12,0);
                          local_68 = *(undefined8 *)(param_1 + 0x260);
                          FUN_0624b7dc(&local_68,lVar6,0);
                          FUN_059b2c78(param_1,2);
                          FUN_059b2db0(param_1,0,0);
                    /* try { // try from 059b2a98 to 05ab2aab has its CatchHandler @ 059b2b24 */
                          uVar14 = *(undefined8 *)(param_1 + 0x2f0);
                          uVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                          FUN_04d8cf5c(uVar13,param_1,*(undefined8 *)puVar5,0);
                    /* try { // try from 059b2ac0 to 05ab2acb has its CatchHandler @ 059b2b20 */
                          FUN_034367bc(uVar14,uVar13,*(undefined8 *)puVar4);
                          uVar14 = *(undefined8 *)(param_1 + 0x2f8);
                    /* try { // try from 059b2acc to 05ab2b03 has its CatchHandler @ 059b2a38 */
                          uVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                          FUN_04d8cf5c(uVar13,param_1,
                                       *(undefined8 *)
                                        Method_Unity_Collections_NativeArray<ConfigurationDescriptor>_Dispose__
                                       ,0);
                          FUN_034367bc(uVar14,uVar13,*(undefined8 *)puVar4);
                          uVar14 = *(undefined8 *)(param_1 + 0x300);
                    /* try { // try from 059b2b04 to 05ab2b07 has its CatchHandler @ 059b2b1c */
                          uVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                    /* try { // try from 059b2b08 to 05ab2b13 has its CatchHandler @ 059b2a38 */
                    /* try { // try from 059b2b14 to 05ab2b17 has its CatchHandler @ 059b2b18 */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 059b2b14 with catch @ 059b2b18
                       try { // try from 059b2b18 to 05ab2b3f has its CatchHandler @ 059b2a38 */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 059b2b04 with catch @ 059b2b1c
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 059b2ac0 with catch @ 059b2b20
                        */
                          FUN_04d8cf5c(uVar13,param_1,
                                       *(undefined8 *)
                                        Method_Unity_Collections_NativeArray<CPUSharedInstanceFlags>_AsReadOnly__
                                       ,0);
                    /* catch(type#1 @ 06402238) { ... } // from try @ 059b2a98 with catch @ 059b2b24
                        */
                          FUN_034367bc(uVar14,uVar13,*(undefined8 *)puVar4);
                          uVar14 = *(undefined8 *)(param_1 + 0x2e8);
                          uVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                    /* try { // try from 059b2b40 to 05ab2b43 has its CatchHandler @ 059b2b4c */
                    /* catch() { ... } // from try @ 059b2b40 with catch @ 059b2b4c */
                    /* try { // try from 059b2b50 to 05ab2b57 has its CatchHandler @ 059b2b60 */
                    /* try { // try from 059b2b58 to 05ab2b63 has its CatchHandler @ 059b2a38 */
                          FUN_04d8cf5c(uVar13,param_1,
                                       *(undefined8 *)
                                        Method_Unity_Collections_NativeArray<CPUSharedInstanceFlags>_GetSubArray__
                                       ,0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 059b2b50 with catch @ 059b2b60
                        */
                          FUN_034367bc(uVar14,uVar13,*(undefined8 *)puVar4);
                          uVar14 = *(undefined8 *)(param_1 + 0x2f0);
                          uVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                          FUN_04d8cf5c(uVar13,param_1,
                                       *(undefined8 *)
                                        Method_Unity_Collections_NativeArray<Color>_Dispose__,0);
                          puVar2 = 
                          Method_System_Collections_Generic_List<DataBindingManager_ChangesFromUI>_Add__
                          ;
                          FUN_03487ec4(uVar14,uVar13,
                                       *(undefined8 *)
                                        Method_System_Collections_Generic_List<DataBindingManager_ChangesFromUI>_Add__
                                      );
                          uVar14 = *(undefined8 *)(param_1 + 0x2f8);
                          uVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                          FUN_04d8cf5c(uVar13,param_1,
                                       *(undefined8 *)
                                        Method_Unity_Collections_NativeArray<ConfigurationDescriptor>_get_IsCreated__
                                       ,0);
                          FUN_03487ec4(uVar14,uVar13,*(undefined8 *)puVar2);
                          uVar14 = *(undefined8 *)(param_1 + 0x300);
                          uVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                    /* try { // try from 059b2c00 to 05ab2c63 has its CatchHandler @ 059b2c00
                       catch() { ... } // from try @ 059b2c00 with catch @ 059b2c00
                       catch() { ... } // from try @ 059b2d08 with catch @ 059b2c00
                       catch() { ... } // from try @ 059b2dc4 with catch @ 059b2c00
                       catch() { ... } // from try @ 059b2e1c with catch @ 059b2c00 */
                          FUN_04d8cf5c(uVar13,param_1,
                                       *(undefined8 *)
                                        Method_Unity_Collections_NativeArray<CPUSharedInstanceFlags>_Dispose__
                                       ,0);
                          FUN_03487ec4(uVar14,uVar13,*(undefined8 *)puVar2);
                          uVar14 = *(undefined8 *)(param_1 + 0x2e8);
                          uVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                          FUN_04d8cf5c(uVar13,param_1,
                                       *(undefined8 *)
                                        Method_Unity_Collections_NativeArray<Color>__ctor__,0);
                          FUN_03487ec4(uVar14,uVar13,*(undefined8 *)puVar2);
                    /* try { // try from 059b2c64 to 05ab2c73 has its CatchHandler @ 059b2de8 */
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


