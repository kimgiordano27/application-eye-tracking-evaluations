/*
FUNCTION_NAME: FUN_05b5eafc
ENTRY_POINT: 05b5eafc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_5;functionality_eye_api_context_without_clear_sink_hits_7
*/


void FUN_05b5eafc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  int *piVar11;
  char *pcVar12;
  int iVar13;
  undefined1 local_68 [8];
  
  puVar3 = Method_Unity_VisualScripting_Divide<Vector2>__ctor__;
  if ((DAT_06b81c1d & 1) == 0) {
    FUN_02d6084c(Method_UnityEngine_UIElements_BaseField<Vector2>_get_value__);
    FUN_02d6084c(PTR_DAT_06767d28);
    FUN_02d6084c(Method_Unity_VisualScripting_Divide<Vector2>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_get_Current__);
    FUN_02d6084c(
                Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_Dispose__
                );
    FUN_02d6084c(Method_System_Collections_Generic_List_Enumerator<ILayerProvider>_get_Current__);
    FUN_02d6084c(Method_System_Collections_Generic_List_Enumerator<MockTouch>_MoveNext__);
    DAT_06b81c1d = 1;
  }
  local_68[0] = 0;
  uVar7 = FUN_034e36d4(0x16,*(undefined8 *)puVar3);
  FUN_05a09970(local_68,param_1,uVar7,0);
  lVar8 = FUN_05b84ffc(param_3,0);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  uVar1 = *(undefined4 *)(lVar8 + 0x24);
  plVar9 = (long *)FUN_05b855cc(param_3,0);
  if (*plVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  iVar4 = FUN_05b14d30(*plVar9,uVar1,0);
  iVar5 = FUN_06063868(0);
  plVar9 = (long *)FUN_05b855cc(param_3,0);
  if (*plVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar8 = FUN_05b14cfc(*plVar9,uVar1,0);
  puVar3 = Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_get_Current__;
  lVar10 = *(long *)
            Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_get_Current__;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar10 = *(long *)puVar3;
  }
  uVar6 = **(undefined4 **)(lVar10 + 0xb8);
  uVar7 = FUN_05a48158(lVar8,0);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  thunk_FUN_06038ef0(param_2,uVar6,uVar7,0);
  uVar6 = *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 4);
  if (iVar4 == iVar5) {
    param_6 = FUN_06045874(0);
  }
  thunk_FUN_06038ef0(param_2,uVar6,param_6,0);
  piVar11 = (int *)FUN_05b85628(param_3,0);
  iVar13 = 0x3f800000;
  if (piVar11[6] == 0) {
    iVar13 = piVar11[1];
  }
  lVar10 = *(long *)puVar3;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar10 = *(long *)puVar3;
  }
  thunk_FUN_06038bc0(iVar13,param_2,*(undefined4 *)(*(long *)(lVar10 + 0xb8) + 0xc),0);
  thunk_FUN_06038bc0(piVar11[4],param_2,*(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10),0)
  ;
  if (*piVar11 == 4) {
    lVar10 = *(long *)puVar3;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar10 = *(long *)puVar3;
    }
    uVar6 = *(undefined4 *)(*(long *)(lVar10 + 0xb8) + 8);
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_List_Enumerator<ILayerProvider>_get_Current__ +
                0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)
                          Method_System_Collections_Generic_List_Enumerator<ILayerProvider>_get_Current__
                        );
    }
    uVar7 = FUN_05b5e2e4(piVar11);
    FUN_0603a150(param_2,uVar6,uVar7,0);
  }
  if (lVar8 != 0) {
    if (*(long *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    iVar13 = FUN_0604bd34(*(long *)(lVar8 + 0x18),0);
    puVar3 = 
    Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_Dispose__;
    if (((iVar13 == 8) || (iVar13 == 0x3b)) || (iVar13 == 0x4a)) {
      lVar10 = *(long *)
                Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_Dispose__
      ;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar10 = *(long *)puVar3;
      }
      FUN_06037438(param_2,**(undefined8 **)(lVar10 + 0xb8),0);
    }
    else {
      lVar10 = *(long *)
                Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_Dispose__
      ;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar10 = *(long *)puVar3;
      }
      FUN_0603763c(param_2,**(undefined8 **)(lVar10 + 0xb8),0);
    }
    pcVar12 = (char *)FUN_05b84908(param_3,0);
    cVar2 = *pcVar12;
    if (*(int *)(*(long *)PTR_DAT_06767d28 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06767d28);
    }
    FUN_05a5e770(param_2,*(undefined8 *)
                          Method_System_Collections_Generic_List_Enumerator<MockTouch>_MoveNext__,
                 cVar2 != '\0',0);
    puVar3 = Method_UnityEngine_UIElements_BaseField<Vector2>_get_value__;
    iVar13 = *piVar11;
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_BaseField<Vector2>_get_value__ + 0xe4) == 0)
    {
      thunk_FUN_02dbd7b4();
    }
    FUN_05a58138(param_1,param_4,param_5,2,0,param_2,iVar13,0);
    if (iVar4 != iVar5) {
      lVar10 = FUN_06036b0c(param_2,0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      iVar4 = FUN_06036024(lVar10,0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_05a58138(param_1,param_5,lVar8,2,0,param_2,iVar4 + -1,0);
      plVar9 = (long *)FUN_05b855cc(param_3,0);
      lVar8 = *plVar9;
      uVar6 = FUN_06063868(0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      FUN_05b14d60(lVar8,uVar1,uVar6,0);
    }
    FUN_05a09978(local_68,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


