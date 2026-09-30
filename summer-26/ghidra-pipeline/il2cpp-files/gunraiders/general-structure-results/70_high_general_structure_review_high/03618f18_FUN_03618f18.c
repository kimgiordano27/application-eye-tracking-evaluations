/*
FUNCTION_NAME: FUN_03618f18
ENTRY_POINT: 03618f18
PROGRAM: gunraiders-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void FUN_03618f18(long param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  
  if ((DAT_04538104 & 1) == 0) {
    FUN_01c5d288(PTR_DAT_0422fa08);
    FUN_01c5d288(Method_System_Xml_Schema_BaseProcessor_SendValidationEvent__);
    FUN_01c5d288(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<AsyncProtocolRequest_<ProcessOperation>d__24>__
                );
    FUN_01c5d288(PTR_DAT_0422fd80);
    FUN_01c5d288(CrossbowBolt_TypeInfo);
    FUN_01c5d288(MQTTnet_Implementations_CrossPlatformSocket_TypeInfo);
    FUN_01c5d288(
                Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaAttDef>_GetEnumerator__
                );
    FUN_01c5d288(System_Runtime_Remoting_Contexts_CrossContextChannel_TypeInfo);
    FUN_01c5d288(Method_UnityEngine_UIElements_BaseTreeView_<SetSelectionInternalById>b__47_0__);
    FUN_01c5d288(Method_UnityEngine_UIElements_BaseTreeView_OnItemIndexChanged__);
    FUN_01c5d288(PTR_DAT_0422fb28);
    DAT_04538104 = 1;
  }
  puVar3 = Method_System_Xml_Schema_BaseProcessor_SendValidationEvent__;
  if (param_2 == (long *)0x0) {
    lVar8 = *(long *)Method_System_Xml_Schema_BaseProcessor_SendValidationEvent__;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar8 = *(long *)puVar3;
    }
    lVar8 = **(long **)(lVar8 + 0xb8);
    if (lVar8 == 0) {
      lVar8 = thunk_FUN_01c496e0(*(undefined8 *)
                                  Method_UnityEngine_UIElements_BaseTreeView_OnItemIndexChanged__);
      FUN_0364004c(lVar8,0,0);
      lVar9 = *(long *)puVar3;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar9 = *(long *)puVar3;
      }
      **(long **)(lVar9 + 0xb8) = lVar8;
    }
joined_r0x036191d8:
    if (param_1 != 0) {
LAB_03619400:
      FUN_036188d8(param_1,lVar8);
      return;
    }
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar4 = FUN_032e935c(param_3,0,0);
    if ((uVar4 & 1) == 0) {
      if (param_3 == 0) goto LAB_03619414;
      uVar4 = FUN_032eb44c(param_3,0);
      if ((uVar4 & 1) != 0) goto LAB_03619010;
    }
    else {
LAB_03619010:
      if (*param_2 == *(long *)PTR_DAT_0422fa08) {
        puVar7 = (undefined1 *)thunk_FUN_01c49834(param_2);
        FUN_03619428(param_1,*puVar7);
        return;
      }
      if (*param_2 == *(long *)PTR_DAT_0422fd80) {
        piVar5 = (int *)thunk_FUN_01c49834(param_2);
        puVar3 = Method_System_Xml_Schema_BaseProcessor_SendValidationEvent__;
        uVar1 = *piVar5 + 100;
        if (uVar1 < 0xc9) {
          lVar9 = *(long *)Method_System_Xml_Schema_BaseProcessor_SendValidationEvent__;
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(lVar9);
            lVar9 = *(long *)puVar3;
          }
          if (*(long *)(*(long *)(lVar9 + 0xb8) + 0x18) == 0) {
            uVar6 = FUN_01c5d2fc(*(undefined8 *)
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<AsyncProtocolRequest_<ProcessOperation>d__24>__
                                 ,0xc9);
            lVar9 = *(long *)puVar3;
            if (*(int *)(lVar9 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(lVar9);
              lVar9 = *(long *)puVar3;
            }
            *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x18) = uVar6;
          }
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(lVar9);
            lVar9 = *(long *)puVar3;
          }
          plVar11 = *(long **)(*(long *)(lVar9 + 0xb8) + 0x18);
          if (plVar11 == (long *)0x0) goto LAB_03619414;
          if (*(uint *)(plVar11 + 3) <= uVar1) goto LAB_03619418;
          lVar8 = plVar11[(ulong)uVar1 + 4];
          if (lVar8 == 0) {
            if (*(int *)(lVar9 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(lVar9);
              plVar11 = *(long **)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
            }
            lVar8 = thunk_FUN_01c496e0(*(undefined8 *)
                                        Method_UnityEngine_UIElements_BaseTreeView_OnItemIndexChanged__
                                      );
            FUN_0364004c(lVar8,param_2,0);
            if (plVar11 == (long *)0x0) goto LAB_03619414;
            if ((lVar8 != 0) &&
               (lVar9 = thunk_FUN_01c495e4(lVar8,*(undefined8 *)(*plVar11 + 0x40)), lVar9 == 0))
            goto LAB_0361941c;
            if (*(uint *)(plVar11 + 3) <= uVar1) goto LAB_03619418;
            plVar11[(ulong)uVar1 + 4] = lVar8;
          }
          goto joined_r0x036191d8;
        }
      }
    }
    lVar8 = *(long *)(param_1 + 0x18);
    if (lVar8 == 0) {
      uVar6 = thunk_FUN_01c496e0(*(undefined8 *)
                                  System_Runtime_Remoting_Contexts_CrossContextChannel_TypeInfo);
      FUN_02d4f880(uVar6,*(undefined8 *)MQTTnet_Implementations_CrossPlatformSocket_TypeInfo);
      *(undefined8 *)(param_1 + 0x18) = uVar6;
      puVar3 = Method_System_Xml_Schema_BaseProcessor_SendValidationEvent__;
      lVar8 = *(long *)Method_System_Xml_Schema_BaseProcessor_SendValidationEvent__;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar8 = *(long *)puVar3;
      }
      if (*(long *)(*(long *)(lVar8 + 0xb8) + 0x20) == 0) {
        uVar6 = FUN_01c5d2fc(*(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<AsyncProtocolRequest_<ProcessOperation>d__24>__
                             ,0x100);
        lVar8 = *(long *)puVar3;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(lVar8);
          lVar8 = *(long *)puVar3;
        }
        *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x20) = uVar6;
      }
      lVar8 = *(long *)(param_1 + 0x18);
      if (lVar8 == 0) goto LAB_03619414;
    }
    puVar3 = Method_System_Xml_Schema_BaseProcessor_SendValidationEvent__;
    iVar2 = *(int *)(lVar8 + 0x18);
    lVar8 = *(long *)Method_System_Xml_Schema_BaseProcessor_SendValidationEvent__;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar8 = *(long *)puVar3;
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x20);
    if (lVar8 != 0) {
      if (*(int *)(lVar8 + 0x18) <= iVar2) {
        lVar8 = thunk_FUN_01c496e0(*(undefined8 *)
                                    Method_UnityEngine_UIElements_BaseTreeView_OnItemIndexChanged__)
        ;
        FUN_0364004c(lVar8,param_2,0);
        goto LAB_03619400;
      }
      lVar8 = *(long *)(param_1 + 0x18);
      if (lVar8 != 0) {
        uVar1 = *(uint *)(lVar8 + 0x18);
        lVar9 = *(long *)(lVar8 + 0x10);
        lVar10 = *(long *)CrossbowBolt_TypeInfo;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (lVar9 != 0) {
          uVar4 = (ulong)uVar1;
          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar1 + 1;
            *(long **)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = param_2;
          }
          else {
            FUN_02d5004c(lVar8,param_2,
                         *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          }
          lVar9 = *(long *)puVar3;
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            lVar9 = *(long *)puVar3;
          }
          plVar11 = *(long **)(*(long *)(lVar9 + 0xb8) + 0x20);
          if (plVar11 != (long *)0x0) {
            if (*(uint *)(plVar11 + 3) <= uVar1) {
LAB_03619418:
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4ac();
            }
            lVar8 = plVar11[uVar4 + 4];
            if (lVar8 == 0) {
              if (*(int *)(lVar9 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
                plVar11 = *(long **)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
              }
              lVar8 = thunk_FUN_01c496e0(*(undefined8 *)
                                          Method_UnityEngine_UIElements_BaseTreeView_<SetSelectionInternalById>b__47_0__
                                        );
              FUN_036401dc(lVar8,uVar4,0);
              if (plVar11 == (long *)0x0) goto LAB_03619414;
              if ((lVar8 != 0) &&
                 (lVar9 = thunk_FUN_01c495e4(lVar8,*(undefined8 *)(*plVar11 + 0x40)), lVar9 == 0)) {
LAB_0361941c:
                uVar6 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
                FUN_01c5d37c(uVar6,0);
              }
              if (*(uint *)(plVar11 + 3) <= uVar1) goto LAB_03619418;
              plVar11[uVar4 + 4] = lVar8;
            }
            goto LAB_03619400;
          }
        }
      }
    }
  }
LAB_03619414:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


