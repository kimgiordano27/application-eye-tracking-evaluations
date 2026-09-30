/*
FUNCTION_NAME: OVRPlugin$$GetHandState
ENTRY_POINT: 033867ac
PROGRAM: gunraiders-libil2cpp.so
SCORE: 109
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetHandState(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  
  FUN_01c5d288(PTR_DAT_0422fb88);
  FUN_01c5d288(PTR_DAT_04230910);
  FUN_01c5d288(PTR_DAT_0422fb28);
  FUN_01c5d288(
              Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<Vector3Int,_List<ProbeBrickIndex_VoxelMeta>>_get_Current__
              );
  FUN_01c5d288(
              Method_System_Collections_Generic_Dictionary_Enumerator<Transform,_Vector3>_get_Current__
              );
  FUN_01c5d288(
              Photon_Voice_Unity_UtilityScripts_SaveIncomingStreamToFile_<>c__DisplayClass5_0_TypeInfo
              );
  *(undefined1 *)(unaff_x20 + 0x636) = 1;
  puVar2 = Method_System_Collections_Generic_Dictionary_Enumerator<Transform,_Vector3>_get_Current__
  ;
  if (unaff_x19 != (long *)0x0) {
    uVar3 = (**(code **)(*unaff_x19 + 0x658))();
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(lVar6);
      lVar6 = *(long *)puVar2;
    }
    puVar1 = Method_System_Collections_Generic_Dictionary_Enumerator<uint,_uint>_get_Current__;
    lVar9 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x28);
    if (lVar9 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(lVar6);
        lVar6 = *(long *)puVar2;
      }
      uVar10 = **(undefined8 **)(lVar6 + 0xb8);
      lVar9 = thunk_FUN_01c496e0(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary_Enumerator<string,_JSONNode>_Dispose__
                                );
      FUN_02b67c90(lVar9,uVar10,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<Vector3Int,_List<ProbeBrickIndex_VoxelMeta>>_get_Current__
                   ,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28) = lVar9;
    }
    plVar4 = (long *)FUN_02358a2c(uVar3,lVar9,*(undefined8 *)puVar1);
    if (plVar4 != (long *)0x0) {
      lVar6 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)
               Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<Vector3Int,_List<ProbeBrickIndex_VoxelMeta>>_Dispose__
             ) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_03386910;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01c72498(plVar4,*(long *)
                                    Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<Vector3Int,_List<ProbeBrickIndex_VoxelMeta>>_Dispose__
                            ,0);
LAB_03386910:
      plVar4 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
      puVar2 = PTR_DAT_04230960;
      if (plVar4 != (long *)0x0) {
        lVar6 = *plVar4;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_04230960) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_03386978;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_01c72498(plVar4,*(long *)PTR_DAT_04230960,0);
LAB_03386978:
        uVar7 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        puVar1 = PTR_DAT_0422fb28;
        if ((uVar7 & 1) == 0) {
          uVar3 = *(undefined8 *)
                   Photon_Voice_Unity_UtilityScripts_SaveIncomingStreamToFile_<>c__DisplayClass5_0_TypeInfo
          ;
          if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          FUN_032e04b8(uVar3,0);
          uVar7 = FUN_032e935c();
          uVar3 = 0;
          if ((uVar7 & 1) != 0) {
            plVar4 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_04230910,4);
            puVar2 = PTR_DAT_0422fb88;
            uVar3 = *(undefined8 *)PTR_DAT_0422fb88;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)puVar1);
            }
            lVar6 = FUN_032e04b8(uVar3,0);
            if (plVar4 == (long *)0x0) goto LAB_03386be0;
            if ((lVar6 != 0) &&
               (lVar9 = thunk_FUN_01c495e4(lVar6,*(undefined8 *)(*plVar4 + 0x40)), lVar9 == 0)) {
LAB_03386be8:
              uVar3 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
              FUN_01c5d37c(uVar3,0);
            }
            if ((int)plVar4[3] != 0) {
              plVar4[4] = lVar6;
              lVar6 = FUN_032e04b8(*(undefined8 *)puVar2,0);
              if ((lVar6 != 0) &&
                 (lVar9 = thunk_FUN_01c495e4(lVar6,*(undefined8 *)(*plVar4 + 0x40)), lVar9 == 0))
              goto LAB_03386be8;
              if (1 < *(uint *)(plVar4 + 3)) {
                plVar4[5] = lVar6;
                lVar6 = FUN_032e04b8(*(undefined8 *)puVar2,0);
                if ((lVar6 != 0) &&
                   (lVar9 = thunk_FUN_01c495e4(lVar6,*(undefined8 *)(*plVar4 + 0x40)), lVar9 == 0))
                goto LAB_03386be8;
                if (2 < *(uint *)(plVar4 + 3)) {
                  plVar4[6] = lVar6;
                  lVar6 = FUN_032e04b8(*(undefined8 *)puVar2,0);
                  if ((lVar6 != 0) &&
                     (lVar9 = thunk_FUN_01c495e4(lVar6,*(undefined8 *)(*plVar4 + 0x40)), lVar9 == 0)
                     ) goto LAB_03386be8;
                  if (3 < *(uint *)(plVar4 + 3)) {
                    plVar4[7] = lVar6;
                    uVar3 = FUN_032eb758();
                    return uVar3;
                  }
                }
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4ac();
          }
        }
        else {
          lVar6 = *plVar4;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) ==
                  *(long *)
                   Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<Vector3Int,_List<ProbeBrickIndex_VoxelMeta>>_MoveNext__
                 ) {
                puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_03386b5c;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar5 = (undefined8 *)
                   FUN_01c72498(plVar4,*(long *)
                                        Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<Vector3Int,_List<ProbeBrickIndex_VoxelMeta>>_MoveNext__
                                ,0);
LAB_03386b5c:
          uVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
          lVar6 = *plVar4;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_03386bb8;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar5 = (undefined8 *)FUN_01c72498(plVar4,*(long *)puVar2,0);
LAB_03386bb8:
          uVar7 = (*(code *)*puVar5)(plVar4,puVar5[1]);
          if ((uVar7 & 1) != 0) {
            thunk_FUN_01c273e8(
                              Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<XmlQualifiedName,_SchemaAttDef>_Dispose__
                              );
            uVar3 = thunk_FUN_01c496e0();
            uVar10 = thunk_FUN_01c273e8(
                                       Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<XmlQualifiedName,_SchemaAttDef>_MoveNext__
                                       );
            FUN_033584bc(uVar3,uVar10,0);
            uVar10 = thunk_FUN_01c273e8(
                                       Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<XmlQualifiedName,_SchemaAttDef>_get_Current__
                                       );
                    /* WARNING: Subroutine does not return */
            FUN_01c5d37c(uVar3,uVar10);
          }
        }
        return uVar3;
      }
    }
  }
LAB_03386be0:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


