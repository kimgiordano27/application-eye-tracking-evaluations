/*
FUNCTION_NAME: FUN_059b7488
ENTRY_POINT: 059b7488
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x059b7b38) */

void FUN_059b7488(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  int iVar17;
  undefined8 uVar18;
  long local_70;
  long *local_68;
  
  if ((DAT_066d3a5c & 1) == 0) {
    FUN_02b3c81c(Method_Firebase_Firestore_Converters_AttributedIdAssigner_MaybeCreateAssigner__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_TextInputBaseField<int>_get_textInputBase__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_TextInputBaseField<ulong>_get_isDelayed__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_TextInputBaseField<long>_get_isDelayed__);
    FUN_02b3c81c(
                Method_Meta_XR_MultiplayerBlocks_Colocation_AnchorDebugVisual_OnDebugVisibilityChanged__
                );
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<Plane>_GetSubArray__);
    FUN_02b3c81c(PTR_DAT_06312f78);
    FUN_02b3c81c(Method_Firebase_Firestore_Converters_AttributedTypeConverter__ctor__);
    FUN_02b3c81c(Method_Unity_Collections_NativeParallelHashMap<int,_int>_get_IsCreated__);
    FUN_02b3c81c(Method_Firebase_Firestore_Converters_AttributedTypeConverter_DeserializeMap__);
    FUN_02b3c81c(Method_System_Runtime_Serialization_Attributes_ReadArraySize__);
    FUN_02b3c81c(Method_System_Runtime_Serialization_Attributes_ReadId__);
    FUN_02b3c81c(Method_System_Runtime_Serialization_Attributes_ReadRef__);
    DAT_066d3a5c = 1;
  }
  puVar3 = Method_Meta_XR_MultiplayerBlocks_Colocation_AnchorDebugVisual_OnDebugVisibilityChanged__;
  puVar1 = Method_UnityEngine_UIElements_TextInputBaseField<ulong>_get_isDelayed__;
  puVar2 = Method_UnityEngine_UIElements_TextInputBaseField<int>_get_textInputBase__;
  local_70 = 0;
  local_68 = (long *)0x0;
  if (param_3 != 0) {
    FUN_0590661c(param_3,*(undefined8 *)
                          Method_UnityEngine_UIElements_TextInputBaseField<long>_get_isDelayed__);
    uVar5 = FUN_0590661c(param_3,*(undefined8 *)puVar2);
    uVar6 = FUN_0590661c(param_3,*(undefined8 *)puVar1);
    uVar7 = FUN_0590661c(param_3,*(undefined8 *)puVar3);
    uVar18 = *(undefined8 *)(param_1 + 0x40);
    uVar8 = FUN_0590759c(param_1,0);
    if (param_2 != 0) {
      local_68 = (long *)FUN_032fa71c(param_2,uVar18,&local_70,uVar8,
                                      *(undefined8 *)
                                       Method_System_Runtime_Serialization_Attributes_ReadRef__,0x52
                                      ,*(undefined8 *)
                                        Method_Firebase_Firestore_Converters_AttributedTypeConverter_DeserializeMap__
                                     );
      if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      *(undefined8 *)(local_70 + 0x10) = uVar5;
      thunk_FUN_02bb0e9c((undefined8 *)(local_70 + 0x10),uVar5);
      if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      *(undefined8 *)(local_70 + 0x18) = uVar6;
      thunk_FUN_02bb0e9c((undefined8 *)(local_70 + 0x18),uVar6);
      if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      *(undefined8 *)(local_70 + 0x20) = uVar7;
      thunk_FUN_02bb0e9c((undefined8 *)(local_70 + 0x20),uVar7);
      plVar4 = local_68;
      if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      *(undefined8 *)(local_70 + 0x28) = param_4;
      *(undefined8 *)(local_70 + 0x30) = param_5;
      puVar2 = Method_Unity_Collections_NativeParallelHashMap<int,_int>_get_IsCreated__;
      if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar12 = *local_68;
      uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) ==
              *(long *)Method_Unity_Collections_NativeParallelHashMap<int,_int>_get_IsCreated__) {
            puVar9 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_059b76d0;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar9 = (undefined8 *)
               FUN_02b7654c(local_68,*(long *)
                                      Method_Unity_Collections_NativeParallelHashMap<int,_int>_get_IsCreated__
                            ,0);
LAB_059b76d0:
      (*(code *)*puVar9)(plVar4,param_4,param_5,0,2,puVar9[1]);
      plVar4 = local_68;
      if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      *(undefined8 *)(local_70 + 0x38) = param_6;
      *(undefined8 *)(local_70 + 0x40) = param_7;
      if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar13 = *local_68;
      lVar12 = *(long *)puVar2;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar12) {
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar16 + 4) * 0x10 + 0x138);
            goto LAB_059b7750;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar9 = (undefined8 *)FUN_02b7654c(local_68,lVar12,4);
