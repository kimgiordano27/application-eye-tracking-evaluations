/*
FUNCTION_NAME: FUN_056570dc
ENTRY_POINT: 056570dc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_056570dc(long param_1,long *param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  undefined8 uVar19;
  int *piVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 local_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  long local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  if ((DAT_06b7f733 & 1) == 0) {
    FUN_02d6084c(System_Collections_Generic_List<RobotHealthConfig_HealthByLevel>_TypeInfo);
    FUN_02d6084c(System_Func<InputDevice,_InputEventPtr,_bool>_TypeInfo);
    FUN_02d6084c(System_Func<short,_Decimal,_object>_TypeInfo);
    FUN_02d6084c(Firebase_Platform_MainThreadProperty<bool>_TypeInfo);
    FUN_02d6084c(
                UnityEngine_UIElements_Layout_ManagedObjectStore<WeakReference<VisualElement>>_TypeInfo
                );
    FUN_02d6084c(System_Func<short,_int,_object>_TypeInfo);
    FUN_02d6084c(UnityEngine_UIElements_Layout_ManagedObjectStore<LayoutBaselineFunction>_TypeInfo);
                    /* try { // try from 05657168 to 057571a3 has its CatchHandler @ 05657168
                       catch() { ... } // from try @ 05657168 with catch @ 05657168
                       catch() { ... } // from try @ 056572f4 with catch @ 05657168
                       catch() { ... } // from try @ 05657344 with catch @ 05657168
                       catch() { ... } // from try @ 056574fc with catch @ 05657168
                       catch() { ... } // from try @ 0565751c with catch @ 05657168 */
    FUN_02d6084c(System_Func<short,_float,_object>_TypeInfo);
    FUN_02d6084c(System_Func<short,_uint,_object>_TypeInfo);
    FUN_02d6084c(UnityEngine_UIElements_Layout_ManagedObjectStore<LayoutMeasureFunction>_TypeInfo);
    FUN_02d6084c(System_Buffers_MemoryPool<IntPtr>_TypeInfo);
    FUN_02d6084c(System_Collections_Generic_List<SpectrumPayload_Spectrum>_TypeInfo);
                    /* try { // try from 056571a4 to 057571af has its CatchHandler @ 05657304 */
    FUN_02d6084c(PTR_DAT_0676be70);
    FUN_02d6084c(PTR_DAT_0675f3d8);
    FUN_02d6084c(System_Func<string,_CallSite<Func<CallSite,_object,_object,_object>>>_TypeInfo);
                    /* try { // try from 056571c4 to 057571cb has its CatchHandler @ 05657300 */
    FUN_02d6084c(System_Func<DropEventArgs>_TypeInfo);
                    /* try { // try from 056571d4 to 057571df has its CatchHandler @ 056572f4 */
    FUN_02d6084c(System_Func<MeshHandle>_TypeInfo);
    FUN_02d6084c(System_Func<int,_int,_bool>_TypeInfo);
    FUN_02d6084c(Newtonsoft_Json_Utilities_MethodCall<object,_object>_TypeInfo);
    FUN_02d6084c(System_Collections_Generic_List<DebugUI_Foldout_ContextMenuItem>_TypeInfo);
    FUN_02d6084c(
                Unity_Services_Core_Scheduler_Internal_MinimumBinaryHeap<ScheduledInvocation>_TypeInfo
                );
    DAT_06b7f733 = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
                    /* try { // try from 05657220 to 05757247 has its CatchHandler @ 05657310 */
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)System_Func<MeshHandle>_TypeInfo + 0x130);
    if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)System_Func<MeshHandle>_TypeInfo)) {
      if (param_3 != 0) {
        *(long *)(param_3 + 0x58) = (long)param_2;
        thunk_FUN_02dd37b4((long *)(param_3 + 0x58),param_2);
        if (*(long *)(param_1 + 0x10) != 0) {
                    /* try { // try from 0565727c to 057572a7 has its CatchHandler @ 0565730c */
          plVar8 = (long *)(*(long *)(param_1 + 0x10) + 0x48);
          *plVar8 = (long)param_2;
          thunk_FUN_02dd37b4(plVar8,param_2);
          lVar9 = FUN_05590690(param_2,0);
          if (lVar9 != 0) {
            lVar9 = FUN_05590690(param_2,0);
                    /* try { // try from 056572b4 to 057572d3 has its CatchHandler @ 05657314 */
            if ((lVar9 == 0) ||
               (lVar9 = FUN_04895520(lVar9,*(undefined8 *)
                                            System_Func<short,_Decimal,_object>_TypeInfo),
               puVar4 = 
               Unity_Services_Core_Scheduler_Internal_MinimumBinaryHeap<ScheduledInvocation>_TypeInfo
               , puVar3 = System_Func<short,_float,_object>_TypeInfo,
               puVar2 = System_Func<short,_int,_object>_TypeInfo, lVar9 == 0)) goto LAB_056579dc;
            FUN_04488580(&local_c8,lVar9,*(undefined8 *)System_Func<int,_int,_bool>_TypeInfo);
                    /* try { // try from 056572e8 to 057572eb has its CatchHandler @ 05657308 */
                    /* try { // try from 056572ec to 057572ef has its CatchHandler @ 056572fc */
                    /* try { // try from 056572f0 to 057572f3 has its CatchHandler @ 056572f8 */
            uStack_78 = uStack_c0;
            local_80 = local_c8;
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 056571d4 with catch @ 056572f4
                       try { // try from 056572f4 to 0575732b has its CatchHandler @ 05657168 */
            local_70 = local_b8;
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 056572f0 with catch @ 056572f8
                        */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 056572ec with catch @ 056572fc
                        */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 056571c4 with catch @ 05657300
                        */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 056571a4 with catch @ 05657304
                        */
            while (uVar10 = FUN_04b3add0(&local_80,*(undefined8 *)puVar3), lVar9 = local_70,
                  (uVar10 & 1) != 0) {
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 056572e8 with catch @ 05657308
                        */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 0565727c with catch @ 0565730c
                        */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 05657220 with catch @ 05657310
                        */
              plVar8 = (long *)FUN_05653050(param_3);
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 056572b4 with catch @ 05657314
                        */
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60ae8();
              }
              if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60ae8();
              }
              uVar22 = *(undefined8 *)(*(long *)(lVar9 + 0x10) + 0x10);
              uVar13 = *(undefined8 *)(lVar9 + 0x18);
              uVar19 = *(undefined8 *)(lVar9 + 0x20);
                    /* try { // try from 0565732c to 05757343 has its CatchHandler @ 05657514 */
              uVar23 = *(undefined8 *)(param_1 + 0x10);
              uVar11 = thunk_FUN_02d9d534(*(undefined8 *)puVar4);
                    /* try { // try from 05657344 to 057574eb has its CatchHandler @ 05657168 */
              FUN_0565fb58(uVar11,uVar22,uVar19,uVar13,uVar23,0);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60ae8();
              }
              (**(code **)(*plVar8 + 0x198))(plVar8,uVar11,*(undefined8 *)(*plVar8 + 0x1a0));
            }
            FUN_04b3adcc(&local_80,*(undefined8 *)puVar2);
          }
          puVar2 = UnityEngine_UIElements_Layout_ManagedObjectStore<LayoutBaselineFunction>_TypeInfo
          ;
          lVar9 = FUN_05590560(param_2,0);
          if (lVar9 != 0) {
            lVar9 = FUN_05590560(param_2,0);
            if ((lVar9 == 0) ||
               (lVar9 = FUN_04895520(lVar9,*(undefined8 *)
                                            Firebase_Platform_MainThreadProperty<bool>_TypeInfo),
               lVar9 == 0)) goto LAB_056579dc;
            FUN_04488580(&local_c8,lVar9,
                         *(undefined8 *)
                          Newtonsoft_Json_Utilities_MethodCall<object,_object>_TypeInfo);
            uStack_98 = uStack_c0;
            local_a0 = local_c8;
            local_90 = local_b8;
            while (uVar10 = FUN_04b3add0(&local_a0,*(undefined8 *)puVar2), lVar9 = local_90,
                  (uVar10 & 1) != 0) {
              if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60ae8();
              }
              if (*(long *)(local_90 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60ae8();
              }
              if (*(long *)(local_90 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60ae8();
              }
              uVar11 = *(undefined8 *)(*(long *)(local_90 + 0x10) + 0x10);
              uVar13 = *(undefined8 *)(local_90 + 0x20);
              uVar19 = *(undefined8 *)(local_90 + 0x28);
              uVar22 = *(undefined8 *)(local_90 + 0x18);
              uVar10 = FUN_05679f04(*(long *)(local_90 + 0x30),0);
              if ((uVar10 & 1) == 0) {
                lVar12 = *(long *)(lVar9 + 0x30);
                if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d60ae8();
                }
                uVar23 = *(undefined8 *)(lVar12 + 0x10);
              }
              else {
                uVar23 = 0;
              }
              uVar24 = *(undefined8 *)(param_1 + 0x10);
              lVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                           System_Collections_Generic_List<DebugUI_Foldout_ContextMenuItem>_TypeInfo
                                         );
              FUN_056547e4(lVar12,uVar11,uVar19,uVar13,uVar22,uVar23,uVar24);
              uVar13 = FUN_0559012c(lVar9,0);
              if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60ae8();
              }
              *(undefined8 *)(lVar12 + 0x40) = uVar13;
              thunk_FUN_02dd37b4();
              plVar8 = (long *)FUN_05652240(param_3);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60ae8();
              }
              (**(code **)(*plVar8 + 0x198))(plVar8,lVar12,*(undefined8 *)(*plVar8 + 0x1a0));
            }
            FUN_04b3adcc(&local_a0,
                         *(undefined8 *)
                          UnityEngine_UIElements_Layout_ManagedObjectStore<WeakReference<VisualElement>>_TypeInfo
                        );
          }
          lVar9 = FUN_055905e4(param_2,0);
          if (lVar9 != 0) {
            lVar9 = FUN_055905e4(param_2,0);
            if ((lVar9 == 0) ||
               (lVar9 = FUN_04895520(lVar9,*(undefined8 *)
                                            Firebase_Platform_MainThreadProperty<bool>_TypeInfo),
               lVar9 == 0)) goto LAB_056579dc;
            FUN_04488580(&local_c8,lVar9,
                         *(undefined8 *)
                          Newtonsoft_Json_Utilities_MethodCall<object,_object>_TypeInfo);
            uStack_98 = uStack_c0;
            local_a0 = local_c8;
            local_90 = local_b8;
            while (uVar10 = FUN_04b3add0(&local_a0,*(undefined8 *)puVar2), lVar9 = local_90,
                  (uVar10 & 1) != 0) {
              if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60ae8();
              }
              if (*(long *)(local_90 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60ae8();
              }
              if (*(long *)(local_90 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60ae8();
              }
              uVar11 = *(undefined8 *)(*(long *)(local_90 + 0x10) + 0x10);
              uVar13 = *(undefined8 *)(local_90 + 0x20);
              uVar19 = *(undefined8 *)(local_90 + 0x28);
              uVar22 = *(undefined8 *)(local_90 + 0x18);
              uVar10 = FUN_05679f04(*(long *)(local_90 + 0x30),0);
              if ((uVar10 & 1) == 0) {
                lVar12 = *(long *)(lVar9 + 0x30);
                if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d60ae8();
                }
                uVar23 = *(undefined8 *)(lVar12 + 0x10);
              }
              else {
                uVar23 = 0;
              }
              uVar24 = *(undefined8 *)(param_1 + 0x10);
              lVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                           System_Collections_Generic_List<DebugUI_Foldout_ContextMenuItem>_TypeInfo
                                         );
              FUN_056547e4(lVar12,uVar11,uVar19,uVar13,uVar22,uVar23,uVar24);
              uVar13 = FUN_0559012c(lVar9,0);
              if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60ae8();
              }
              *(undefined8 *)(lVar12 + 0x40) = uVar13;
              thunk_FUN_02dd37b4();
              plVar8 = (long *)FUN_05652240(param_3);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60ae8();
              }
              (**(code **)(*plVar8 + 0x198))(plVar8,lVar12,*(undefined8 *)(*plVar8 + 0x1a0));
            }
            FUN_04b3adcc(&local_a0,
                         *(undefined8 *)
                          UnityEngine_UIElements_Layout_ManagedObjectStore<WeakReference<VisualElement>>_TypeInfo
                        );
          }
          lVar9 = *(long *)(param_1 + 0x10);
          uVar13 = FUN_05652240(param_3);
          if (lVar9 != 0) {
            puVar21 = (undefined8 *)(lVar9 + 0x30);
            *puVar21 = uVar13;
            thunk_FUN_02dd37b4(puVar21,uVar13);
            puVar2 = System_Buffers_MemoryPool<IntPtr>_TypeInfo;
            if (param_2[2] != 0) {
              System_Collections_Generic_ArraySortHelper<SerializableDictionary_Item<object,_bool>>__Heapsort
                        (&local_c8,param_2[2],
                         *(undefined8 *)System_Func<InputDevice,_InputEventPtr,_bool>_TypeInfo);
              uStack_e8 = uStack_c0;
              local_f0 = local_c8;
              uStack_d8 = uStack_b0;
              lStack_e0 = local_b8;
              local_d0 = local_a8;
              plVar14 = (long *)thunk_FUN_02d9d164(*(undefined8 *)puVar2,&local_f0);
              plVar8 = (long *)PTR_DAT_0675f3d8;
              if (plVar14 == (long *)0x0) {
                return;
              }
              lVar9 = *plVar14;
              uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar10 != 0) {
                piVar20 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0675f3d8) {
                    puVar21 = (undefined8 *)(lVar9 + (long)(*piVar20 + 2) * 0x10 + 0x138);
                    goto LAB_056576bc;
                  }
                  uVar10 = uVar10 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar10 != 0);
              }
              puVar21 = (undefined8 *)FUN_02d9a5d4(plVar14,*(long *)PTR_DAT_0675f3d8,2);
