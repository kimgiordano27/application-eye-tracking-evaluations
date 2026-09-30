/*
FUNCTION_NAME: FUN_05966084
ENTRY_POINT: 05966084
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x05966768) */

void FUN_05966084(long param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined8 local_d0;
  long **pplStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  long local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulong uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long *local_38;
  
  puVar2 = PTR_DAT_06312520;
  if ((DAT_066d37b7 & 1) == 0) {
    FUN_02b3c81c(Method_System_Data_AggregateNode_Eval__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_TextInputBaseField<int>_get_textInputBase__);
    FUN_02b3c81c(PTR_DAT_06312d90);
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<Plane>_GetSubArray__);
    FUN_02b3c81c(PTR_DAT_06312f78);
    FUN_02b3c81c(Method_AirHockeyUiHandler_ShowScoreBoard__);
    FUN_02b3c81c(PTR_DAT_06313048);
    FUN_02b3c81c(PTR_DAT_06312520);
    FUN_02b3c81c(Method_UnityEngine_Rendering_AllocateBinsPerBatch_Execute__);
    FUN_02b3c81c(Method_System_Collections_Generic_List<XmlNode>_Add__);
    FUN_02b3c81c(
                Method_Unity_Collections_AllocatorManager_AllocateBlock<AllocatorManager_AllocatorHandle>__
                );
    FUN_02b3c81c(
                Method_Unity_Collections_AllocatorManager_Free<AllocatorManager_AllocatorHandle,_byte>__
                );
    FUN_02b3c81c(Method_UnityEngine_UIElements_TextInputBaseField<float>_get_isDelayed__);
    FUN_02b3c81c(Method_System_AggregateException__ctor__);
    FUN_02b3c81c(Method_Unity_Collections_AllocatorManager_forward_mono_allocate_block__);
    FUN_02b3c81c(Method_UnityEngine_Analytics_Analytics_RegisterEvent__);
    DAT_066d37b7 = 1;
  }
  uVar14 = *(undefined8 *)(param_1 + 0xb8);
  local_50 = 0;
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  local_38 = (long *)0x0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_78 = 0;
  local_80 = 0;
  local_98 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar4 = FUN_05c8e378(uVar14,0,0);
  if ((uVar4 & 1) == 0) {
    if ((param_3 != 0) &&
       (lVar7 = FUN_0590661c(param_3,*(undefined8 *)
                                      Method_UnityEngine_UIElements_TextInputBaseField<int>_get_textInputBase__
                            ), lVar7 != 0)) {
      local_50 = *(undefined4 *)(lVar7 + 0x128);
      local_80 = *(undefined8 *)(lVar7 + 0xf8);
      local_70 = *(undefined8 *)(lVar7 + 0x108);
      uStack_58 = *(undefined8 *)(lVar7 + 0x120);
      local_60 = *(undefined8 *)(lVar7 + 0x118);
      uStack_68 = *(ulong *)(lVar7 + 0x110) & 0xffffffff;
      uStack_78 = CONCAT44((int)((ulong)*(undefined8 *)(lVar7 + 0x100) >> 0x20),1);
      uVar4 = FUN_05c97f74(5,0x20,0);
      uVar10 = 5;
      if ((uVar4 & 1) == 0) {
        uVar10 = 0x3b;
      }
      FUN_05c726ac(&local_80,uVar10,0);
      pplStack_c8 = (long **)uStack_78;
      local_d0 = local_80;
      uStack_b8 = uStack_68;
      uStack_c0 = local_70;
      uStack_a8 = uStack_58;
      local_b0 = local_60;
      local_a0 = local_50;
      if (*(int *)(*(long *)Method_UnityEngine_UIElements_TextInputBaseField<float>_get_isDelayed__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uStack_108 = pplStack_c8;
      local_110 = local_d0;
      uStack_f8 = uStack_b8;
      uStack_100 = uStack_c0;
      uStack_e8 = uStack_a8;
      local_f0 = local_b0;
      local_e0 = local_a0;
      local_90 = FUN_059891d4(param_2,&local_110,
                              *(undefined8 *)Method_System_AggregateException__ctor__,1,0,1,0);
      uVar12 = *(undefined8 *)(param_1 + 0x40);
      uVar14 = FUN_0590759c(param_1,0);
      if (param_2 != 0) {
        plVar5 = (long *)FUN_032fab48(param_2,uVar12,&local_98,uVar14,
                                      *(undefined8 *)
                                       Method_Unity_Collections_AllocatorManager_forward_mono_allocate_block__
                                      ,0xcb,*(undefined8 *)
                                             Method_UnityEngine_Rendering_AllocateBinsPerBatch_Execute__
                                     );
        pplStack_c8 = &local_38;
        local_d0 = 0;
        local_38 = plVar5;
        if (local_98 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        *(undefined1 (*) [16])(local_98 + 0x10) = local_90;
        puVar2 = Method_Unity_Collections_NativeArray<Plane>_GetSubArray__;
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        lVar7 = *plVar5;
        uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar4 != 0) {
          piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<Plane>_GetSubArray__) {
              puVar9 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_05966414;
            }
            uVar4 = uVar4 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar4 != 0);
        }
        puVar9 = (undefined8 *)
                 FUN_02b7654c(plVar5,*(long *)
                                      Method_Unity_Collections_NativeArray<Plane>_GetSubArray__,0);
LAB_05966414:
        (*(code *)*puVar9)(plVar5,local_90,6,puVar9[1]);
        FUN_0596603c(param_1,&local_98);
        plVar5 = local_38;
        if (local_38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        lVar8 = *local_38;
        lVar7 = *(long *)puVar2;
        uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar4 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar7) {
              puVar9 = (undefined8 *)(lVar8 + (long)(*piVar11 + 0xc) * 0x10 + 0x138);
              goto LAB_0596648c;
            }
            uVar4 = uVar4 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar4 != 0);
        }
        puVar9 = (undefined8 *)FUN_02b7654c(local_38,lVar7,0xc);
LAB_0596648c:
        (*(code *)*puVar9)(plVar5,1,puVar9[1]);
        if (*(int *)(*(long *)Method_System_Collections_Generic_List<XmlNode>_Add__ + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (DAT_066d2bb0 == '\0') {
          FUN_02b3c81c(PTR_DAT_06322b80);
          DAT_066d2bb0 = '\x01';
        }
        puVar3 = PTR_DAT_06322b80;
        if (*(int *)(*(long *)PTR_DAT_06322b80 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (DAT_066d2bb1 == '\0') {
          FUN_02b3c81c(PTR_DAT_06322b80);
          DAT_066d2bb1 = '\x01';
        }
        uVar1 = (uint)(ushort)local_90._2_2_;
        if (local_90._2_2_ != 0) {
          lVar7 = *(long *)puVar3;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar7 = *(long *)puVar3;
          }
          piVar11 = *(int **)(lVar7 + 0xb8);
          if (uVar1 << 0x10 != *piVar11) {
            if (*(int *)(lVar7 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              piVar11 = *(int **)(*(long *)puVar3 + 0xb8);
            }
            if (uVar1 << 0x10 != piVar11[1]) goto LAB_059665cc;
          }
          plVar5 = local_38;
          if (local_38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          lVar8 = *local_38;
          uVar10 = *(undefined4 *)(param_1 + 0xd0);
          lVar7 = *(long *)puVar2;
          uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar4 != 0) {
            piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == lVar7) {
                puVar9 = (undefined8 *)(lVar8 + (long)(*piVar11 + 3) * 0x10 + 0x138);
                goto LAB_059665b8;
              }
              uVar4 = uVar4 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar4 != 0);
          }
          puVar9 = (undefined8 *)FUN_02b7654c(local_38,lVar7,3);
LAB_059665b8:
          (*(code *)*puVar9)(plVar5,local_90,uVar10,puVar9[1]);
        }
LAB_059665cc:
        plVar5 = local_38;
        puVar2 = 
        Method_Unity_Collections_AllocatorManager_Free<AllocatorManager_AllocatorHandle,_byte>__;
        lVar7 = *(long *)
                 Method_Unity_Collections_AllocatorManager_Free<AllocatorManager_AllocatorHandle,_byte>__
        ;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar7 = *(long *)puVar2;
        }
        puVar9 = *(undefined8 **)(lVar7 + 0xb8);
        lVar8 = puVar9[1];
        if (lVar8 == 0) {
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            puVar9 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
          }
          uVar14 = *puVar9;
          lVar8 = thunk_FUN_02b79644(*(undefined8 *)Method_System_Data_AggregateNode_Eval__);
          FUN_03e026bc(lVar8,uVar14,
                       *(undefined8 *)
                        Method_Unity_Collections_AllocatorManager_AllocateBlock<AllocatorManager_AllocatorHandle>__
                       ,0);
          plVar6 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
          *plVar6 = lVar8;
          thunk_FUN_02bb0e9c(plVar6,lVar8);
        }
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        lVar7 = *plVar5;
        lVar13 = *(long *)Method_AirHockeyUiHandler_ShowScoreBoard__;
        uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar4 != 0) {
          piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)(lVar13 + 0x20)) {
              lVar7 = lVar7 + (long)(int)(*piVar11 + (uint)*(ushort *)(lVar13 + 0x50)) * 0x10 +
                      0x138;
              goto LAB_059666b0;
            }
            uVar4 = uVar4 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar4 != 0);
        }
        lVar7 = FUN_02b7654c(plVar5);
