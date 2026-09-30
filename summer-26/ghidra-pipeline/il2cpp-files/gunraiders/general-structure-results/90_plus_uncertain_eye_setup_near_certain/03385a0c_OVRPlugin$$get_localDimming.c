/*
FUNCTION_NAME: OVRPlugin$$get_localDimming
ENTRY_POINT: 03385a0c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03385ac0) */
/* WARNING: Removing unreachable block (ram,0x03385c6c) */

long OVRPlugin__get_localDimming(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x24;
  undefined8 uVar9;
  long *unaff_x27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  
LAB_03385724:
  lVar5 = *unaff_x22;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x28) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_03385770;
      }
      uVar6 = uVar6 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_01c72498();
LAB_03385770:
  uVar6 = (*(code *)*puVar3)();
  puVar2 = Method_System_Collections_Generic_Dictionary_Enumerator<Transform,_Vector3>_get_Current__
  ;
  puVar1 = 
  Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<TerrainTileCoord,_Terrain>_Dispose__
  ;
  if ((uVar6 & 1) != 0) {
    lVar5 = *unaff_x22;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x27) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_033857cc;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01c72498();
LAB_033857cc:
    plVar4 = (long *)(*(code *)*puVar3)();
    if (*(char *)(unaff_x21 + 0x24) == '\0') goto code_r0x033857e4;
    goto LAB_03385834;
  }
  if (unaff_x22 == (long *)0x0) goto LAB_03385ab4;
  lVar5 = *unaff_x22;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 == 0) goto LAB_03385a68;
  piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
  goto LAB_03385a50;
code_r0x033857e4:
  uVar9 = *(undefined8 *)
           Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_XmlSqlBinaryReader_NamespaceDecl>_get_Current__
  ;
  if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar9 = FUN_032e04b8(uVar9,0);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4(uVar9,uVar9);
  }
  uVar6 = (**(code **)(*plVar4 + 0x1f8))(plVar4,uVar9,1,*(undefined8 *)(*plVar4 + 0x200));
  if ((uVar6 & 1) == 0) {
LAB_03385834:
    if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    uVar6 = FUN_02d503d4();
    if ((uVar6 & 1) == 0) {
      if (*(int *)(*(long *)UnityEngine_Splines_InterpolatorUtility_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      lVar5 = FUN_0236e6e0(plVar4,*unaff_x29);
      if (lVar5 == 0) {
        if (*(int *)(*(long *)UnityEngine_Splines_InterpolatorUtility_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        lVar5 = FUN_0236e6e0(plVar4,*(undefined8 *)
                                     Method_System_Collections_Generic_Dictionary_Enumerator<Transform,_List<UITextDamage>>_Dispose__
                            );
        if (lVar5 == 0) {
          if (in_stack_00000010 == 0) goto LAB_03385724;
          if (*(int *)(*(long *)UnityEngine_Splines_InterpolatorUtility_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          lVar5 = FUN_0236e6e0(plVar4,*(undefined8 *)
                                       Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<TerrainTileCoord,_Terrain>_MoveNext__
                              );
          if (lVar5 == 0) goto LAB_03385724;
          if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar5 = *(long *)(unaff_x19 + 0x10);
          *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar7 = (long)(int)*(uint *)(unaff_x19 + 0x18);
          if (*(uint *)(lVar5 + 0x18) <= *(uint *)(unaff_x19 + 0x18)) {
            FUN_02d5004c();
            goto LAB_03385724;
          }
        }
        else {
          if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar5 = *(long *)(unaff_x19 + 0x10);
          *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar7 = (long)(int)*(uint *)(unaff_x19 + 0x18);
          if (*(uint *)(lVar5 + 0x18) <= *(uint *)(unaff_x19 + 0x18)) {
            FUN_02d5004c();
            goto LAB_03385724;
          }
        }
      }
      else {
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar5 = *(long *)(unaff_x19 + 0x10);
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar7 = (long)(int)*(uint *)(unaff_x19 + 0x18);
        if (*(uint *)(lVar5 + 0x18) <= *(uint *)(unaff_x19 + 0x18)) {
          FUN_02d5004c();
          goto LAB_03385724;
        }
      }
    }
    else {
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar5 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar7 = (long)(int)*(uint *)(unaff_x19 + 0x18);
      if (*(uint *)(lVar5 + 0x18) <= *(uint *)(unaff_x19 + 0x18)) {
        FUN_02d5004c();
        goto LAB_03385724;
      }
    }
    *(int *)(unaff_x19 + 0x18) = (int)lVar7 + 1;
    *(long **)(lVar5 + lVar7 * 8 + 0x20) = plVar4;
  }
  goto LAB_03385724;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar8 = piVar8 + 4;
    if (uVar6 == 0) break;
LAB_03385a50:
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0422fce8) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_03385aa8;
    }
  }
LAB_03385a68:
  puVar3 = (undefined8 *)FUN_01c72498();
LAB_03385aa8:
  (*(code *)*puVar3)();
LAB_03385ab4:
  uVar6 = FUN_033847a4(in_stack_00000008,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary_Enumerator<Type,_List<string>>_Dispose__
                       ,0,&stack0x00000018);
  if ((uVar6 & 1) != 0) {
    thunk_FUN_01c496e0(*(undefined8 *)
                        Method_System_Collections_Generic_Dictionary_Enumerator<string,_RenderGraphDebugData>_get_Current__
                      );
    FUN_02b67c90();
    uVar9 = FUN_02358a2c();
    unaff_x19 = FUN_02357630(uVar9,*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary_Enumerator<TerrainTileCoord,_Terrain>_get_Current__
                            );
  }
  uVar9 = *(undefined8 *)
           Method_System_Collections_Generic_Dictionary<string,_MasterAudio_AudioGroupInfo>_GetEnumerator__
  ;
  if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  plVar4 = (long *)FUN_032e04b8(uVar9,0);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  uVar6 = (**(code **)(*plVar4 + 0x298))(plVar4,in_stack_00000008,*(undefined8 *)(*plVar4 + 0x2a0));
  if ((uVar6 & 1) != 0) {
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar5 = *(long *)puVar2;
    }
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar5 = *(long *)puVar2;
      }
      uVar9 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_01c496e0(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary_Enumerator<string,_RenderGraphDebugData>_get_Current__
                                );
      FUN_02b67c90(lVar7,uVar9,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary_Enumerator<Transform,_Vector3>_MoveNext__
                   ,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10) = lVar7;
    }
    uVar9 = FUN_02358a2c(unaff_x19,lVar7,*(undefined8 *)puVar1);
    unaff_x19 = FUN_02357630(uVar9,*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary_Enumerator<TerrainTileCoord,_Terrain>_get_Current__
                            );
  }
  return unaff_x19;
}