LAB_056576bc:
              puVar6 = System_Collections_Generic_List<SpectrumPayload_Spectrum>_TypeInfo;
              puVar5 = System_Collections_Generic_List<RobotHealthConfig_HealthByLevel>_TypeInfo;
              puVar4 = 
              System_Func<string,_CallSite<Func<CallSite,_object,_object,_object>>>_TypeInfo;
              puVar3 = System_Func<DropEventArgs>_TypeInfo;
              puVar2 = PTR_DAT_0676be70;
              (*(code *)*puVar21)(plVar14,puVar21[1]);
LAB_056576f0:
              do {
                do {
                  lVar9 = *plVar14;
                  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
                  if (uVar10 != 0) {
                    piVar20 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar20 + -2) == *plVar8) {
                        puVar21 = (undefined8 *)(lVar9 + (long)*piVar20 * 0x10 + 0x138);
                        goto LAB_0565773c;
                      }
                      uVar10 = uVar10 - 1;
                      piVar20 = piVar20 + 4;
                    } while (uVar10 != 0);
                  }
                  puVar21 = (undefined8 *)FUN_02d9a5d4(plVar14,*plVar8,0);
LAB_0565773c:
                  uVar10 = (*(code *)*puVar21)(plVar14,puVar21[1]);
                  if ((uVar10 & 1) == 0) {
                    return;
                  }
                  lVar12 = *plVar14;
                  lVar9 = *(long *)puVar2;
                  uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
                  if (uVar10 != 0) {
                    piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar20 + -2) == lVar9) {
                        puVar21 = (undefined8 *)(lVar12 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                        goto LAB_0565779c;
                      }
                      uVar10 = uVar10 - 1;
                      piVar20 = piVar20 + 4;
                    } while (uVar10 != 0);
                  }
                  puVar21 = (undefined8 *)FUN_02d9a5d4(plVar14,lVar9,1);
