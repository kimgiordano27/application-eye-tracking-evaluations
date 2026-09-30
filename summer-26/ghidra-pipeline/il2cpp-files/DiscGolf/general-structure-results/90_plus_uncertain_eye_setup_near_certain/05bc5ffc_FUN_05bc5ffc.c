/*
FUNCTION_NAME: FUN_05bc5ffc
ENTRY_POINT: 05bc5ffc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 112
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_9;validity_or_gating_hits_13;ui_or_gameplay_sink_hits_6;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_9
*/


/* WARNING: Removing unreachable block (ram,0x05bc65fc) */
/* WARNING: Removing unreachable block (ram,0x05bc6600) */
/* WARNING: Removing unreachable block (ram,0x05bc662c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_05bc5ffc(int *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  char local_7c [4];
  long local_78;
  undefined1 local_70 [16];
  int local_54;
  
  if ((DAT_06dc24d5 & 1) == 0) {
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05bc5fd8 with catch @ 05bc602c
                        */
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<long,_FontAsset>_ContainsKey__);
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05bc5fc8 with catch @ 05bc6030
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05bc5fc0 with catch @ 05bc6034
                        */
    FUN_02d965b8(
                UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_Primitives_Vector3TweenableVariable_TypeInfo
                );
    FUN_02d965b8(UnityEngine_Vector3Int_TypeInfo);
                    /* try { // try from 05bc604c to 05cc6063 has its CatchHandler @ 05bc6100 */
    FUN_02d965b8(OVRPlugin_OVRP_1_52_0_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_53_0_TypeInfo);
                    /* try { // try from 05bc6064 to 05cc60ef has its CatchHandler @ 05bc5d9c */
    FUN_02d965b8(OVRPlugin_OVRP_1_55_1_TypeInfo);
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<long,_FontAsset>_Remove__);
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<long,_Material>__ctor__);
    FUN_02d965b8(PTR_DAT_069fc740);
    FUN_02d965b8(PTR_DAT_06a0dbb0);
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<int,_TextResourceManager_FontAssetRef>_set_Item__
                );
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<long,_Material>_Add__);
    FUN_02d965b8(OVRPlugin_OVRP_1_64_0_TypeInfo);
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<long,_Material>_Remove__);
    FUN_02d965b8(OVRPlugin_OVRP_1_102_0_TypeInfo);
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<int,_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo>__ctor__
                );
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<int,_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo>_TryAdd__
                );
                    /* try { // try from 05bc60f0 to 05cc60ff has its CatchHandler @ 05bc6100 */
    DAT_06dc24d5 = 1;
  }
  puVar2 = UnityEngine_Vector3Int_TypeInfo;
                    /* catch() { ... } // from try @ 05bc604c with catch @ 05bc6100
                       catch() { ... } // from try @ 05bc60f0 with catch @ 05bc6100 */
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
                    /* try { // try from 05bc6104 to 05cc6107 has its CatchHandler @ 05bc6110 */
                    /* try { // try from 05bc6108 to 05cc6113 has its CatchHandler @ 05bc5d9c */
  local_54 = *param_1;
  lVar12 = *(long *)(param_1 + 0x10);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05bc6104 with catch @ 05bc6110
                        */
  local_78 = 0;
  local_7c[0] = '\0';
  if (local_54 == 0) {
    local_70 = *(undefined1 (*) [16])(param_1 + 0x14);
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    local_54 = -1;
    *param_1 = -1;
  }
  else {
    uVar11 = *(undefined8 *)(param_1 + 8);
    if (*(int *)(*(long *)OVRPlugin_OVRP_1_102_0_TypeInfo + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    lVar4 = FUN_05cf04dc(uVar11,0);
    plVar13 = (long *)(param_1 + 0x12);
    *plVar13 = lVar4;
    LeanTween__value(plVar13);
    if (*(long *)(param_1 + 10) != 0) {
      plVar5 = (long *)*plVar13;
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      (**(code **)(*plVar5 + 0x248))
                (plVar5,*(long *)(param_1 + 10),*(undefined8 *)(*plVar5 + 0x250));
    }
    if (*(long *)(param_1 + 0xc) != 0) {
      plVar5 = (long *)*plVar13;
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      (**(code **)(*plVar5 + 0x278))
                (plVar5,*(long *)(param_1 + 0xc),*(undefined8 *)(*plVar5 + 0x280));
    }
    if (*(long *)(param_1 + 0xe) != 0) {
      plVar5 = (long *)*plVar13;
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      (**(code **)(*plVar5 + 0x1b8))
                (plVar5,*(long *)(param_1 + 0xe),*(undefined8 *)(*plVar5 + 0x1c0));
    }
    lVar4 = FUN_0481ce3c(*(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<long,_Material>_Remove__);
    plVar5 = (long *)*plVar13;
    uVar11 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<long,_Material>__ctor__
                               );
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_03b7eadc(uVar11,plVar5,*(undefined8 *)(*plVar5 + 0x2d0),0);
    plVar13 = (long *)*plVar13;
    uVar6 = thunk_FUN_02dd3144(*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<long,_FontAsset>_Remove__
                              );
    if ((plVar13 == (long *)0x0) ||
       (FUN_03b78e40(uVar6,plVar13,*(undefined8 *)(*plVar13 + 0x2e0),0), lVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar4 = FUN_047fd488(lVar4,uVar11,uVar6,0,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<long,_Material>_Add__);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    local_70 = FUN_0481d044(lVar4,0,*(undefined8 *)OVRPlugin_OVRP_1_64_0_TypeInfo);
    uVar7 = FUN_04b88f80(local_70,*(undefined8 *)OVRPlugin_OVRP_1_55_1_TypeInfo);
    if ((uVar7 & 1) == 0) {
      local_54 = 0;
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0x14) = local_70;
      LeanTween__value(param_1 + 0x14,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_031e7cd8(param_1 + 2,local_70,param_1,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<long,_FontAsset>_ContainsKey__);
      return;
    }
  }
  plVar13 = (long *)FUN_04b88fc8(local_70,*(undefined8 *)OVRPlugin_OVRP_1_53_0_TypeInfo);
  plVar5 = *(long **)(param_1 + 0x12);
  if (plVar5 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_06a0dbb0 + 0x130);
    if ((bVar1 <= *(byte *)(*plVar5 + 0x130)) &&
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_06a0dbb0)) {
      local_7c[0] = '\0';
      local_78 = lVar12;
      FUN_0554bf68(lVar12,local_7c,0);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      puVar14 = (undefined8 *)(lVar12 + 0x10);
      plVar16 = (long *)*puVar14;
      if (plVar16 == (long *)0x0) {
        uVar11 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc740);
        FUN_054948a0(uVar11,0);
        *puVar14 = uVar11;
        LeanTween__value(puVar14,uVar11);
        plVar16 = (long *)*puVar14;
      }
      if (plVar5[8] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar11 = FUN_05c0b888(plVar5[8],0);
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860(uVar11,uVar11);
      }
      plVar16 = (long *)(**(code **)(*plVar16 + 0x2f8))
                                  (plVar16,uVar11,*(undefined8 *)(*plVar16 + 0x300));
      lVar4 = *(long *)
               Method_System_Collections_Generic_Dictionary<int,_TextResourceManager_FontAssetRef>_set_Item__
      ;
      if (plVar16 == (long *)0x0) {
        plVar16 = (long *)thunk_FUN_02dd3144(lVar4);
        FUN_0552aca4(plVar16,0);
        if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
      }
      else if ((*(byte *)(*plVar16 + 0x130) < *(byte *)(lVar4 + 0x130)) ||
              (*(long *)(*(long *)(*plVar16 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) !=
               lVar4)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96be0(plVar16);
      }
      lVar4 = plVar16[2];
      lVar8 = thunk_FUN_05c17538(plVar5,0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if ((int)lVar4 < *(int *)(lVar8 + 0x78) + -1) {
        iVar10 = (int)plVar16[2];
        if (iVar10 == 0) {
          if (plVar5[8] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          plVar15 = (long *)*puVar14;
          uVar11 = FUN_05c0b888(plVar5[8],0);
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860(uVar11,uVar11);
          }
          (**(code **)(*plVar15 + 0x298))(plVar15,uVar11,plVar16,*(undefined8 *)(*plVar15 + 0x2a0));
          iVar10 = (int)plVar16[2];
        }
        *(int *)(plVar16 + 2) = iVar10 + 1;
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar6 = (**(code **)(*plVar13 + 0x1f8))(plVar13,*(undefined8 *)(*plVar13 + 0x200));
        if (plVar5[8] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar9 = FUN_05c0b888(plVar5[8],0);
        uVar11 = thunk_FUN_02dd3144(*(undefined8 *)
                                     Method_System_Collections_Generic_Dictionary<int,_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo>_TryAdd__
                                   );
        FUN_05bc58ec(uVar11,uVar6,lVar12,uVar9);
      }
      else {
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar6 = (**(code **)(*plVar13 + 0x208))(plVar13,*(undefined8 *)(*plVar13 + 0x210));
        uVar9 = (**(code **)(*plVar13 + 0x1f8))(plVar13,*(undefined8 *)(*plVar13 + 0x200));
        uVar11 = thunk_FUN_02dd3144(*(undefined8 *)
                                     Method_System_Collections_Generic_Dictionary<int,_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo>__ctor__
                                   );
        FUN_05bc5990(uVar11,uVar6,uVar9);
      }
      if ((local_54 < 0) && (local_7c[0] != '\0')) {
        thunk_FUN_02da42ec(local_78,0);
      }
      goto LAB_05bc6360;
    }
  }
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  uVar11 = (**(code **)(*plVar13 + 0x1f8))(plVar13,*(undefined8 *)(*plVar13 + 0x200));
LAB_05bc6360:
  puVar3 = 
  UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_Primitives_Vector3TweenableVariable_TypeInfo
  ;
  *param_1 = -2;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  LeanTween__value(param_1 + 0x12,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_040b19d8(param_1 + 2,uVar11,*(undefined8 *)puVar3);
  return;
}


