/*
FUNCTION_NAME: FUN_070f0094
ENTRY_POINT: 070f0094
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_9;ray_or_cast_sink_hits_3;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void FUN_070f0094(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
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
  
  puVar3 = Newtonsoft_Json_Linq_JObject_var;
  if ((DAT_08267d05 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07df7288);
    FUN_0373b518(PTR_DAT_07d8dc68);
    FUN_0373b518(Newtonsoft_Json_Linq_JObject_var);
    FUN_0373b518(System_Action<ARRaycastUpdatedEventArgs>_TypeInfo);
    FUN_0373b518(System_Action<ARSessionStateChangedEventArgs>_TypeInfo);
    FUN_0373b518(System_IO_TextReader_var);
    FUN_0373b518(System_Xml_Serialization_XmlSchemaProviderAttribute_var);
    DAT_08267d05 = 1;
  }
  local_68[0] = 0;
  uVar7 = FUN_04147de4(0x16,*(undefined8 *)puVar3);
  FUN_06f533e0(local_68,param_1,uVar7,0);
  lVar8 = FUN_07116514(param_3,0);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  uVar1 = *(undefined4 *)(lVar8 + 0x24);
  plVar9 = (long *)FUN_07116ae4(param_3,0);
  if (*plVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  iVar4 = FUN_070a63b0(*plVar9,uVar1,0);
  iVar5 = FUN_075a6824(0);
  plVar9 = (long *)FUN_07116ae4(param_3,0);
  if (*plVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar8 = FUN_070a637c(*plVar9,uVar1,0);
  puVar3 = System_Action<ARRaycastUpdatedEventArgs>_TypeInfo;
  lVar10 = *(long *)System_Action<ARRaycastUpdatedEventArgs>_TypeInfo;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar10 = *(long *)puVar3;
  }
  uVar6 = **(undefined4 **)(lVar10 + 0xb8);
  uVar7 = FUN_06f91d74(lVar8,0);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  thunk_FUN_07576cdc(param_2,uVar6,uVar7,0);
  uVar6 = *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 4);
  if (iVar4 == iVar5) {
    param_6 = FUN_07586ec0(0);
  }
  thunk_FUN_07576cdc(param_2,uVar6,param_6,0);
  piVar11 = (int *)FUN_07116b40(param_3,0);
  iVar13 = 0x3f800000;
  if (piVar11[6] == 0) {
    iVar13 = piVar11[1];
  }
  lVar10 = *(long *)puVar3;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar10 = *(long *)puVar3;
  }
  thunk_FUN_075769ac(iVar13,param_2,*(undefined4 *)(*(long *)(lVar10 + 0xb8) + 0xc),0);
  thunk_FUN_075769ac(piVar11[4],param_2,*(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10),0)
  ;
  if (*piVar11 == 4) {
    lVar10 = *(long *)puVar3;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar10 = *(long *)puVar3;
    }
    uVar6 = *(undefined4 *)(*(long *)(lVar10 + 0xb8) + 8);
    if (*(int *)(*(long *)System_IO_TextReader_var + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)System_IO_TextReader_var);
    }
    uVar7 = FUN_070ef87c(piVar11);
    FUN_07578058(param_2,uVar6,uVar7,0);
  }
  if (lVar8 != 0) {
    if (*(long *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    iVar13 = FUN_0758d32c(*(long *)(lVar8 + 0x18),0);
    puVar3 = System_Action<ARSessionStateChangedEventArgs>_TypeInfo;
    if (((iVar13 == 8) || (iVar13 == 0x3b)) || (iVar13 == 0x4a)) {
      lVar10 = *(long *)System_Action<ARSessionStateChangedEventArgs>_TypeInfo;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar10 = *(long *)puVar3;
      }
      FUN_07575314(param_2,**(undefined8 **)(lVar10 + 0xb8),0);
    }
    else {
      lVar10 = *(long *)System_Action<ARSessionStateChangedEventArgs>_TypeInfo;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar10 = *(long *)puVar3;
      }
      FUN_07575518(param_2,**(undefined8 **)(lVar10 + 0xb8),0);
    }
    pcVar12 = (char *)FUN_07115e20(param_3,0);
    cVar2 = *pcVar12;
    if (*(int *)(*(long *)PTR_DAT_07d8dc68 + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)PTR_DAT_07d8dc68);
    }
    FUN_06fa838c(param_2,*(undefined8 *)System_Xml_Serialization_XmlSchemaProviderAttribute_var,
                 cVar2 != '\0',0);
    puVar3 = PTR_DAT_07df7288;
    iVar13 = *piVar11;
    if (*(int *)(*(long *)PTR_DAT_07df7288 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    FUN_06fa1d54(param_1,param_4,param_5,2,0,param_2,iVar13,0);
    if (iVar4 != iVar5) {
      lVar10 = FUN_075748d8(param_2,0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      iVar4 = FUN_075737c8(lVar10,0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      FUN_06fa1d54(param_1,param_5,lVar8,2,0,param_2,iVar4 + -1,0);
      plVar9 = (long *)FUN_07116ae4(param_3,0);
      lVar8 = *plVar9;
      uVar6 = FUN_075a6824(0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      FUN_070a63e0(lVar8,uVar1,uVar6,0);
    }
    FUN_06f533e8(local_68,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