LAB_0565779c:
                  plVar15 = (long *)(*(code *)*puVar21)(plVar14,puVar21[1]);
                  if (plVar15 == (long *)0x0) goto LAB_056579dc;
                  if (*plVar15 != *(long *)puVar3) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d60e88(plVar15);
                  }
                } while (plVar15[0xc] == 0);
                System_Collections_Generic_ArraySortHelper<SerializableDictionary_Item<object,_bool>>__Heapsort
                          (&local_c8,plVar15[0xc],*(undefined8 *)puVar5);
                uStack_e8 = uStack_c0;
                local_f0 = local_c8;
                uStack_d8 = uStack_b0;
                lStack_e0 = local_b8;
                local_d0 = local_a8;
                plVar16 = (long *)thunk_FUN_02d9d164(*(undefined8 *)puVar6,&local_f0);
                if (plVar16 == (long *)0x0) break;
                do {
                  lVar9 = *plVar16;
                  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
                  if (uVar10 != 0) {
                    piVar20 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar20 + -2) == *plVar8) {
                        puVar21 = (undefined8 *)(lVar9 + (long)*piVar20 * 0x10 + 0x138);
                        goto LAB_05657848;
                      }
                      uVar10 = uVar10 - 1;
                      piVar20 = piVar20 + 4;
                    } while (uVar10 != 0);
                  }
                  puVar21 = (undefined8 *)FUN_02d9a5d4(plVar16,*plVar8,0);
