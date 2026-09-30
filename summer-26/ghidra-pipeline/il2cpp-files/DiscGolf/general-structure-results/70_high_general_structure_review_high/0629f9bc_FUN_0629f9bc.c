/*
FUNCTION_NAME: FUN_0629f9bc
ENTRY_POINT: 0629f9bc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;telemetry_or_network_hits_18;functionality_data_collection_or_telemetry_hits_18
*/


void FUN_0629f9bc(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined4 uVar12;
  
  if ((DAT_06dc75d2 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069fb930);
    FUN_02d965b8(Method_UnityEngine_Mesh_SetArrayForChannel<Color>__);
    FUN_02d965b8(Method_Oculus_Platform_Request_HandleMessage__);
    FUN_02d965b8(Method_System_Net_Cache_RequestCacheManager_GetBinding__);
    FUN_02d965b8(Method_UnityEngine_Mesh_SetArrayForChannel<Vector3>__);
    FUN_02d965b8(PTR_DAT_069fc4d0);
    FUN_02d965b8(PTR_DAT_069fb990);
    FUN_02d965b8(Method_UnityEngine_UI_Extensions_ReorderableListElement_OnEndDrag__);
    FUN_02d965b8(
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddComputePass<STP_TaaData>__
                );
    FUN_02d965b8(Method_System_Net_Cache_RequestCachePolicy__ctor__);
    FUN_02d965b8(Method_System_Net_Cache_RequestCacheProtocol__ctor__);
    FUN_02d965b8(Method_System_Net_Cache_RequestCacheValidator_CreateValidator__);
    FUN_02d965b8(Method_System_Net_RequestStream_BeginRead__);
    FUN_02d965b8(Method_System_Net_RequestStream_BeginWrite__);
    FUN_02d965b8(Method_System_Net_RequestStream_EndRead__);
    FUN_02d965b8(Method_System_Net_RequestStream_EndWrite__);
    DAT_06dc75d2 = 1;
  }
  puVar4 = Method_UnityEngine_UI_Extensions_ReorderableListElement_OnEndDrag__;
  puVar2 = PTR_DAT_069fb990;
  if (DAT_06dc7687 == '\0') {
    FUN_02d965b8(Method_UnityEngine_UI_Extensions_ReorderableListElement_OnEndDrag__);
    DAT_06dc7687 = '\x01';
  }
  uVar9 = **(undefined8 **)(*(long *)puVar4 + 0xb8);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar6 = FUN_06350670(uVar9,0,0);
  if ((uVar6 & 1) == 0) {
    if (DAT_06dc7687 == '\0') {
      FUN_02d965b8(Method_UnityEngine_UI_Extensions_ReorderableListElement_OnEndDrag__);
      DAT_06dc7687 = '\x01';
    }
    uVar9 = **(undefined8 **)(*(long *)puVar4 + 0xb8);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar6 = FUN_0634eb94(uVar9,param_1,0);
    if ((uVar6 & 1) != 0) {
      if (DAT_06dc7687 == '\0') {
        FUN_02d965b8(Method_UnityEngine_UI_Extensions_ReorderableListElement_OnEndDrag__);
        DAT_06dc7687 = '\x01';
      }
      uVar10 = **(undefined8 **)(*(long *)puVar4 + 0xb8);
      uVar9 = FUN_0634bbcc(param_1,0);
      uVar9 = FUN_0536e0dc(*(undefined8 *)
                            Method_System_Net_Cache_RequestCacheValidator_CreateValidator__,uVar10,
                           uVar9,0);
      if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)PTR_DAT_069fb930);
      }
      FUN_0630c038(uVar9,param_1,0);
      uVar9 = FUN_0634bbcc(param_1,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)puVar2);
      }
      FUN_063550b4(uVar9,0);
      return;
    }
  }
  else {
    if (DAT_06dc7688 == '\0') {
      FUN_02d965b8(Method_UnityEngine_UI_Extensions_ReorderableListElement_OnEndDrag__);
      DAT_06dc7688 = '\x01';
    }
    **(long **)(*(long *)puVar4 + 0xb8) = param_1;
    LeanTween__value(*(undefined8 *)(*(long *)puVar4 + 0xb8),param_1);
    lVar8 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
    if (lVar8 != 0) {
      (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),1,*(undefined8 *)(lVar8 + 0x28));
    }
  }
  puVar4 = Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddComputePass<STP_TaaData>__;
  uVar9 = FUN_0634bbcc(param_1,0);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_02df485c(*(long *)puVar4);
  }
  uVar9 = FUN_0629ab94(uVar9);
  *(undefined8 *)(param_1 + 0x3d0) = uVar9;
  LeanTween__value(param_1 + 0x3d0,uVar9);
  FUN_0634bbcc(param_1,0);
  uVar9 = FUN_062a02c0();
  plVar1 = (long *)(param_1 + 0x3d8);
  *(undefined8 *)(param_1 + 0x3d8) = uVar9;
  LeanTween__value(plVar1,uVar9);
  plVar11 = (long *)(param_1 + 0x20);
  lVar8 = *plVar11;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar6 = FUN_06350670(lVar8,0,0);
  if ((uVar6 & 1) != 0) {
    uVar9 = *(undefined8 *)(param_1 + 0x48);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar6 = FUN_0634eb94(uVar9,0,0);
    if ((uVar6 & 1) != 0) {
      if (*(long *)(param_1 + 0x48) == 0) goto LAB_062a02bc;
      *plVar11 = *(long *)(*(long *)(param_1 + 0x48) + 0x18);
      LeanTween__value(plVar11);
    }
    lVar8 = *plVar11;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar6 = FUN_06350670(lVar8,0,0);
    if ((uVar6 & 1) != 0) {
      uVar9 = *(undefined8 *)(param_1 + 0x50);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar6 = FUN_0634eb94(uVar9,0,0);
      if ((uVar6 & 1) != 0) {
        if (*(long *)(param_1 + 0x50) == 0) goto LAB_062a02bc;
        *plVar11 = *(long *)(*(long *)(param_1 + 0x50) + 0x18);
        LeanTween__value(plVar11);
      }
    }
    lVar8 = *plVar11;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar6 = FUN_06350670(lVar8,0,0);
    if ((uVar6 & 1) == 0) {
      if (*plVar11 == 0) goto LAB_062a02bc;
      uVar9 = thunk_FUN_06354368(*plVar11,0);
      uVar9 = FUN_05362cb4(*(undefined8 *)Method_System_Net_RequestStream_EndRead__,uVar9,0);
      lVar8 = *plVar11;
      if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)PTR_DAT_069fb930);
      }
      FUN_0630c038(uVar9,lVar8,0);
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_0630bcec(*(undefined8 *)Method_System_Net_RequestStream_BeginWrite__,param_1,0);
    }
  }
  plVar11 = (long *)(param_1 + 0x28);
  lVar8 = *plVar11;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar6 = FUN_06350670(lVar8,0,0);
  if ((uVar6 & 1) != 0) {
    uVar9 = *(undefined8 *)(param_1 + 0x108);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar6 = FUN_0634eb94(uVar9,0,0);
    if ((uVar6 & 1) != 0) {
      if (*(long *)(param_1 + 0x108) == 0) goto LAB_062a02bc;
      *plVar11 = *(long *)(*(long *)(param_1 + 0x108) + 0x18);
      LeanTween__value(plVar11);
    }
    lVar8 = *plVar11;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar6 = FUN_06350670(lVar8,0,0);
    if ((uVar6 & 1) == 0) {
      if (*plVar11 == 0) goto LAB_062a02bc;
      uVar9 = thunk_FUN_06354368(*plVar11,0);
      uVar9 = FUN_05362cb4(*(undefined8 *)Method_System_Net_Cache_RequestCachePolicy__ctor__,uVar9,0
                          );
      lVar8 = *plVar11;
      if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)PTR_DAT_069fb930);
      }
      FUN_0630c038(uVar9,lVar8,0);
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_0630bcec(*(undefined8 *)Method_System_Net_RequestStream_BeginRead__,param_1,0);
    }
  }
  uVar9 = *(undefined8 *)(param_1 + 0x160);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar6 = FUN_06350670(uVar9,0,0);
  puVar5 = Method_System_Net_Cache_RequestCacheManager_GetBinding__;
  puVar3 = Method_UnityEngine_Mesh_SetArrayForChannel<Vector3>__;
  if ((uVar6 & 1) == 0) goto LAB_062a019c;
  lVar8 = *(long *)(param_1 + 1000);
  if (lVar8 == 0) goto LAB_062a02bc;
  if (*(int *)(lVar8 + 0x18) < 1) {
    if ((*plVar1 == 0) || (lVar8 = *(long *)(*plVar1 + 0x20), lVar8 == 0)) goto LAB_062a02bc;
    if (0 < *(int *)(lVar8 + 0x18)) {
      lVar8 = FUN_0400ff1c(lVar8,0,*(undefined8 *)
                                    Method_UnityEngine_Mesh_SetArrayForChannel<Vector3>__);
      if ((lVar8 == 0) || (*(long *)(lVar8 + 0x18) == 0)) goto LAB_062a02bc;
      uVar9 = *(undefined8 *)(*(long *)(lVar8 + 0x18) + 0x28);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar6 = FUN_0634eb94(uVar9,0,0);
      if ((uVar6 & 1) != 0) {
        if ((((*plVar1 == 0) || (lVar8 = *(long *)(*plVar1 + 0x20), lVar8 == 0)) ||
            (lVar8 = FUN_0400ff1c(lVar8,0,*(undefined8 *)puVar3), lVar8 == 0)) ||
           (*(long *)(lVar8 + 0x18) == 0)) goto LAB_062a02bc;
        lVar8 = *(long *)(*(long *)(lVar8 + 0x18) + 0x28);
        goto joined_r0x062a00cc;
      }
    }
  }
  else {
    lVar8 = FUN_0400ff1c(lVar8,0,*(undefined8 *)
                                  Method_System_Net_Cache_RequestCacheManager_GetBinding__);
    if (lVar8 == 0) goto LAB_062a02bc;
    uVar9 = *(undefined8 *)(lVar8 + 0x18);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)puVar2);
    }
    uVar6 = FUN_0634eb94(uVar9,0,0);
    if ((uVar6 & 1) != 0) {
      if ((*(long *)(param_1 + 1000) == 0) ||
         (lVar8 = FUN_0400ff1c(*(long *)(param_1 + 1000),0,*(undefined8 *)puVar5), lVar8 == 0))
      goto LAB_062a02bc;
      lVar8 = *(long *)(lVar8 + 0x18);
joined_r0x062a00cc:
      if (lVar8 == 0) goto LAB_062a02bc;
      *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(lVar8 + 0x18);
      LeanTween__value(param_1 + 0x160);
    }
  }
  uVar9 = *(undefined8 *)(param_1 + 0x160);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar6 = FUN_06350670(uVar9,0,0);
  if ((uVar6 & 1) == 0) {
    if (*(long *)(param_1 + 0x160) == 0) {
LAB_062a02bc:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar9 = thunk_FUN_06354368(*(long *)(param_1 + 0x160),0);
    uVar9 = FUN_05362cb4(*(undefined8 *)Method_System_Net_Cache_RequestCacheProtocol__ctor__,uVar9,0
                        );
    uVar10 = *(undefined8 *)(param_1 + 0x160);
    if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)PTR_DAT_069fb930);
    }
    FUN_0630c038(uVar9,uVar10,0);
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_0630bcec(*(undefined8 *)Method_System_Net_RequestStream_EndWrite__,param_1,0);
  }