LAB_059666b0:
        lVar7 = thunk_FUN_02b5b75c(*(undefined8 *)(lVar7 + 8),lVar13);
        (**(code **)(lVar7 + 8))(plVar5,lVar8,lVar7);
        plVar5 = local_38;
        if (local_38 != (long *)0x0) {
          lVar7 = *local_38;
          uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar4 != 0) {
            piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_06312f78) {
                puVar9 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_05966734;
              }
              uVar4 = uVar4 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar4 != 0);
          }
          puVar9 = (undefined8 *)FUN_02b7654c(local_38,*(long *)PTR_DAT_06312f78,0);
LAB_05966734:
          (*(code *)*puVar9)(plVar5,puVar9[1]);
        }
        return;
      }
    }
  }
  else {
    plVar5 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,1);
    plVar6 = (long *)thunk_FUN_02b4c898(param_1,0);
    if ((plVar6 != (long *)0x0) &&
       (lVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0)),
       plVar5 != (long *)0x0)) {
      if ((lVar7 != 0) &&
         (lVar8 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar5 + 0x40)), lVar8 == 0)) {
        uVar14 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar14,0);
      }
      if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      plVar5[4] = lVar7;
      thunk_FUN_02bb0e9c(plVar5 + 4,lVar7);
      if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_05c45180(*(undefined8 *)Method_UnityEngine_Analytics_Analytics_RegisterEvent__,plVar5,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


