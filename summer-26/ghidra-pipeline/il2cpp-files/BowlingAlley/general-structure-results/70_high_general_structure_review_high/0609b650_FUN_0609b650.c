/*
FUNCTION_NAME: FUN_0609b650
ENTRY_POINT: 0609b650
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0609b650(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 local_58;
  
  if ((DAT_076dd46b & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_07280380);
    thunk_FUN_032e1da0(PTR_DAT_07294ff0);
    thunk_FUN_032e1da0(PTR_DAT_072794f8);
    thunk_FUN_032e1da0(
                      System_Func<JsonProperty,_JsonSerializerInternalReader_PropertyPresence>_TypeInfo
                      );
    thunk_FUN_032e1da0(System_Func<SemaphoreSlim>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<Supported>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<object,_Vector3>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<OVRGrabbable,_int>_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_07282068);
    thunk_FUN_032e1da0(PTR_DAT_07287a50);
    thunk_FUN_032e1da0(PTR_DAT_07283e70);
    thunk_FUN_032e1da0(System_Func<JsonProperty,_int>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<IGrouping<AssetType,_PartnerAsset>,_List<PartnerAsset>>_TypeInfo)
    ;
    DAT_076dd46b = 1;
  }
  local_58 = 0;
  if (param_2 != 0) {
    iVar3 = FUN_0603244c(param_2,0);
    if ((iVar3 == 2) || (iVar3 == 4)) {
      return;
    }
    if (*(char *)(param_1 + 0x30) == '\0') {
      plVar6 = *(long **)(param_1 + 0x28);
      if (plVar6 == (long *)0x0) goto LAB_0609bbe8;
      (**(code **)(*plVar6 + 0x1c8))
                (plVar6,*(undefined8 *)System_Func<JsonProperty,_int>_TypeInfo,
                 *(undefined8 *)PTR_DAT_07283e70,
                 *(undefined8 *)System_Collections_Generic_Dictionary<OVRGrabbable,_int>_TypeInfo,
                 *(undefined8 *)(*plVar6 + 0x1d0));
      *(undefined1 *)(param_1 + 0x30) = 1;
    }
    lVar15 = *(long *)(param_2 + 0x10);
    if ((lVar15 != 0) && (plVar6 = *(long **)(lVar15 + 0x40), plVar6 != (long *)0x0)) {
      iVar4 = (**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
      puVar1 = PTR_DAT_07280380;
      local_58 = *(undefined8 *)(param_2 + 0x30);
      uVar13 = *(undefined8 *)(lVar15 + 0x90);
      if (*(int *)(*(long *)PTR_DAT_07280380 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(*(long *)PTR_DAT_07280380);
      }
      uVar7 = FUN_058e6bb4(0);
      uVar7 = FUN_059223b4(&local_58,uVar7,0);
      uVar13 = FUN_057a19ac(uVar13,uVar7,0);
      lVar14 = 0;
      if (iVar3 == 8) {
        if ((*(long *)(param_2 + 0x10) == 0) ||
           (lVar14 = *(long *)(*(long *)(param_2 + 0x10) + 0x188), lVar14 == 0)) goto LAB_0609bbe8;
        if ((*(long *)(lVar14 + 0x18) == 0) || (lVar14 = FUN_06033e08(param_2,0x100,0), lVar14 == 0)
           ) {
          lVar14 = 0;
        }
        else {
          if (*(long *)(lVar14 + 0x10) == 0) goto LAB_0609bbe8;
          local_58 = *(undefined8 *)(lVar14 + 0x30);
          uVar7 = *(undefined8 *)(*(long *)(lVar14 + 0x10) + 0x90);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          uVar8 = FUN_058e6bb4(0);
          uVar8 = FUN_059223b4(&local_58,uVar8,0);
          lVar14 = FUN_057a19ac(uVar7,uVar8,0);
        }
      }
      lVar9 = FUN_0601931c(lVar15,0);
      if (lVar9 != 0) {
        if (*(int *)(lVar9 + 0x10) == 0) {
          puVar12 = *(undefined8 **)(*(long *)PTR_DAT_072794f8 + 0xb8);
        }
        else {
          puVar12 = (undefined8 *)(lVar15 + 0xa0);
        }
        uVar7 = *puVar12;
        if (*(long *)(lVar15 + 0xf8) == 0) {
          if (*(int *)(*(long *)PTR_DAT_07294ff0 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
        }
        else {
          FUN_06032f10(param_2,*(long *)(lVar15 + 0xf8),0x100,0);
        }
        if (*(long *)(param_2 + 0x10) != 0) {
          plVar6 = *(long **)(param_1 + 0x28);
          uVar8 = FUN_060214e0(*(long *)(param_2 + 0x10),0);
          if ((*(long *)(param_2 + 0x10) != 0) &&
             (uVar10 = FUN_0601931c(*(long *)(param_2 + 0x10),0), plVar6 != (long *)0x0)) {
            (**(code **)(*plVar6 + 0x1c8))
                      (plVar6,uVar7,uVar8,uVar10,*(undefined8 *)(*plVar6 + 0x1d0));
            puVar2 = System_Func<JsonProperty,_int>_TypeInfo;
            puVar1 = System_Collections_Generic_Dictionary<OVRGrabbable,_int>_TypeInfo;
            if (*(long *)(param_1 + 0x28) != 0) {
              FUN_062130a4(*(long *)(param_1 + 0x28),
                           *(undefined8 *)System_Func<JsonProperty,_int>_TypeInfo,
                           *(undefined8 *)PTR_DAT_07282068,
                           *(undefined8 *)
                            System_Collections_Generic_Dictionary<OVRGrabbable,_int>_TypeInfo,uVar13
                           ,0);
              if ((iVar3 == 8) && (uVar11 = FUN_0609bbec(param_2), (uVar11 & 1) != 0)) {
                if (*(long *)(param_1 + 0x28) == 0) goto LAB_0609bbe8;
                FUN_062130a4(*(long *)(param_1 + 0x28),*(undefined8 *)puVar2,
                             *(undefined8 *)System_Func<SemaphoreSlim>_TypeInfo,
                             *(undefined8 *)puVar1,*(undefined8 *)PTR_DAT_07287a50,0);
              }
              if (lVar14 != 0) {
                if (*(long *)(param_1 + 0x28) == 0) goto LAB_0609bbe8;
                FUN_062130a4(*(long *)(param_1 + 0x28),*(undefined8 *)puVar2,
                             *(undefined8 *)
                              System_Func<JsonProperty,_JsonSerializerInternalReader_PropertyPresence>_TypeInfo
                             ,*(undefined8 *)puVar1,lVar14,0);
              }
              plVar6 = *(long **)(param_1 + 0x38);
              if (plVar6 != (long *)0x0) {
                lVar15 = *(long *)(param_1 + 0x28);
                plVar6 = (long *)(**(code **)(*plVar6 + 0x308))
                                           (plVar6,param_2,*(undefined8 *)(*plVar6 + 0x310));
                if ((plVar6 != (long *)0x0) &&
                   (uVar13 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170))
                   , lVar15 != 0)) {
                  FUN_062130a4(lVar15,*(undefined8 *)
                                       System_Func<IGrouping<AssetType,_PartnerAsset>,_List<PartnerAsset>>_TypeInfo
                               ,*(undefined8 *)System_Func<Supported>_TypeInfo,
                               *(undefined8 *)
                                System_Collections_Generic_Dictionary<object,_Vector3>_TypeInfo,
                               uVar13,0);
                  if (0 < iVar4) {
                    iVar3 = 0;
                    do {
                      if (((*(long *)(param_2 + 0x10) == 0) ||
                          (lVar15 = *(long *)(*(long *)(param_2 + 0x10) + 0x40), lVar15 == 0)) ||
                         (plVar6 = (long *)FUN_0600bb38(lVar15,iVar3,0), plVar6 == (long *)0x0))
                      goto LAB_0609bbe8;
                      iVar5 = (**(code **)(*plVar6 + 0x1d8))
                                        (plVar6,*(undefined8 *)(*plVar6 + 0x1e0));
                      if (iVar5 == 2) {
LAB_0609bacc:
                        if ((*(long *)(param_2 + 0x10) == 0) ||
                           (lVar15 = *(long *)(*(long *)(param_2 + 0x10) + 0x40), lVar15 == 0))
                        goto LAB_0609bbe8;
                        uVar13 = FUN_0600bb38(lVar15,iVar3,0);
                        FUN_0609bcb4(param_1,param_2,uVar13,0x100);
                      }
                      else {
                        if (((*(long *)(param_2 + 0x10) == 0) ||
                            (lVar15 = *(long *)(*(long *)(param_2 + 0x10) + 0x40), lVar15 == 0)) ||
                           (plVar6 = (long *)FUN_0600bb38(lVar15,iVar3,0), plVar6 == (long *)0x0))
                        goto LAB_0609bbe8;
                        iVar5 = (**(code **)(*plVar6 + 0x1d8))
                                          (plVar6,*(undefined8 *)(*plVar6 + 0x1e0));
                        if (iVar5 == 4) goto LAB_0609bacc;
                      }
                      iVar3 = iVar3 + 1;
                    } while (iVar4 != iVar3);
                    if (0 < iVar4) {
                      iVar3 = 0;
                      do {
                        if (((*(long *)(param_2 + 0x10) == 0) ||
                            (lVar15 = *(long *)(*(long *)(param_2 + 0x10) + 0x40), lVar15 == 0)) ||
                           (plVar6 = (long *)FUN_0600bb38(lVar15,iVar3,0), plVar6 == (long *)0x0))
                        goto LAB_0609bbe8;
                        iVar5 = (**(code **)(*plVar6 + 0x1d8))
                                          (plVar6,*(undefined8 *)(*plVar6 + 0x1e0));
                        if (iVar5 == 1) {
LAB_0609bb7c:
                          if ((*(long *)(param_2 + 0x10) == 0) ||
                             (lVar15 = *(long *)(*(long *)(param_2 + 0x10) + 0x40), lVar15 == 0))
                          goto LAB_0609bbe8;
                          uVar13 = FUN_0600bb38(lVar15,iVar3,0);
                          FUN_0609bcb4(param_1,param_2,uVar13,0x100);
                        }
                        else {
                          if (((*(long *)(param_2 + 0x10) == 0) ||
                              (lVar15 = *(long *)(*(long *)(param_2 + 0x10) + 0x40), lVar15 == 0))
                             || (plVar6 = (long *)FUN_0600bb38(lVar15,iVar3,0),
                                plVar6 == (long *)0x0)) goto LAB_0609bbe8;
                          iVar5 = (**(code **)(*plVar6 + 0x1d8))
                                            (plVar6,*(undefined8 *)(*plVar6 + 0x1e0));
                          if (iVar5 == 3) goto LAB_0609bb7c;
                        }
                        iVar3 = iVar3 + 1;
                      } while (iVar4 != iVar3);
                    }
                  }
                  plVar6 = *(long **)(param_1 + 0x28);
                  if (plVar6 != (long *)0x0) {
                    (**(code **)(*plVar6 + 0x1d8))(plVar6,*(undefined8 *)(*plVar6 + 0x1e0));
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
LAB_0609bbe8:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


