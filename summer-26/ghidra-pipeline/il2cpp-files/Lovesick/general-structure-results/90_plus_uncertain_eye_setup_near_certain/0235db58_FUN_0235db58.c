/*
FUNCTION_NAME: FUN_0235db58
ENTRY_POINT: 0235db58
PROGRAM: Lovesick-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_0235db58(undefined8 param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  int iVar14;
  undefined8 uVar15;
  int iVar16;
  long lVar17;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  
  puVar3 = Method_System_Decimal_DecCalc_VarDecFromR4__;
  if ((DAT_03781d3d & 1) == 0) {
    thunk_FUN_00d48444(System_Collections_Generic_IEnumerator<CameraEvent>_TypeInfo);
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
    DAT_03781d3d = 1;
  }
  puVar5 = Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo;
  puVar4 = System_Linq_Expressions_Interpreter_OrInstruction_TypeInfo;
  local_78 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar6 = FUN_0233dbd8(param_1,0);
  plVar7 = (long *)FUN_00da4fb8(*(undefined8 *)puVar4,2);
  lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
  puVar3 = PTR_DAT_033ee588;
  if ((lVar8 != 0) && (FUN_01320e50(lVar8,*(undefined8 *)PTR_DAT_033ee588), plVar7 != (long *)0x0))
  {
    lVar9 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar7 + 0x40));
    if (lVar9 == 0) {
LAB_0235e1b4:
      uVar15 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar15,0);
    }
    if ((int)plVar7[3] == 0) {
LAB_0235e1b0:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    plVar7[4] = lVar8;
    lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
    if (lVar8 != 0) {
      FUN_01320e50(lVar8,*(undefined8 *)puVar3);
      lVar9 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar7 + 0x40));
      puVar3 = Method_Newtonsoft_Json_JsonReader_set_DateTimeZoneHandling__;
      if (lVar9 == 0) goto LAB_0235e1b4;
      if (*(uint *)(plVar7 + 3) < 2) goto LAB_0235e1b0;
      plVar7[5] = lVar8;
      puVar4 = UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo;
      plVar10 = (long *)FUN_00da4fb8(*(undefined8 *)puVar3,2);
      lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
      puVar3 = PTR_DAT_033f6e48;
      if ((lVar8 != 0) &&
         (FUN_01320e50(lVar8,*(undefined8 *)PTR_DAT_033f6e48), plVar10 != (long *)0x0)) {
        lVar9 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar10 + 0x40));
        if (lVar9 == 0) goto LAB_0235e1b4;
        if ((int)plVar10[3] == 0) goto LAB_0235e1b0;
        plVar10[4] = lVar8;
        lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
        if (lVar8 != 0) {
          FUN_01320e50(lVar8,*(undefined8 *)puVar3);
          lVar9 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar10 + 0x40));
          if (lVar9 == 0) goto LAB_0235e1b4;
          if (*(uint *)(plVar10 + 3) < 2) goto LAB_0235e1b0;
          plVar10[5] = lVar8;
          puVar5 = Method_System_Runtime_Serialization_Formatters_Binary_ObjectWriter_Write__;
          puVar4 = Method_System_Collections_Generic_List<Grabbable>_Contains__;
          puVar3 = OVRManager_XrApi_TypeInfo;
          if (lVar6 != 0) {
            if (0 < *(int *)(lVar6 + 0x18)) {
              iVar14 = 0;
              iVar16 = 0;
              do {
                uVar2 = iVar16 % 2;
                if (*(uint *)(plVar7 + 3) <= uVar2) goto LAB_0235e1b0;
                plVar13 = plVar7 + (long)(int)uVar2 + 4;
                lVar8 = *plVar13;
                FUN_0132138c(lVar6,iVar14,&local_68,*(undefined8 *)puVar4);
                if ((param_4 == 0) ||
                   (FUN_0132138c(param_4,CONCAT44(uStack_64,local_68),&local_68,
                                 *(undefined8 *)
                                  Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                                ), lVar8 == 0)) goto LAB_0235e1ac;
                FUN_00ca0af8(lVar8,CONCAT44(uStack_64,local_68),*(undefined8 *)puVar3);
                FUN_0132138c(lVar6,iVar14,&local_68,*(undefined8 *)puVar4);
                local_78 = CONCAT44(uStack_64,local_68);
                if (param_2 == 0) goto LAB_0235e1ac;
                uVar15 = *(undefined8 *)(param_2 + 0x10);
                if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar11 = FUN_022f717c(&local_78,uVar15,0);
                if ((uVar11 & 1) == 0) {
                  FUN_0132138c(lVar6,iVar14,&local_68,*(undefined8 *)puVar4);
                  local_78 = CONCAT44(uStack_64,local_68);
                  if (param_3 == 0) goto LAB_0235e1ac;
                  uVar15 = *(undefined8 *)(param_3 + 0x10);
                  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar11 = FUN_022f717c(&local_78,uVar15,0);
                  if ((uVar11 & 1) != 0) goto LAB_0235df34;
                }
                else {
LAB_0235df34:
                  FUN_0132138c(lVar6,iVar14,&local_68,*(undefined8 *)puVar4);
                  FUN_0132138c(param_4,local_68,&local_68,
                               *(undefined8 *)
                                Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                              );
                  uVar15 = CONCAT44(uStack_64,local_68);
                  FUN_0132138c(lVar6,iVar14,&local_68,*(undefined8 *)puVar4);
                  FUN_0132138c(param_4,uStack_64,&local_68,
                               *(undefined8 *)
                                Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                              );
                  uVar15 = FUN_0233bc34(0x3f000000,uVar15,CONCAT44(uStack_64,local_68),0);
                  if ((*(uint *)(plVar10 + 3) <= uVar2) || (*(uint *)(plVar7 + 3) <= uVar2))
                  goto LAB_0235e1b0;
                  if ((*plVar13 == 0) || (plVar10[(long)(int)uVar2 + 4] == 0)) goto LAB_0235e1ac;
                  FUN_00ac20f0(plVar10[(long)(int)uVar2 + 4],*(undefined4 *)(*plVar13 + 0x18),
                               *(undefined8 *)StringLiteral_4747);
                  if (*(uint *)(plVar7 + 3) <= uVar2) goto LAB_0235e1b0;
                  if (*plVar13 == 0) goto LAB_0235e1ac;
                  FUN_00ca0af8(*plVar13,uVar15,*(undefined8 *)puVar3);
                  iVar1 = iVar16 + 1;
                  uVar2 = iVar16 + 2;
                  if (-1 < iVar1) {
                    uVar2 = iVar16 + 1;
                  }
                  uVar2 = iVar1 - (uVar2 & 0xfffffffe);
                  if ((*(uint *)(plVar10 + 3) <= uVar2) || (*(uint *)(plVar7 + 3) <= uVar2))
                  goto LAB_0235e1b0;
                  lVar8 = plVar7[(long)(int)uVar2 + 4];
                  if ((lVar8 == 0) || (plVar10[(long)(int)uVar2 + 4] == 0)) goto LAB_0235e1ac;
                  FUN_00ac20f0(plVar10[(long)(int)uVar2 + 4],*(undefined4 *)(lVar8 + 0x18),
                               *(undefined8 *)StringLiteral_4747);
                  if (*(uint *)(plVar7 + 3) <= uVar2) goto LAB_0235e1b0;
                  lVar8 = plVar7[(long)(int)uVar2 + 4];
                  if (lVar8 == 0) goto LAB_0235e1ac;
                  FUN_00ca0af8(lVar8,uVar15,*(undefined8 *)puVar3);
                  iVar16 = iVar1;
                }
                iVar14 = iVar14 + 1;
              } while (iVar14 < *(int *)(lVar6 + 0x18));
            }
            lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                        Method_System_Nullable<InputDevice>_get_Value__);
            if (lVar6 != 0) {
              FUN_01320e50(lVar6,*(undefined8 *)StringLiteral_10062);
              puVar4 = 
              Method_System_Collections_Generic_List<TuneTargetSteppedGeometry_SteppedRendererSet>_GetEnumerator__
              ;
              puVar3 = System_Collections_Generic_IEnumerator<CameraEvent>_TypeInfo;
              if (0 < (int)plVar7[3]) {
                uVar11 = 0;
                uVar12 = plVar7[3] & 0xffffffff;
                do {
                  if (uVar12 <= uVar11) goto LAB_0235e1b0;
                  lVar8 = FUN_0234aad8(plVar7[uVar11 + 4],0);
                  if (lVar8 != 0) {
                    if (*(uint *)(plVar10 + 3) <= uVar11) goto LAB_0235e1b0;
                    lVar17 = plVar10[uVar11 + 4];
                    lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                    if (lVar9 == 0) goto LAB_0235e1ac;
                    FUN_017b46ec(lVar9,0);
                    *(long *)(lVar9 + 0x10) = lVar8;
                    *(long *)(lVar9 + 0x18) = lVar17;
                    FUN_00ca3248(lVar6,lVar9,*(undefined8 *)puVar4);
                  }
                  uVar12 = (ulong)*(uint *)(plVar7 + 3);
                  uVar11 = uVar11 + 1;
                } while ((long)uVar11 < (long)(int)*(uint *)(plVar7 + 3));
              }
              return lVar6;
            }
          }
        }
      }
    }
  }
LAB_0235e1ac:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


