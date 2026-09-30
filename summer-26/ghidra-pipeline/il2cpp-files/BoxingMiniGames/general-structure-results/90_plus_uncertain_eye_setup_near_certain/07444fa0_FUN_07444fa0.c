/*
FUNCTION_NAME: FUN_07444fa0
ENTRY_POINT: 07444fa0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 133
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x074454d0) */
/* WARNING: Removing unreachable block (ram,0x074454c8) */

undefined4 FUN_07444fa0(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  undefined4 local_7c;
  long local_78;
  undefined1 local_70 [16];
  long local_60;
  undefined1 local_58 [16];
  uint local_44;
  
  local_44 = param_2;
  if ((DAT_07ef3b0a & 1) == 0) {
    FUN_03642964(
                Method_System_Collections_Generic_Dictionary_Enumerator<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_Dispose__
                );
    FUN_03642964(
                Method_System_Collections_Generic_List_Enumerator<VisualTreeDataBindingsUpdater_VersionInfo>_get_Current__
                );
    FUN_03642964(PTR_DAT_07a02e00);
    FUN_03642964(PTR_DAT_079f4d70);
    FUN_03642964(PTR_DAT_07a220c8);
    FUN_03642964(PTR_DAT_079f5b88);
    FUN_03642964(PTR_DAT_079f5b90);
    FUN_03642964(
                Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>_Dispose__
                );
    DAT_07ef3b0a = 1;
  }
  puVar3 = PTR_DAT_07a02e00;
  local_58._0_8_ = 0;
  local_58._8_8_ = 0;
  local_70._8_8_ = 0;
  local_60 = 0;
  local_78 = 0;
  local_70._0_8_ = 0;
  local_7c = 0;
  if (param_2 == param_3) {
    uVar6 = FUN_05e14e9c(&local_44,param_2,0);
    return uVar6;
  }
  if (*(int *)(*(long *)PTR_DAT_07a02e00 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  puVar4 = 
  Method_System_Collections_Generic_List_Enumerator<VisualTreeDataBindingsUpdater_VersionInfo>_get_Current__
  ;
  local_58 = FUN_0539b8a8(&local_60,
                          *(undefined8 *)
                           Method_System_Collections_Generic_List_Enumerator<VisualTreeDataBindingsUpdater_VersionInfo>_get_Current__
                         );
  puVar5 = 
  Method_System_Collections_Generic_Dictionary_Enumerator<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_Dispose__
  ;
  puVar2 = PTR_DAT_079f4d70;
  while( true ) {
    lVar9 = *(long *)puVar5;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar9 = *(long *)puVar5;
    }
    if (param_2 == *(uint *)(*(long *)(lVar9 + 0xb8) + 0xa0)) break;
    if (local_60 == 0) {
LAB_0744545c:
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar9 = *(long *)(local_60 + 0x10);
    lVar14 = *(long *)puVar2;
    *(int *)(local_60 + 0x1c) = *(int *)(local_60 + 0x1c) + 1;
    if (lVar9 == 0) goto LAB_0744545c;
    uVar7 = *(uint *)(local_60 + 0x18);
    if (uVar7 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(local_60 + 0x18) = uVar7 + 1;
      *(uint *)(lVar9 + (long)(int)uVar7 * 4 + 0x20) = param_2;
    }
    else {
      FUN_04526fb8(local_60,param_2,
                   *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
    }
    if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    plVar10 = (long *)FUN_073d8fdc(*(long *)(param_1 + 0x30),0);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    param_2 = (**(code **)(*plVar10 + 0x2c8))(plVar10,param_2,*(undefined8 *)(*plVar10 + 0x2d0));
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  local_70 = FUN_0539b8a8(&local_78,*(undefined8 *)puVar4);
  uVar7 = param_3;
  while( true ) {
    lVar9 = *(long *)puVar5;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar9 = *(long *)puVar5;
    }
    lVar14 = local_60;
    lVar13 = *(long *)(lVar9 + 0xb8);
    if (uVar7 == *(uint *)(lVar13 + 0xa0)) {
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_036a1978();
        lVar13 = *(long *)(*(long *)puVar5 + 0xb8);
        uVar7 = *(uint *)(lVar13 + 0xa0);
      }
      if (lVar14 != 0) {
        lVar9 = *(long *)(lVar14 + 0x10);
        lVar15 = *(long *)puVar2;
        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
        if (lVar9 != 0) {
          uVar1 = *(uint *)(lVar14 + 0x18);
          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(lVar14 + 0x18) = uVar1 + 1;
            *(uint *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = uVar7;
          }
          else {
            FUN_04526fb8(lVar14,uVar7,
                         *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
            lVar13 = *(long *)(*(long *)puVar5 + 0xb8);
          }
          if (local_78 != 0) {
            lVar14 = *(long *)(local_78 + 0x10);
            uVar6 = *(undefined4 *)(lVar13 + 0xa0);
            lVar9 = *(long *)puVar2;
            *(int *)(local_78 + 0x1c) = *(int *)(local_78 + 0x1c) + 1;
            if (lVar14 != 0) {
              uVar7 = *(uint *)(local_78 + 0x18);
              if (uVar7 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(local_78 + 0x18) = uVar7 + 1;
                *(undefined4 *)(lVar14 + (long)(int)uVar7 * 4 + 0x20) = uVar6;
              }
              else {
                FUN_04526fb8(local_78,uVar6,
                             *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              }
              puVar2 = PTR_DAT_07a220c8;
              puVar3 = PTR_DAT_079f5b90;
              if (local_60 != 0) {
                iVar16 = 0;
                do {
                  if (*(int *)(local_60 + 0x18) <= iVar16) {
                    thunk_FUN_036aa1c8(PTR_DAT_079fb6d0);
                    uVar11 = thunk_FUN_0367fe20();
                    uVar12 = thunk_FUN_036aa1c8(
                                               Method_System_Collections_Generic_List<File_FileTypeResolver>_GetEnumerator__
                                               );
                    FUN_05d862e8(uVar11,uVar12,0);
                    uVar12 = thunk_FUN_036aa1c8(
                                               Method_System_Collections_Generic_List<File_FileTypeResolver>_Insert__
                                               );
                    /* WARNING: Subroutine does not return */
                    FUN_03642acc(uVar11,uVar12);
                  }
                  uVar6 = FUN_04526cc0(local_60,iVar16,*(undefined8 *)puVar3);
                  if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18(0,uVar6);
                  }
                  iVar8 = FUN_04527c44(local_78,uVar6,*(undefined8 *)puVar2);
                  if (-1 < iVar8) {
                    if (iVar16 == 0) {
                      uVar6 = 0xffffffff;
                    }
                    else {
                      if (local_60 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03642c18();
                      }
                      uVar6 = FUN_04526cc0(local_60,iVar16 + -1,*(undefined8 *)puVar3);
                      if (iVar8 != 0) {
                        if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_03642c18();
                        }
                        param_3 = FUN_04526cc0(local_78,iVar8 + -1,*(undefined8 *)puVar3);
                      }
                      if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03642c18();
                      }
                      lVar9 = FUN_073d8fdc(*(long *)(param_1 + 0x30),0);
                      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03642c18();
                      }
                      local_7c = FUN_072eee30(lVar9,uVar6,0);
                      if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03642c18();
                      }
                      lVar9 = FUN_073d8fdc(*(long *)(param_1 + 0x30),0);
                      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03642c18();
                      }
                      uVar6 = FUN_072eee30(lVar9,param_3,0);
                      uVar6 = FUN_05e14e9c(&local_7c,uVar6,0);
                    }
                    FUN_04b15ef4(local_70,*(undefined8 *)
                                           Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>_Dispose__
                                );
                    FUN_04b15ef4(local_58,*(undefined8 *)
                                           Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>_Dispose__
                                );
                    return uVar6;
                  }
                  iVar16 = iVar16 + 1;
                } while (local_60 != 0);
              }
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    if (local_78 == 0) break;
    lVar9 = *(long *)(local_78 + 0x10);
    lVar14 = *(long *)puVar2;
    *(int *)(local_78 + 0x1c) = *(int *)(local_78 + 0x1c) + 1;
    if (lVar9 == 0) break;
    uVar1 = *(uint *)(local_78 + 0x18);
    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(local_78 + 0x18) = uVar1 + 1;
      *(uint *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = uVar7;
    }
    else {
      FUN_04526fb8(local_78,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70)
                  );
    }
    if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    plVar10 = (long *)FUN_073d8fdc(*(long *)(param_1 + 0x30),0);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    uVar7 = (**(code **)(*plVar10 + 0x2c8))(plVar10,uVar7,*(undefined8 *)(*plVar10 + 0x2d0));
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


