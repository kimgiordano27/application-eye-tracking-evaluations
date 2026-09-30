/*
FUNCTION_NAME: FUN_074d7854
ENTRY_POINT: 074d7854
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x074d7bf4) */
/* WARNING: Removing unreachable block (ram,0x074d7b70) */
/* WARNING: Removing unreachable block (ram,0x074d7be8) */
/* WARNING: Removing unreachable block (ram,0x074d7b98) */

void FUN_074d7854(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  byte bVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 local_d0;
  undefined8 *puStack_c8;
  ulong local_c0;
  long local_b8;
  undefined1 *local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  ulong local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  ulong local_70;
  undefined1 local_68 [16];
  long local_58;
  
  puVar2 = PTR_DAT_07a02e00;
  if ((DAT_07ef4416 & 1) == 0) {
    FUN_03642964(
                Method_System_Collections_Generic_List_Enumerator<VisualTreeDataBindingsUpdater_VersionInfo>_get_Current__
                );
    FUN_03642964(PTR_DAT_07a02e00);
    FUN_03642964(PTR_DAT_07a28f68);
    FUN_03642964(Method_Unity_Collections_NativeParallelHashMap<int,_int>__ctor__);
    FUN_03642964(
                Method_Unity_Collections_NativeParallelHashMap<int,_InstanceCuller_AnimatedFadeData>_Dispose__
                );
    FUN_03642964(
                Method_Unity_Collections_NativeParallelHashMap<int,_InstanceCuller_AnimatedFadeData>_TryAdd__
                );
    FUN_03642964(PTR_DAT_079fe890);
    FUN_03642964(PTR_DAT_079fe898);
    FUN_03642964(
                Method_Unity_Collections_NativeParallelHashMap<int,_InstanceCuller_AnimatedFadeData>_TryGetValue__
                );
    FUN_03642964(
                Method_Unity_Collections_NativeParallelHashMap<int,_InstanceCuller_AnimatedFadeData>_get_Capacity__
                );
    FUN_03642964(PTR_DAT_079fe8a0);
    FUN_03642964(
                Method_Unity_Collections_NativeParallelHashMap<int,_InstanceCuller_AnimatedFadeData>_set_Capacity__
                );
    FUN_03642964(PTR_DAT_079f4d70);
    FUN_03642964(PTR_DAT_079fe8a8);
    FUN_03642964(PTR_DAT_079f4e28);
    FUN_03642964(
                Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>_Dispose__
                );
    DAT_07ef4416 = 1;
  }
  puVar3 = 
  Method_System_Collections_Generic_List_Enumerator<VisualTreeDataBindingsUpdater_VersionInfo>_get_Current__
  ;
  local_68._8_8_ = 0;
  local_58 = 0;
  local_70 = 0;
  local_68._0_8_ = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_90 = 0;
  local_a8 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  local_68 = FUN_0539b8a8(&local_58,*(undefined8 *)puVar3);
  local_b0 = local_68;
  local_b8 = 0;
  if (*(long *)(param_1 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  lVar11 = FUN_055faf60(*(long *)(param_1 + 0x90),
                        *(undefined8 *)
                         Method_Unity_Collections_NativeParallelHashMap<int,_InstanceCuller_AnimatedFadeData>_Dispose__
                       );
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  FUN_043b6760(&local_d0,lVar11,
               *(undefined8 *)
                Method_Unity_Collections_NativeParallelHashMap<int,_InstanceCuller_AnimatedFadeData>_set_Capacity__
              );
  puVar9 = 
  Method_Unity_Collections_NativeParallelHashMap<int,_InstanceCuller_AnimatedFadeData>_TryGetValue__
  ;
  puVar8 = 
  Method_Unity_Collections_NativeParallelHashMap<int,_InstanceCuller_AnimatedFadeData>_TryAdd__;
  puVar7 = Method_Unity_Collections_NativeParallelHashMap<int,_int>__ctor__;
  puVar6 = PTR_DAT_079fe8a8;
  puVar5 = PTR_DAT_079fe898;
  puVar4 = PTR_DAT_079fe890;
  puVar3 = PTR_DAT_079f4e28;
  puVar2 = PTR_DAT_079f4d70;
  uStack_78 = puStack_c8;
  local_80 = local_d0;
  local_70 = local_c0;
  puStack_c8 = &local_80;
  local_d0 = 0;
  while( true ) {
    uVar12 = FUN_0593ed90(&local_80,*(undefined8 *)puVar9);
    if ((uVar12 & 1) == 0) {
      FUN_0593ed8c(&local_80,*(undefined8 *)puVar8);
      if (local_58 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      FUN_04527a98(&local_d0,local_58,*(undefined8 *)puVar6);
      local_90 = local_c0;
      puStack_98 = puStack_c8;
      local_a0 = local_d0;
      local_d0 = 0;
      puStack_c8 = &local_a0;
      while (uVar12 = FUN_058831c4(&local_a0,*(undefined8 *)puVar5), (uVar12 & 1) != 0) {
        if (*(long *)(param_1 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        bVar10 = FUN_055fcd94(*(long *)(param_1 + 0x90),local_90 & 0xffffffff,&local_a8,
                              *(undefined8 *)puVar7);
        if ((bVar10 & local_a8 != 0) != 0) {
          uVar14 = *(undefined8 *)(local_a8 + 0x40);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          uVar12 = FUN_071c0684(uVar14,0,0);
          if ((uVar12 & 1) != 0) {
            if (local_a8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(char *)(local_a8 + 0x185) != '\0') {
              FUN_074d7d00(param_1,local_a8,*(undefined8 *)(local_a8 + 0x50));
            }
          }
        }
      }
      FUN_058831c0(&local_a0,*(undefined8 *)puVar4);
      FUN_04b15ef4(local_b0,*(undefined8 *)
                             Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>_Dispose__
                  );
      if (local_b8 == 0) {
        if (*(long *)(param_1 + 0x90) != 0) {
          FUN_055fb440(*(long *)(param_1 + 0x90),*(undefined8 *)PTR_DAT_07a28f68);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
                    /* WARNING: Subroutine does not return */
      FUN_03642c00();
    }
    if (local_58 == 0) break;
    lVar11 = *(long *)(local_58 + 0x10);
    lVar13 = *(long *)puVar2;
    *(int *)(local_58 + 0x1c) = *(int *)(local_58 + 0x1c) + 1;
    if (lVar11 == 0) break;
    uVar1 = *(uint *)(local_58 + 0x18);
    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
      *(uint *)(local_58 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar11 + (long)(int)uVar1 * 4 + 0x20) = (undefined4)local_70;
    }
    else {
      FUN_04526fb8(local_58,local_70 & 0xffffffff,
                   *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


