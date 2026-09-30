/*
FUNCTION_NAME: FUN_05bc5460
ENTRY_POINT: 05bc5460
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05bc5824) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_05bc5460(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  byte bVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  char local_4c [4];
  long local_48;
  
  puVar2 = OVRPlugin_OVRP_1_102_0_TypeInfo;
  if ((DAT_06dc24d0 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069fc740);
    FUN_02d965b8(PTR_DAT_06a0dbb0);
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<int,_TextResourceManager_FontAssetRef>_set_Item__
                );
    FUN_02d965b8(OVRPlugin_OVRP_1_102_0_TypeInfo);
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<int,_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo>__ctor__
                );
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<int,_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo>_TryAdd__
                );
    DAT_06dc24d0 = 1;
  }
  local_48 = 0;
  local_4c[0] = '\0';
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  plVar3 = (long *)FUN_05cf04dc(param_2,0);
  if (param_3 != 0) {
    if (plVar3 == (long *)0x0) goto LAB_05bc5820;
    (**(code **)(*plVar3 + 0x248))(plVar3,param_3,*(undefined8 *)(*plVar3 + 0x250));
  }
  if (param_4 != 0) {
    if (plVar3 == (long *)0x0) goto LAB_05bc5820;
    (**(code **)(*plVar3 + 0x278))(plVar3,param_4,*(undefined8 *)(*plVar3 + 0x280));
  }
  if (param_5 == 0) {
    if (plVar3 == (long *)0x0) goto LAB_05bc5820;
  }
  else {
    if (plVar3 == (long *)0x0) goto LAB_05bc5820;
    (**(code **)(*plVar3 + 0x1b8))(plVar3,param_5,*(undefined8 *)(*plVar3 + 0x1c0));
  }
  puVar2 = PTR_DAT_06a0dbb0;
  plVar4 = (long *)(**(code **)(*plVar3 + 0x2b8))(plVar3,*(undefined8 *)(*plVar3 + 0x2c0));
  bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
  if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
    if (plVar4 == (long *)0x0) {
LAB_05bc5820:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar5 = (**(code **)(*plVar4 + 0x1f8))(plVar4,*(undefined8 *)(*plVar4 + 0x200));
  }
  else {
    local_4c[0] = '\0';
    local_48 = param_1;
    FUN_0554bf68(param_1,local_4c,0);
    puVar11 = (undefined8 *)(param_1 + 0x10);
    plVar13 = (long *)*puVar11;
    if (plVar13 == (long *)0x0) {
      uVar5 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc740);
      FUN_054948a0(uVar5,0);
      *puVar11 = uVar5;
      LeanTween__value(puVar11,uVar5);
      plVar13 = (long *)*puVar11;
    }
    if (plVar3[8] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar5 = FUN_05c0b888(plVar3[8],0);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860(uVar5,uVar5);
    }
    plVar13 = (long *)(**(code **)(*plVar13 + 0x2f8))
                                (plVar13,uVar5,*(undefined8 *)(*plVar13 + 0x300));
    lVar9 = *(long *)
             Method_System_Collections_Generic_Dictionary<int,_TextResourceManager_FontAssetRef>_set_Item__
    ;
    if (plVar13 == (long *)0x0) {
      plVar13 = (long *)thunk_FUN_02dd3144(lVar9);
      FUN_0552aca4(plVar13,0);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
    }
    else if ((*(byte *)(*plVar13 + 0x130) < *(byte *)(lVar9 + 0x130)) ||
            (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(lVar9 + 0x130) * 8 + -8) !=
             lVar9)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96be0(plVar13);
    }
    lVar9 = plVar13[2];
    lVar6 = thunk_FUN_05c17538(plVar3,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if ((int)lVar9 < *(int *)(lVar6 + 0x78) + -1) {
      iVar10 = (int)plVar13[2];
      if (iVar10 == 0) {
        if (plVar3[8] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        plVar12 = (long *)*puVar11;
        uVar5 = FUN_05c0b888(plVar3[8],0);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860(uVar5,uVar5);
        }
        (**(code **)(*plVar12 + 0x298))(plVar12,uVar5,plVar13,*(undefined8 *)(*plVar12 + 0x2a0));
        iVar10 = (int)plVar13[2];
      }
      *(int *)(plVar13 + 2) = iVar10 + 1;
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar7 = (**(code **)(*plVar4 + 0x1f8))(plVar4,*(undefined8 *)(*plVar4 + 0x200));
      if (plVar3[8] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar8 = FUN_05c0b888(plVar3[8],0);
      uVar5 = thunk_FUN_02dd3144(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<int,_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo>_TryAdd__
                                );
      FUN_05bc58ec(uVar5,uVar7,param_1,uVar8);
    }
    else {
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar7 = (**(code **)(*plVar4 + 0x208))(plVar4,*(undefined8 *)(*plVar4 + 0x210));
      uVar8 = (**(code **)(*plVar4 + 0x1f8))(plVar4,*(undefined8 *)(*plVar4 + 0x200));
      uVar5 = thunk_FUN_02dd3144(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<int,_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo>__ctor__
                                );
      FUN_05bc5990(uVar5,uVar7,uVar8);
    }
    if (local_4c[0] != '\0') {
      thunk_FUN_02da42ec(local_48,0);
    }
  }
  return uVar5;
}