LAB_062a019c:
  FUN_062a0374(param_1 + 0x25c);
  FUN_062a040c(param_1 + 0x2d1);
  FUN_062a040c(param_1 + 0x310);
  FUN_062a0468(param_1 + 0x350);
  FUN_062a0468(param_1 + 0x390);
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar8 = *(long *)puVar4;
  }
  uVar9 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 4);
  *(undefined4 *)(param_1 + 0x2fc) = *(undefined4 *)(*(long *)(lVar8 + 0xb8) + 0xc);
  *(undefined8 *)(param_1 + 0x2f4) = uVar9;
  uVar9 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x10);
  *(undefined4 *)(param_1 + 0x33b) = *(undefined4 *)(*(long *)(lVar8 + 0xb8) + 0x18);
  *(undefined8 *)(param_1 + 0x333) = uVar9;
  uVar9 = *(undefined8 *)(param_1 + 0x1a8);
  uVar12 = *(undefined4 *)(*(long *)(lVar8 + 0xb8) + 0xc);
  *(undefined8 *)(param_1 + 0x350) = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 4);
  *(undefined4 *)(param_1 + 0x358) = uVar12;
  lVar7 = *(long *)puVar2;
  uVar12 = *(undefined4 *)(*(long *)(lVar8 + 0xb8) + 0x18);
  *(undefined8 *)(param_1 + 0x390) = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x10);
  *(undefined4 *)(param_1 + 0x398) = uVar12;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar6 = FUN_0634eb94(uVar9,0,0);
  if ((uVar6 & 1) != 0) {
    uVar10 = *(undefined8 *)(param_1 + 0x1a8);
    uVar9 = FUN_0634bb04(param_1,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)puVar2);
    }
    FUN_0376b380(uVar10,uVar9,*(undefined8 *)PTR_DAT_069fc4d0);
    return;
  }
  return;
}


