/*
FUNCTION_NAME: FUN_05e1fee0
ENTRY_POINT: 05e1fee0
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_7;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_05e1fee0(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  long local_a0;
  int iStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  long local_80;
  int iStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if ((DAT_06a5881c & 1) == 0) {
    FUN_02d4dc40(PTR_DAT_06646730);
    FUN_02d4dc40(
                Method_UnityEngine_XR_Interaction_Toolkit_Interactables_XRBaseInteractable_OnSelectEntering__
                );
    FUN_02d4dc40(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<WriteAsyncInner>d__33>__
                );
    FUN_02d4dc40(
                Method_UnityEngine_XR_Interaction_Toolkit_Interactables_XRBaseInteractable_OnSelectExited__
                );
    FUN_02d4dc40(
                Method_UnityEngine_XR_Interaction_Toolkit_Interactables_XRBaseInteractable_OnSelectExiting__
                );
    FUN_02d4dc40(
                Method_UnityEngine_XR_Interaction_Toolkit_Interactables_XRBaseInteractable_RemoveCustomReticle__
                );
    DAT_06a5881c = 1;
  }
  local_80 = 0;
  iStack_78 = 0;
  uStack_74 = 0;
  local_68 = 0;
  local_70 = 0;
  uStack_6c = 0;
  if (*(long *)(param_1 + 0x18) != param_2) {
    *(long *)(param_1 + 0x18) = param_2;
    thunk_FUN_02dc1ef0((long *)(param_1 + 0x18),param_2);
    lVar7 = *(long *)(param_1 + 0x10);
    if (lVar7 == 0) {
LAB_05e20150:
      if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      goto LAB_05e20164;
    }
    iVar11 = *(int *)(lVar7 + 0x18);
    *(undefined4 *)(lVar7 + 0x18) = 0;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (0 < iVar11) {
      FUN_05025690(*(undefined8 *)(lVar7 + 0x10),0,iVar11,0);
    }
    if (param_2 != 0) {
      FUN_059d0324(&local_a0,0);
      iStack_78 = iStack_98;
      local_80 = local_a0;
      uStack_6c = (undefined4)uStack_8c;
      local_68 = (undefined4)((ulong)uStack_8c >> 0x20);
      uStack_74 = uStack_94;
      local_70 = uStack_90;
      lVar7 = FUN_03278ff4(param_2,&local_80,
                           *(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<WriteAsyncInner>d__33>__
                          );
      if (lVar7 < 0) {
        local_a0 = lVar7;
        uVar5 = thunk_FUN_02d8a270(*(undefined8 *)(PTR_DAT_066462a0 + 0x68),&local_a0);
        uVar5 = FUN_04e80fdc(*(undefined8 *)
                              Method_UnityEngine_XR_Interaction_Toolkit_Interactables_XRBaseInteractable_RemoveCustomReticle__
                             ,param_2,uVar5,0);
        if (*(int *)(*(long *)PTR_DAT_06646730 + 0xe4) == 0) {
          thunk_FUN_02dabd98(*(long *)PTR_DAT_06646730);
        }
        FUN_05ea2df4(uVar5,0);
        iVar11 = 1;
      }
      else {
        iVar11 = iStack_78;
        if (iStack_78 < 1) goto LAB_05e20124;
      }
      puVar4 = 
      Method_UnityEngine_XR_Interaction_Toolkit_Interactables_XRBaseInteractable_OnSelectExited__;
      puVar3 = 
      Method_UnityEngine_XR_Interaction_Toolkit_Interactables_XRBaseInteractable_OnSelectEntering__;
      iVar12 = 0;
      do {
        lVar10 = *(long *)(param_1 + 0x10);
        lVar7 = thunk_FUN_02d8a638(*(undefined8 *)puVar3);
        FUN_05044d4c(lVar7,0);
        if (lVar7 == 0) goto LAB_05e20150;
        *(long *)(lVar7 + 0x18) = param_2;
        *(int *)(lVar7 + 0x10) = iVar12;
        thunk_FUN_02dc1ef0((long *)(lVar7 + 0x18),param_2);
        if (lVar10 == 0) goto LAB_05e20150;
        lVar8 = *(long *)(lVar10 + 0x10);
        lVar9 = *(long *)puVar4;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_05e20150;
        uVar1 = *(uint *)(lVar10 + 0x18);
        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar10 + 0x18) = uVar1 + 1;
          plVar6 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
          *plVar6 = lVar7;
          thunk_FUN_02dc1ef0(plVar6,lVar7);
        }
        else {
          FUN_036a5e08(lVar10,lVar7,
                       *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        }
        iVar12 = iVar12 + 1;
      } while (iVar11 != iVar12);
    }
  }
LAB_05e20124:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
LAB_05e20164:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


