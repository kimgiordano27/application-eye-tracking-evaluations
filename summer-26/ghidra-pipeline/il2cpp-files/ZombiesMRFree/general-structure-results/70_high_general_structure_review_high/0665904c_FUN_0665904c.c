/*
FUNCTION_NAME: FUN_0665904c
ENTRY_POINT: 0665904c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long FUN_0665904c(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  int iVar16;
  long *plVar17;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar4 = System_Func<InputControl,_bool>_TypeInfo;
  if ((DAT_073a0ca5 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f8aab0);
    FUN_02fe925c(System_Func<InputDevice,_string>_TypeInfo);
    FUN_02fe925c(System_Func<dd>_TypeInfo);
    FUN_02fe925c(System_Func<dt>_TypeInfo);
    FUN_02fe925c(System_Func<InputEventPtr,_InputControl>_TypeInfo);
    FUN_02fe925c(System_Func<InputUpdateType,_bool>_TypeInfo);
    FUN_02fe925c(System_Func<InstanceHandle,_IInspector>_TypeInfo);
    FUN_02fe925c(System_Func<du>_TypeInfo);
    FUN_02fe925c(System_Func<dy>_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f90e80);
    FUN_02fe925c(PTR_DAT_06f79a60);
    FUN_02fe925c(System_Func<int,_bool>_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f6e778);
    FUN_02fe925c(PTR_DAT_06f9ce10);
    FUN_02fe925c(System_Func<int,_int>_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f6e780);
    FUN_02fe925c(PTR_DAT_06f9ce18);
    FUN_02fe925c(PTR_DAT_06f6e770);
    FUN_02fe925c(System_Func<InternedString,_string>_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f6e768);
    FUN_02fe925c(System_Func<JProperty,_string>_TypeInfo);
    FUN_02fe925c(System_Func<IAstarAI,_Vector3>_TypeInfo);
    FUN_02fe925c(System_Func<IAPProduct,_string>_TypeInfo);
    FUN_02fe925c(System_Func<JsonProperty,_int>_TypeInfo);
    FUN_02fe925c(System_Func<JsonProperty,_JsonProperty>_TypeInfo);
    FUN_02fe925c(System_Func<JsonProperty,_string>_TypeInfo);
    FUN_02fe925c(System_Func<JsonProperty,_JsonSerializerInternalReader_PropertyPresence>_TypeInfo);
    FUN_02fe925c(System_Func<InputControl,_bool>_TypeInfo);
    DAT_073a0ca5 = 1;
  }
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  lVar6 = thunk_FUN_0301080c(*(undefined8 *)puVar4);
  FUN_05b32c00(lVar6,0);
  puVar3 = System_Func<JProperty,_string>_TypeInfo;
  puVar2 = System_Func<InternedString,_string>_TypeInfo;
  puVar4 = System_Func<IAPProduct,_string>_TypeInfo;
  if (lVar6 != 0) {
    plVar17 = (long *)(lVar6 + 0x10);
    *plVar17 = param_1;
    thunk_FUN_03048534(plVar17,param_1);
    lVar7 = thunk_FUN_0301080c(*(undefined8 *)puVar3);
    FUN_0442fab4(lVar7,*(undefined8 *)puVar2);
    lVar8 = *(long *)puVar4;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar8 = *(long *)puVar4;
    }
    puVar4 = PTR_DAT_06f9ce10;
    if (lVar7 != 0) {
      lVar11 = *(long *)(lVar7 + 0x10);
      uVar10 = **(undefined8 **)(lVar8 + 0xb8);
      lVar8 = *(long *)PTR_DAT_06f9ce10;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      puVar3 = PTR_DAT_06f6e770;
      puVar2 = PTR_DAT_06f6e768;
      if (lVar11 != 0) {
        uVar1 = *(uint *)(lVar7 + 0x18);
        if (uVar1 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
          thunk_FUN_03048534();
        }
        else {
          FUN_044302e8(lVar7,uVar10,
                       *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        }
        lVar8 = thunk_FUN_0301080c(*(undefined8 *)puVar2);
        FUN_043b4bd8(lVar8,*(undefined8 *)puVar3);
        puVar2 = PTR_DAT_06f6e778;
        if (lVar8 != 0) {
          lVar11 = *(long *)(lVar8 + 0x10);
          lVar12 = *(long *)PTR_DAT_06f6e778;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar11 != 0) {
            uVar1 = *(uint *)(lVar8 + 0x18);
            if (uVar1 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(lVar8 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar11 + (long)(int)uVar1 * 4 + 0x20) = 0;
            }
            else {
              FUN_043b542c(lVar8,0,*(undefined8 *)
                                    (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            }
            if (((*plVar17 != 0) && (lVar11 = *(long *)(*plVar17 + 0x20), lVar11 != 0)) &&
               (plVar17 = *(long **)(lVar11 + 0x10), plVar17 != (long *)0x0)) {
              lVar11 = *plVar17;
              uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar13 != 0) {
                piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *(long *)System_Func<int,_bool>_TypeInfo) {
                    puVar9 = (undefined8 *)(lVar11 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                    goto LAB_066593ac;
                  }
                  uVar13 = uVar13 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar13 != 0);
              }
              puVar9 = (undefined8 *)
                       FUN_02feb5b8(plVar17,*(long *)System_Func<int,_bool>_TypeInfo,1);
LAB_066593ac:
              lVar11 = (*(code *)*puVar9)(plVar17,puVar9[1]);
              puVar5 = System_Func<InputUpdateType,_bool>_TypeInfo;
              puVar3 = PTR_DAT_06f79a60;
              if (lVar11 != 0) {
                FUN_0433a7c0(&local_a0,lVar11,*(undefined8 *)System_Func<int,_int>_TypeInfo);
                uStack_78 = uStack_98;
                local_80 = local_a0;
                uStack_68 = uStack_88;
                local_70 = uStack_90;
                iVar16 = 1;
                while (uVar13 = Unity_Collections_LowLevel_Unsafe_UnsafeHashMap_Enumerator<UntypedWeakReferenceId,_RuntimeContentCatalog_SceneLocation>__get_Current
                                          (&local_80,*(undefined8 *)puVar5), uVar10 = local_70,
                      (uVar13 & 1) != 0) {
                  lVar11 = thunk_FUN_0301080c(*(undefined8 *)puVar3);
                  FUN_06937574(lVar11,0);
                  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02fe94e8();
                  }
                  FUN_06933980(lVar11,uVar10,0);
                  lVar12 = *(long *)(lVar7 + 0x10);
                  lVar14 = *(long *)puVar4;
                  *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02fe94e8();
                  }
                  uVar1 = *(uint *)(lVar7 + 0x18);
                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                    *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                    plVar17 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
                    *plVar17 = lVar11;
                    thunk_FUN_03048534(plVar17,lVar11);
                  }
                  else {
                    FUN_044302e8(lVar7,lVar11,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  lVar11 = *(long *)(lVar8 + 0x10);
                  lVar12 = *(long *)puVar2;
                  *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02fe94e8();
                  }
                  uVar1 = *(uint *)(lVar8 + 0x18);
                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                    *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                    *(int *)(lVar11 + (long)(int)uVar1 * 4 + 0x20) = iVar16;
                    iVar16 = iVar16 + 1;
                  }
                  else {
                    FUN_043b542c(lVar8,iVar16,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70))
                    ;
                    iVar16 = iVar16 + 1;
                  }
                }
                FUN_054df3c0(&local_80,
                             *(undefined8 *)System_Func<InputEventPtr,_InputControl>_TypeInfo);
                lVar11 = thunk_FUN_0301080c(*(undefined8 *)System_Func<dt>_TypeInfo);
                FUN_066532dc();
                puVar4 = System_Func<IAstarAI,_Vector3>_TypeInfo;
                lVar12 = *(long *)System_Func<IAstarAI,_Vector3>_TypeInfo;
                if (*(int *)(lVar12 + 0xe0) == 0) {
                  thunk_FUN_02fdcff0();
                  lVar12 = *(long *)puVar4;
                }
                if (lVar11 != 0) {
                  *(undefined8 *)(lVar11 + 0x28) = *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x18);
                  thunk_FUN_03048534();
                  puVar2 = PTR_DAT_06f90e80;
                  uVar10 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f90e80);
                  FUN_057f1394(uVar10,lVar6,*(undefined8 *)System_Func<JsonProperty,_int>_TypeInfo,0
                              );
                  *(undefined8 *)(lVar11 + 0x48) = uVar10;
                  thunk_FUN_03048534((undefined8 *)(lVar11 + 0x48),uVar10);
                  puVar4 = PTR_DAT_06f8aab0;
                  uVar10 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f8aab0);
                  FUN_0510f548(uVar10,lVar6,
                               *(undefined8 *)System_Func<JsonProperty,_JsonProperty>_TypeInfo,0);
                  *(undefined8 *)(lVar11 + 0x50) = uVar10;
                  thunk_FUN_03048534((undefined8 *)(lVar11 + 0x50),uVar10);
                  uVar10 = FUN_04431d44(lVar7,*(undefined8 *)PTR_DAT_06f9ce18);
                  *(undefined8 *)(lVar11 + 0x60) = uVar10;
                  thunk_FUN_03048534();
                  uVar10 = FUN_043b6de8(lVar8,*(undefined8 *)PTR_DAT_06f6e780);
                  FUN_054be7f4(lVar11,uVar10,*(undefined8 *)System_Func<dd>_TypeInfo);
                  uVar10 = thunk_FUN_0301080c(*(undefined8 *)puVar2);
                  FUN_057f1394(uVar10,lVar6,
                               *(undefined8 *)System_Func<JsonProperty,_string>_TypeInfo,0);
                  *(undefined8 *)(lVar11 + 0x80) = uVar10;
                  thunk_FUN_03048534((undefined8 *)(lVar11 + 0x80),uVar10);
                  uVar10 = thunk_FUN_0301080c(*(undefined8 *)puVar4);
                  FUN_0510f548(uVar10,lVar6,
                               *(undefined8 *)
                                System_Func<JsonProperty,_JsonSerializerInternalReader_PropertyPresence>_TypeInfo
                               ,0);
                  *(undefined8 *)(lVar11 + 0x88) = uVar10;
                  thunk_FUN_03048534((undefined8 *)(lVar11 + 0x88),uVar10);
                  *(undefined8 *)(lVar11 + 0x58) = param_2;
                  thunk_FUN_03048534((undefined8 *)(lVar11 + 0x58),param_2);
                  return lVar11;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


