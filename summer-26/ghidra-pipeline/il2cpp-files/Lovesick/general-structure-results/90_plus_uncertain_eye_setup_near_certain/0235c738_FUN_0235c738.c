/*
FUNCTION_NAME: FUN_0235c738
ENTRY_POINT: 0235c738
PROGRAM: Lovesick-libil2cpp.so
SCORE: 109
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


long FUN_0235c738(undefined1 param_1 [16],float param_2,float param_3,long param_4,int param_5,
                 int param_6,long param_7,long param_8)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 local_90;
  int local_88;
  undefined4 uStack_84;
  undefined4 local_74;
  
  puVar2 = Method_System_Decimal_DecCalc_VarDecFromR4__;
  if ((DAT_03781d40 & 1) == 0) {
    thunk_FUN_00d48444(System_Collections_Generic_IEnumerator<CameraEvent>_TypeInfo);
    thunk_FUN_00d48444(Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
    thunk_FUN_00d48444(Method_System_Runtime_Serialization_Formatters_Binary_ObjectWriter_Write__);
    thunk_FUN_00d48444(Method_Newtonsoft_Json_JsonReader_set_DateTimeZoneHandling__);
    thunk_FUN_00d48444(System_Linq_Expressions_Interpreter_OrInstruction_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_4747);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<TuneTargetSteppedGeometry_SteppedRendererSet>_GetEnumerator__
                      );
    thunk_FUN_00d48444(OVRManager_XrApi_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f6e48);
    thunk_FUN_00d48444(StringLiteral_10062);
    thunk_FUN_00d48444(PTR_DAT_033ee588);
    thunk_FUN_00d48444(PTR_DAT_033ef0a8);
    thunk_FUN_00d48444(Method_Sirenix_Serialization_JsonDataWriter_EnsureBufferSpace__);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Grabbable>_Contains__);
    thunk_FUN_00d48444(UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo);
    thunk_FUN_00d48444(Method_System_Nullable<InputDevice>_get_Value__);
    thunk_FUN_00d48444(Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo);
    thunk_FUN_00d48444(Method_System_Decimal_DecCalc_VarDecFromR4__);
    DAT_03781d40 = 1;
  }
  puVar4 = Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo;
  puVar3 = System_Linq_Expressions_Interpreter_OrInstruction_TypeInfo;
  local_90 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar6 = FUN_0233dbd8(param_4,0);
  plVar7 = (long *)FUN_00da4fb8(*(undefined8 *)puVar3,2);
  lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
  puVar2 = PTR_DAT_033ee588;
  if ((lVar8 != 0) && (FUN_01320e50(lVar8,*(undefined8 *)PTR_DAT_033ee588), plVar7 != (long *)0x0))
  {
    lVar9 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar7 + 0x40));
    if (lVar9 == 0) {
UnityEngine_Rendering_Universal_Internal_DeferredLights__ExecuteDownsampleBitmaskPass:
      uVar13 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar13,0);
    }
    if ((int)plVar7[3] == 0) {
LAB_0235ce80:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    plVar7[4] = lVar8;
    lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
    if (lVar8 != 0) {
      FUN_01320e50(lVar8,*(undefined8 *)puVar2);
      lVar9 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar7 + 0x40));
      puVar2 = Method_Newtonsoft_Json_JsonReader_set_DateTimeZoneHandling__;
      if (lVar9 == 0)
      goto UnityEngine_Rendering_Universal_Internal_DeferredLights__ExecuteDownsampleBitmaskPass;
      if (*(uint *)(plVar7 + 3) < 2) goto LAB_0235ce80;
      plVar7[5] = lVar8;
      puVar4 = UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo;
      plVar10 = (long *)FUN_00da4fb8(*(undefined8 *)puVar2,2);
      lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
      puVar3 = PTR_DAT_033f6e48;
      if ((lVar8 != 0) &&
         (FUN_01320e50(lVar8,*(undefined8 *)PTR_DAT_033f6e48), plVar10 != (long *)0x0)) {
        lVar9 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar10 + 0x40));
        if (lVar9 == 0)
        goto UnityEngine_Rendering_Universal_Internal_DeferredLights__ExecuteDownsampleBitmaskPass;
        if ((int)plVar10[3] == 0) goto LAB_0235ce80;
        plVar10[4] = lVar8;
        lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
        if (lVar8 != 0) {
          FUN_01320e50(lVar8,*(undefined8 *)puVar3);
          lVar9 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar10 + 0x40));
          if (lVar9 == 0)
          goto UnityEngine_Rendering_Universal_Internal_DeferredLights__ExecuteDownsampleBitmaskPass
          ;
          if (*(uint *)(plVar10 + 3) < 2) goto LAB_0235ce80;
          plVar10[5] = lVar8;
          plVar11 = (long *)FUN_00da4fb8(*(undefined8 *)puVar2,2);
          lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
          if ((lVar8 != 0) && (FUN_01320e50(lVar8,*(undefined8 *)puVar3), plVar11 != (long *)0x0)) {
            lVar9 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar11 + 0x40));
            if (lVar9 == 0)
            goto 
            UnityEngine_Rendering_Universal_Internal_DeferredLights__ExecuteDownsampleBitmaskPass;
            if ((int)plVar11[3] == 0) goto LAB_0235ce80;
            plVar11[4] = lVar8;
            lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
            if (lVar8 != 0) {
              FUN_01320e50(lVar8,*(undefined8 *)puVar3);
              lVar9 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar11 + 0x40));
              if (lVar9 == 0)
              goto 
              UnityEngine_Rendering_Universal_Internal_DeferredLights__ExecuteDownsampleBitmaskPass;
              if (*(uint *)(plVar11 + 3) < 2) goto LAB_0235ce80;
              plVar11[5] = lVar8;
              puVar2 = Method_System_Collections_Generic_List<Grabbable>_Contains__;
              if (lVar6 != 0) {
                if (0 < *(int *)(lVar6 + 0x18)) {
                  iVar17 = 0;
                  uVar15 = 0;
                  do {
                    FUN_0132138c(lVar6,iVar17,&local_88,*(undefined8 *)puVar2);
                    local_90 = CONCAT44(uStack_84,local_88);
                    if (*(int *)(*(long *)
                                  Method_System_Runtime_Serialization_Formatters_Binary_ObjectWriter_Write__
                                + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    uVar12 = FUN_022f764c(&local_90,param_5,0);
                    if ((uVar12 & 1) != 0) {
                      FUN_0132138c(lVar6,iVar17,&local_88,*(undefined8 *)puVar2);
                      local_90 = CONCAT44(uStack_84,local_88);
                      if (*(int *)(*(long *)
                                    Method_System_Runtime_Serialization_Formatters_Binary_ObjectWriter_Write__
                                  + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      uVar12 = FUN_022f764c(&local_90,param_6,0);
                      if ((uVar12 & 1) != 0) {
                        return 0;
                      }
                    }
                    FUN_0132138c(lVar6,iVar17,&local_88,*(undefined8 *)puVar2);
                    iVar5 = local_88;
                    if (*(uint *)(plVar7 + 3) <= uVar15) goto LAB_0235ce80;
                    if (param_7 == 0) goto LAB_0235ce7c;
                    lVar8 = plVar7[(long)(int)uVar15 + 4];
                    FUN_0132138c(param_7,local_88,&local_88,
                                 *(undefined8 *)
                                  Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                                );
                    if (lVar8 == 0) goto LAB_0235ce7c;
                    FUN_00ca0af8(lVar8,CONCAT44(uStack_84,local_88),
                                 *(undefined8 *)OVRManager_XrApi_TypeInfo);
                    if (*(uint *)(plVar10 + 3) <= uVar15) goto LAB_0235ce80;
                    if (param_8 == 0) goto LAB_0235ce7c;
                    lVar8 = plVar10[(long)(int)uVar15 + 4];
                    local_88 = iVar5;
                    FUN_01299bc0(param_8,&local_88,&local_74,
                                 *(undefined8 *)Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo)
                    ;
                    if (lVar8 == 0) goto LAB_0235ce7c;
                    FUN_00ac20f0(lVar8,local_74,*(undefined8 *)StringLiteral_4747);
                    if ((iVar5 == param_5) || (iVar5 == param_6)) {
                      uVar1 = uVar15 + 2;
                      if (-1 < (int)(uVar15 + 1)) {
                        uVar1 = uVar15 + 1;
                      }
                      uVar15 = (uVar15 + 1) - (uVar1 & 0xfffffffe);
                      if ((*(uint *)(plVar11 + 3) <= uVar15) || (*(uint *)(plVar7 + 3) <= uVar15))
                      goto LAB_0235ce80;
                      lVar8 = plVar7[(long)(int)uVar15 + 4];
                      if ((lVar8 == 0) || (plVar11[(long)(int)uVar15 + 4] == 0)) goto LAB_0235ce7c;
                      FUN_00ac20f0(plVar11[(long)(int)uVar15 + 4],*(undefined4 *)(lVar8 + 0x18),
                                   *(undefined8 *)StringLiteral_4747);
                      if (*(uint *)(plVar7 + 3) <= uVar15) goto LAB_0235ce80;
                      lVar8 = plVar7[(long)(int)uVar15 + 4];
                      FUN_0132138c(param_7,iVar5,&local_88,
                                   *(undefined8 *)
                                    Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                                  );
                      if (lVar8 == 0) goto LAB_0235ce7c;
                      FUN_00ca0af8(lVar8,CONCAT44(uStack_84,local_88),
                                   *(undefined8 *)OVRManager_XrApi_TypeInfo);
                      if (*(uint *)(plVar10 + 3) <= uVar15) goto LAB_0235ce80;
                      lVar8 = plVar10[(long)(int)uVar15 + 4];
                      local_88 = iVar5;
                      FUN_01299bc0(param_8,&local_88,&local_74,
                                   *(undefined8 *)
                                    Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
                      if (lVar8 == 0) goto LAB_0235ce7c;
                      FUN_00ac20f0(lVar8,local_74,*(undefined8 *)StringLiteral_4747);
                    }
                    iVar17 = iVar17 + 1;
                  } while (iVar17 < *(int *)(lVar6 + 0x18));
                }
                lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                            Method_System_Nullable<InputDevice>_get_Value__);
                if ((lVar6 != 0) &&
                   (FUN_01320e50(lVar6,*(undefined8 *)StringLiteral_10062), param_4 != 0)) {
                  fVar18 = (float)FUN_02302500(param_7,*(undefined8 *)(param_4 + 0x10),0);
                  if (0 < (int)plVar7[3]) {
                    uVar12 = 0;
                    uVar14 = plVar7[3] & 0xffffffff;
                    fVar21 = param_2;
                    fVar22 = param_3;
                    do {
                      if ((uVar14 <= uVar12) ||
                         (lVar8 = FUN_0234aad8(plVar7[uVar12 + 4],0),
                         *(uint *)(plVar10 + 3) <= uVar12)) goto LAB_0235ce80;
                      if (lVar8 == 0) goto LAB_0235ce7c;
                      *(long *)(lVar8 + 0x20) = plVar10[uVar12 + 4];
                      if (*(uint *)(plVar7 + 3) <= uVar12) goto LAB_0235ce80;
                      if (*(long *)(lVar8 + 0x10) == 0) goto LAB_0235ce7c;
                      fVar19 = (float)FUN_02302500(plVar7[uVar12 + 4],
                                                   *(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x10),0
                                                  );
                      fVar20 = param_2 * fVar21;
                      fVar21 = param_3 * fVar22;
                      if (fVar21 + fVar18 * fVar19 + fVar20 < 0.0) {
                        if (*(long *)(lVar8 + 0x10) == 0) goto LAB_0235ce7c;
                        FUN_022fa1b4(*(long *)(lVar8 + 0x10),0);
                      }
                      if (*(uint *)(plVar11 + 3) <= uVar12) goto LAB_0235ce80;
                      lVar16 = plVar11[uVar12 + 4];
                      lVar9 = thunk_FUN_00d62348(*(undefined8 *)
                                                  System_Collections_Generic_IEnumerator<CameraEvent>_TypeInfo
                                                );
                      if (lVar9 == 0) goto LAB_0235ce7c;
                      FUN_017b46ec(lVar9,0);
                      *(long *)(lVar9 + 0x10) = lVar8;
                      *(long *)(lVar9 + 0x18) = lVar16;
                      FUN_00ca3248(lVar6,lVar9,
                                   *(undefined8 *)
                                    Method_System_Collections_Generic_List<TuneTargetSteppedGeometry_SteppedRendererSet>_GetEnumerator__
                                  );
                      uVar14 = (ulong)*(uint *)(plVar7 + 3);
                      uVar12 = uVar12 + 1;
                    } while ((long)uVar12 < (long)(int)*(uint *)(plVar7 + 3));
                  }
                  return lVar6;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0235ce7c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


