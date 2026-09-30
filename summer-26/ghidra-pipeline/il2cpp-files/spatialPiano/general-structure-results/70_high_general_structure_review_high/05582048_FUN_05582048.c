/*
FUNCTION_NAME: FUN_05582048
ENTRY_POINT: 05582048
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_13;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x0558226c) */

void FUN_05582048(long param_1,long param_2,long param_3,long param_4,byte param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  
  puVar1 = PTR_DAT_067c9f00;
  if ((DAT_06bbf9d8 & 1) == 0) {
    FUN_02f08768(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_Start<ColocationSessionEventHandler_<RequestScenePermissionIfNeeded>d__13>__
                );
    FUN_02f08768(PTR_DAT_067c9f00);
    FUN_02f08768(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_Start<ColocationSessionEventHandler_<SpaceSharingBeforeHostStart>d__12>__
                );
    FUN_02f08768(PTR_DAT_067cbf00);
    DAT_06bbf9d8 = 1;
  }
  lVar3 = *(long *)puVar1;
  local_48 = 0;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar3 = *(long *)puVar1;
  }
  if (**(long **)(lVar3 + 0xb8) != 0) {
    local_48 = FUN_03375e84(**(long **)(lVar3 + 0xb8),
                            *(undefined8 *)
                             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_Start<ColocationSessionEventHandler_<SpaceSharingBeforeHostStart>d__12>__
                            ,*(undefined4 *)(param_1 + 0x7c),param_2,param_5 & 1,
                            *(undefined8 *)
                             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_Start<ColocationSessionEventHandler_<RequestScenePermissionIfNeeded>d__13>__
                           );
    local_50 = &local_48;
    local_58 = 0;
    local_60 = 0;
    FUN_055814f4(&local_60,param_3,1);
    local_68 = 0;
    *(undefined8 *)(param_1 + 0x30) = local_60;
    FUN_055814f4(&local_68,param_4,1);
    *(undefined8 *)(param_1 + 0x28) = local_68;
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    iVar6 = *(int *)(param_3 + 0x18);
    if (iVar6 != *(int *)(param_4 + 0x18)) {
      uVar4 = FUN_05565bc4(0);
      uVar5 = thunk_FUN_02f6ef30(
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_Start<JsonReader_<MoveToContentFromNonContentAsync>d__14>__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar4,uVar5);
    }
    if (0 < iVar6) {
      plVar7 = (long *)(param_3 + 0x20);
      plVar8 = (long *)(param_4 + 0x20);
      do {
        if (*plVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar3 = *(long *)(*plVar7 + 0x78);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        if (*(long *)(lVar3 + 0x20) == 0) {
LAB_05582234:
          uVar4 = FUN_05565f30(0);
          uVar5 = thunk_FUN_02f6ef30(
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_Start<JsonReader_<MoveToContentFromNonContentAsync>d__14>__
                                    );
                    /* WARNING: Subroutine does not return */
          FUN_02f0888c(uVar4,uVar5);
        }
        if (*plVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar3 = *(long *)(*plVar8 + 0x78);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        if (*(long *)(lVar3 + 0x20) == 0) goto LAB_05582234;
        iVar6 = iVar6 + -1;
        plVar7 = plVar7 + 1;
        plVar8 = plVar8 + 1;
      } while (iVar6 != 0);
    }
    FUN_0558491c(param_1);
    puVar2 = PTR_DAT_067cbf00;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    *(byte *)(param_1 + 0x79) = param_5 & 1;
    lVar3 = *(long *)puVar2;
    if (param_2 != 0) {
      lVar3 = param_2;
    }
    *(long *)(param_1 + 0x20) = lVar3;
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar3 = *(long *)puVar1;
    }
    if (**(long **)(lVar3 + 0xb8) != 0) {
      FUN_05077798(**(long **)(lVar3 + 0xb8),3,*local_50,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