LAB_059b7750:
      (*(code *)*puVar9)(plVar4,param_6,param_7,2,puVar9[1]);
      if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      *(undefined8 *)(local_70 + 0x50) = *(undefined8 *)(param_1 + 0xb8);
      thunk_FUN_02bb0e9c();
      puVar1 = Method_Unity_Collections_NativeArray<Plane>_GetSubArray__;
      if (*(long *)(param_1 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if (*(char *)(*(long *)(param_1 + 0xb8) + 0x15) == '\0') {
        if (param_8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        if (0 < *(int *)(param_8 + 0x18)) {
          uVar15 = 0;
          do {
            if (*(long *)(param_1 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            uVar10 = FUN_059a1570(*(long *)(param_1 + 0xb8),0);
            plVar4 = local_68;
            if (uVar15 != (uVar10 & 0xffffffff)) {
              if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              if (*(uint *)(param_8 + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cacc();
              }
              lVar13 = *local_68;
              lVar12 = *(long *)puVar1;
              uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar10 != 0) {
                piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == lVar12) {
                    puVar9 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
                    goto LAB_059b78f4;
                  }
                  uVar10 = uVar10 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar10 != 0);
              }
              puVar9 = (undefined8 *)FUN_02b7654c(local_68,lVar12,0);
LAB_059b78f4:
              (*(code *)*puVar9)(plVar4,param_8 + 0x20 + uVar15 * 0x10,1,puVar9[1]);
            }
            uVar15 = uVar15 + 1;
          } while ((long)uVar15 < (long)*(int *)(param_8 + 0x18));
        }
      }
      else {
        if (param_8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        if (0 < *(int *)(param_8 + 0x18)) {
          iVar17 = 0;
          uVar15 = 0;
          do {
            if (*(long *)(param_1 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            uVar10 = FUN_059a1570(*(long *)(param_1 + 0xb8),0);
            plVar4 = local_68;
            if (uVar15 != (uVar10 & 0xffffffff)) {
              if (*(uint *)(param_8 + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cacc();
              }
              if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              lVar12 = param_8 + uVar15 * 0x10;
              lVar14 = *local_68;
              lVar13 = *(long *)puVar2;
              uVar5 = *(undefined8 *)(lVar12 + 0x20);
              uVar6 = *(undefined8 *)(lVar12 + 0x28);
              uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
              if (uVar10 != 0) {
                piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == lVar13) {
                    puVar9 = (undefined8 *)(lVar14 + (long)(*piVar16 + 2) * 0x10 + 0x138);
                    goto LAB_059b7830;
                  }
                  uVar10 = uVar10 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar10 != 0);
              }
              puVar9 = (undefined8 *)FUN_02b7654c(local_68,lVar13,2);
LAB_059b7830:
              (*(code *)*puVar9)(plVar4,uVar5,uVar6,iVar17,1,puVar9[1]);
              iVar17 = iVar17 + 1;
            }
            uVar15 = uVar15 + 1;
          } while ((long)uVar15 < (long)*(int *)(param_8 + 0x18));
        }
      }
      plVar4 = local_68;
      if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar13 = *local_68;
      lVar12 = *(long *)puVar1;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar12) {
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar16 + 0xc) * 0x10 + 0x138);
            goto LAB_059b7970;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar9 = (undefined8 *)FUN_02b7654c(local_68,lVar12,0xc);
LAB_059b7970:
      (*(code *)*puVar9)(plVar4,1,puVar9[1]);
      plVar4 = local_68;
      puVar2 = Method_System_Runtime_Serialization_Attributes_ReadId__;
      lVar12 = *(long *)Method_System_Runtime_Serialization_Attributes_ReadId__;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar12 = *(long *)puVar2;
      }
      puVar9 = *(undefined8 **)(lVar12 + 0xb8);
      lVar13 = puVar9[1];
      if (lVar13 == 0) {
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          puVar9 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
        }
        uVar5 = *puVar9;
        lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                     Method_Firebase_Firestore_Converters_AttributedIdAssigner_MaybeCreateAssigner__
                                   );
        FUN_03e02810(lVar13,uVar5,
                     *(undefined8 *)Method_System_Runtime_Serialization_Attributes_ReadArraySize__,0
                    );
        plVar11 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
        *plVar11 = lVar13;
        thunk_FUN_02bb0e9c(plVar11,lVar13);
      }
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar12 = *plVar4;
      lVar14 = *(long *)Method_Firebase_Firestore_Converters_AttributedTypeConverter__ctor__;
      uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)(lVar14 + 0x20)) {
            lVar12 = lVar12 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar14 + 0x50)) * 0x10 +
                     0x138;
            goto LAB_059b7a64;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      lVar12 = FUN_02b7654c(plVar4);
LAB_059b7a64:
      lVar12 = thunk_FUN_02b5b75c(*(undefined8 *)(lVar12 + 8),lVar14);
      (**(code **)(lVar12 + 8))(plVar4,lVar13,lVar12);
      plVar4 = local_68;
      if (local_68 != (long *)0x0) {
        lVar12 = *local_68;
        uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_06312f78) {
              puVar9 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_059b7ae8;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar9 = (undefined8 *)FUN_02b7654c(local_68,*(long *)PTR_DAT_06312f78,0);
LAB_059b7ae8:
        (*(code *)*puVar9)(plVar4,puVar9[1]);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