LAB_05657848:
                  uVar10 = (*(code *)*puVar21)(plVar16,puVar21[1]);
                  if ((uVar10 & 1) == 0) goto LAB_056576f0;
                  lVar12 = *plVar16;
                  lVar9 = *(long *)puVar2;
                  uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
                  if (uVar10 != 0) {
                    piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar20 + -2) == lVar9) {
                        puVar21 = (undefined8 *)(lVar12 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                        goto LAB_056578a8;
                      }
                      uVar10 = uVar10 - 1;
                      piVar20 = piVar20 + 4;
                    } while (uVar10 != 0);
                  }
                  puVar21 = (undefined8 *)FUN_02d9a5d4(plVar16,lVar9,1);
LAB_056578a8:
                  plVar17 = (long *)(*(code *)*puVar21)(plVar16,puVar21[1]);
                  if (plVar17 == (long *)0x0) goto LAB_056579dc;
                  if (*plVar17 != *(long *)puVar4) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d60e88(plVar17);
                  }
                  plVar18 = (long *)plVar17[6];
                  if (plVar18 == (long *)0x0) goto LAB_056579dc;
                  iVar7 = (**(code **)(*plVar18 + 0x188))(plVar18,*(undefined8 *)(*plVar18 + 400));
                } while (iVar7 != 1);
                lVar9 = *(long *)(param_1 + 0x10);
                uVar13 = FUN_0558f234(plVar15,0);
                if (((plVar15[2] == 0) || (lVar9 == 0)) || (*(long *)(lVar9 + 0x20) == 0)) break;
                uVar13 = FUN_05647f24(*(long *)(lVar9 + 0x20),uVar13,
                                      *(undefined8 *)(plVar15[2] + 0x10),
                                      **(undefined8 **)(*(long *)(PTR_DAT_0675e258 + 0x90) + 0xb8),0
                                     );
                lVar12 = *(long *)(param_1 + 0x10);
                uVar19 = FUN_0558f234(plVar17,0);
                if ((plVar17[2] == 0) || (lVar12 == 0)) break;
                uVar19 = FUN_05648674(lVar12,uVar19,*(undefined8 *)(plVar17[2] + 0x10),
                                      **(undefined8 **)(*(long *)(PTR_DAT_0675e258 + 0x90) + 0xb8),0
                                     );
                FUN_0564e584(lVar9,uVar13,uVar19);
                plVar8 = (long *)PTR_DAT_0675f3d8;
              } while( true );
            }
          }
        }
      }
LAB_056579dc:
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
  }
  uVar11 = **(undefined8 **)(*(long *)(PTR_DAT_0675e258 + 0x90) + 0xb8);
  thunk_FUN_02dc61f4(UnityEngine_Networking_UnityWebRequestAsyncOperation_var);
  uVar13 = thunk_FUN_02d9d534();
  uVar19 = thunk_FUN_02dc61f4(System_Collections_Generic_List<IContextProperty>_TypeInfo);
  FUN_0566f150(uVar13,uVar19,uVar11,0);
  uVar19 = thunk_FUN_02dc61f4(Unity_Collections_NativeArray<Pose>_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_02d609b4(uVar13,uVar19);
}


