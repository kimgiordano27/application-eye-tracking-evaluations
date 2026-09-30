/*
FUNCTION_NAME: FUN_073dcfa8
ENTRY_POINT: 073dcfa8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x073dd304) */
/* WARNING: Removing unreachable block (ram,0x073dd25c) */
/* WARNING: Removing unreachable block (ram,0x073dd3ac) */
/* WARNING: Removing unreachable block (ram,0x073dd39c) */
/* WARNING: Removing unreachable block (ram,0x073dd334) */

void FUN_073dcfa8(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 local_c8;
  undefined8 *puStack_c0;
  ulong local_b8;
  long local_b0;
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  ulong local_90;
  undefined8 local_80;
  undefined8 *puStack_78;
  ulong local_70;
  undefined1 local_68 [16];
  undefined1 local_58;
  undefined7 uStack_57;
  long local_50;
  undefined8 local_48;
  long local_38;
  
  if ((DAT_07ef372a & 1) == 0) {
    FUN_03642964(
                Method_System_Collections_Generic_List_Enumerator<VisualTreeDataBindingsUpdater_VersionInfo>_get_Current__
                );
    FUN_03642964(PTR_DAT_07a02e00);
    FUN_03642964(PTR_DAT_07a31068);
    FUN_03642964(PTR_DAT_079fe890);
    FUN_03642964(PTR_DAT_079fe898);
    FUN_03642964(PTR_DAT_079fe8a0);
    FUN_03642964(PTR_DAT_079f4d70);
    FUN_03642964(PTR_DAT_079fe8a8);
    FUN_03642964(
                Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>_Dispose__
                );
    DAT_07ef372a = 1;
  }
  local_58 = 0;
  uStack_57 = 0;
  local_68._0_8_ = 0;
  local_68._8_8_ = 0;
  local_38 = 0;
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  local_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_90 = 0;
  local_48 = 0;
  local_50 = param_1;
  thunk_FUN_036b7ad0(&local_50,param_1);
  local_58 = 0;
  if (*(long *)(param_1 + 0x370) != 0) {
    uVar6 = FUN_073db64c();
    local_48 = CONCAT44(local_48._4_4_,uVar6);
    if ((*(long *)(param_1 + 0x370) != 0) &&
       (lVar8 = *(long *)(*(long *)(param_1 + 0x370) + 0x38), lVar8 != 0)) {
      FUN_055fb440(lVar8,*(undefined8 *)PTR_DAT_07a31068);
      plVar9 = *(long **)(param_1 + 0x348);
      if ((plVar9 == (long *)0x0) ||
         (lVar8 = (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400)), lVar8 == 0)
         ) {
        if (*(long *)(param_1 + 0x370) != 0) {
          FUN_073dd6d0();
          goto LAB_073dd210;
        }
      }
      else if (*(long *)(param_1 + 0x370) != 0) {
        iVar7 = FUN_073dd79c();
        if (iVar7 < 1) {
          if (*(long *)(param_1 + 0x370) == 0) goto LAB_073dd388;
          iVar7 = FUN_073dd79c();
          if (iVar7 == 0) {
            if (*(long *)(param_1 + 0x370) == 0) goto LAB_073dd388;
            iVar7 = FUN_073db64c();
            if (0 < iVar7) {
              if (*(long *)(param_1 + 0x370) == 0) goto LAB_073dd388;
              FUN_073dd6d0();
              local_58 = 1;
            }
          }
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_07a02e00 + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          local_68 = FUN_0539b8a8(&local_38,
                                  *(undefined8 *)
                                   Method_System_Collections_Generic_List_Enumerator<VisualTreeDataBindingsUpdater_VersionInfo>_get_Current__
                                 );
          puVar5 = PTR_DAT_079fe8a8;
          local_a8 = local_68;
          local_b0 = 0;
          if (*(long *)(param_1 + 0x370) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          lVar8 = *(long *)(*(long *)(param_1 + 0x370) + 0x28);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          FUN_04527a98(&local_c8,lVar8,*(undefined8 *)PTR_DAT_079fe8a8);
          puVar4 = PTR_DAT_079fe898;
          puVar2 = PTR_DAT_079f4d70;
          puStack_78 = puStack_c0;
          local_80 = local_c8;
          local_70 = local_b8;
          local_c8 = 0;
          puStack_c0 = &local_80;
          while( true ) {
            uVar10 = FUN_058831c4(&local_80,*(undefined8 *)puVar4);
            puVar3 = PTR_DAT_079fe890;
            if ((uVar10 & 1) == 0) break;
            plVar9 = *(long **)(param_1 + 0x348);
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            iVar7 = (**(code **)(*plVar9 + 0x1e8))
                              (plVar9,local_70 & 0xffffffff,*(undefined8 *)(*plVar9 + 0x1f0));
            if (iVar7 < 0) {
              local_58 = 1;
            }
            else {
              if (*(long *)(param_1 + 0x370) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar10 = FUN_073dd7e4(*(long *)(param_1 + 0x370),iVar7);
              if ((uVar10 & 1) == 0) {
                local_58 = 1;
              }
              if (local_38 == 0) {
LAB_073dd374:
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar8 = *(long *)(local_38 + 0x10);
              lVar13 = *(long *)puVar2;
              *(int *)(local_38 + 0x1c) = *(int *)(local_38 + 0x1c) + 1;
              if (lVar8 == 0) goto LAB_073dd374;
              uVar1 = *(uint *)(local_38 + 0x18);
              if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                *(uint *)(local_38 + 0x18) = uVar1 + 1;
                *(int *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = iVar7;
              }
              else {
                FUN_04526fb8(local_38,iVar7,
                             *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
          FUN_058831c0(&local_80,*(undefined8 *)PTR_DAT_079fe890);
          if (*(long *)(param_1 + 0x370) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          FUN_073dd6d0();
          if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          FUN_04527a98(&local_c8,local_38,*(undefined8 *)puVar5);
          local_90 = local_b8;
          puStack_98 = puStack_c0;
          local_a0 = local_c8;
          local_c8 = 0;
          puStack_c0 = &local_a0;
          while( true ) {
            uVar11 = FUN_058831c4(&local_a0,*(undefined8 *)puVar4);
            uVar10 = local_90;
            if ((uVar11 & 1) == 0) break;
            plVar9 = *(long **)(param_1 + 0x348);
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar8 = *(long *)(param_1 + 0x370);
            uVar12 = (**(code **)(*plVar9 + 0x208))
                               (plVar9,local_90 & 0xffffffff,*(undefined8 *)(*plVar9 + 0x210));
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            FUN_073dd83c(lVar8,uVar10 & 0xffffffff,uVar12);
          }
          FUN_058831c0(&local_a0,*(undefined8 *)puVar3);
          lVar8 = local_b0;
          FUN_04b15ef4(local_a8,*(undefined8 *)
                                 Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>_Dispose__
                      );
          if (lVar8 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c00(lVar8);
          }
        }
LAB_073dd210:
        FUN_073dd74c(param_1,&local_58);
        return;
      }
    }
  }
LAB_073dd388:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


