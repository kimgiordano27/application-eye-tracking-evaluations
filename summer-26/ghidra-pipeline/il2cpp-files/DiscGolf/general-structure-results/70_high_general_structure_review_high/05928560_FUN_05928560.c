/*
FUNCTION_NAME: FUN_05928560
ENTRY_POINT: 05928560
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_3
*/


void FUN_05928560(long param_1,long *param_2,long param_3,ulong param_4)

{
  byte bVar1;
  bool bVar2;
  long *plVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  ulong local_78;
  
  if ((DAT_06dc102b & 1) == 0) {
    FUN_02d965b8(
                System_Collections_Generic_Dictionary<GameObject,_OVRPassthroughLayer_PassthroughMeshInstance>_TypeInfo
                );
    FUN_02d965b8(System_Xml_Schema_XmlAnyListConverter_TypeInfo);
    FUN_02d965b8(System_Xml_Schema_XmlSchemaFractionDigitsFacet_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_Dictionary<OVRGrabbable,_int>_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRApplications__IdentifyApplication_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRApplications__IsApplicationInstalled_TypeInfo);
    FUN_02d965b8(
                System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualByte_TypeInfo
                );
    FUN_02d965b8(
                System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualChar_TypeInfo
                );
    FUN_02d965b8(System_Net_Cache_RequestCacheLevel_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a10f28);
    FUN_02d965b8(OVR_OpenVR_IVRCompositor__GetCurrentSceneFocusProcess_TypeInfo);
    DAT_06dc102b = 1;
  }
  if (param_2 == (long *)0x0) goto LAB_05928d5c;
  plVar7 = param_2;
  if (param_2[0xc] == 0) {
    plVar7 = *(long **)(param_1 + 0x60);
    if (plVar7 == (long *)0x0) goto LAB_05928d5c;
    plVar7 = (long *)(**(code **)(*plVar7 + 0x2f8))
                               (plVar7,param_2[0xe],*(undefined8 *)(*plVar7 + 0x300));
    if (plVar7 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)OVR_OpenVR_IVRApplications__IdentifyApplication_TypeInfo + 0x130);
      if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)OVR_OpenVR_IVRApplications__IdentifyApplication_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96be0(plVar7);
      }
      goto LAB_05928690;
    }
    plVar8 = (long *)FUN_059254b4(param_1,0);
    if (plVar8 == (long *)0x0) goto LAB_05928d5c;
    plVar7 = (long *)0x0;
LAB_05928754:
    lVar14 = *plVar8;
    bVar1 = *(byte *)(*(long *)
                       System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualByte_TypeInfo
                     + 0x130);
    if ((*(byte *)(lVar14 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar14 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)
         System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualByte_TypeInfo
       )) {
      bVar1 = *(byte *)(*(long *)OVR_OpenVR_IVRApplications__IsApplicationInstalled_TypeInfo + 0x130
                       );
      if ((*(byte *)(lVar14 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar14 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)OVR_OpenVR_IVRApplications__IsApplicationInstalled_TypeInfo)) {
        if (plVar8[7] == 0) {
          uVar10 = FUN_058d01f0(0);
        }
        else {
          FUN_02979e58(plVar8);
          uVar10 = FUN_058d01a4(plVar8[7],0);
        }
        goto LAB_05928da8;
      }
      if (plVar8[0x16] == 0) goto LAB_05928d5c;
      lVar14 = *(long *)(plVar8[0x16] + 0x10);
      uVar9 = FUN_0592dde0(param_1,lVar14);
      goto LAB_05928940;
    }
    lVar15 = thunk_FUN_02dd3144(*(undefined8 *)System_Xml_Schema_XmlAnyListConverter_TypeInfo);
    FUN_05917228(lVar15,plVar8);
    lVar14 = FUN_05b19e58(plVar8,0);
    if (lVar14 == 0) goto LAB_05928d5c;
    if (*(long *)(lVar14 + 0x10) == 0) {
LAB_059288a0:
      if (lVar15 == 0) goto LAB_05928d5c;
      local_78 = FUN_0592dde0(param_1,*(undefined8 *)(lVar15 + 0x10));
      puVar4 = PTR_DAT_069fb9c0;
      lVar14 = *(long *)(lVar15 + 0x28);
      uVar9 = local_78;
      if (*(int *)(lVar15 + 0x30) == 1) {
        lVar16 = *(long *)(PTR_DAT_069fb9c0 + 0x90);
        if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar10 = FUN_054f73b4(lVar16 + 0x20,0);
        uVar9 = FUN_055006dc(local_78,uVar10,0);
        if ((uVar9 & 1) != 0) {
          lVar16 = *(long *)(puVar4 + 0x88);
          if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar9 = FUN_054f73b4(lVar16 + 0x20,0);
          local_78 = uVar9;
        }
      }
    }
    else {
      lVar14 = FUN_05b19e58(plVar8,0);
      if ((lVar14 == 0) || (*(long *)(lVar14 + 0x10) == 0)) goto LAB_05928d5c;
      if (*(int *)(*(long *)(lVar14 + 0x10) + 0x10) == 0) goto LAB_059288a0;
      lVar14 = FUN_05b19e58(plVar8,0);
      if (lVar14 == 0) goto LAB_05928d5c;
      uVar9 = FUN_0536ba54(*(undefined8 *)(lVar14 + 0x18),*(undefined8 *)PTR_DAT_06a10f28,0);
      if ((uVar9 & 1) == 0) goto LAB_059288a0;
      plVar11 = (long *)FUN_05b19e58(plVar8,0);
      if (plVar11 == (long *)0x0) goto LAB_05928d5c;
      lVar14 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
      plVar11 = (long *)FUN_05b19e58(plVar8,0);
      if (plVar11 == (long *)0x0) goto LAB_05928d5c;
      uVar10 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
      uVar9 = FUN_0592dde0(param_1,uVar10);
      local_78 = uVar9;
    }
  }
  else {
LAB_05928690:
    plVar8 = (long *)FUN_059254b4(param_1,plVar7);
    if (plVar8 != (long *)0x0) goto LAB_05928754;
    if (plVar7[0xf] == 0) goto LAB_05928d5c;
    lVar14 = *(long *)(plVar7[0xf] + 0x10);
    uVar9 = FUN_0536c9cc(lVar14,0);
    if ((uVar9 & 1) == 0) {
      if (plVar7[0xf] == 0) goto LAB_05928d5c;
      uVar9 = FUN_0536ba54(*(undefined8 *)(plVar7[0xf] + 0x18),*(undefined8 *)PTR_DAT_06a10f28,0);
      plVar8 = (long *)plVar7[0xf];
      if ((uVar9 & 1) == 0) {
        if (plVar8 == (long *)0x0) goto LAB_05928d5c;
        lVar15 = plVar8[2];
      }
      else {
        if (plVar8 == (long *)0x0) goto LAB_05928d5c;
        lVar15 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
      }
      uVar9 = FUN_0592dde0(param_1,lVar15);
    }
    else {
      lVar15 = *(long *)(PTR_DAT_069fb9c0 + 0x90);
      lVar14 = **(long **)(lVar15 + 0xb8);
      if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar9 = FUN_054f73b4(lVar15 + 0x20,0);
    }
    plVar8 = (long *)0x0;
LAB_05928940:
    lVar15 = 0;
    local_78 = uVar9;
  }
  puVar4 = System_Collections_Generic_Dictionary<OVRGrabbable,_int>_TypeInfo;
  uVar10 = FUN_05921708(uVar9,plVar7);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_02df485c(*(long *)puVar4);
  }
  uVar10 = FUN_05bbed9c(uVar10,0);
  if (((param_4 & 1) == 0) || (*(char *)(param_1 + 0xa0) != '\0')) {
    if ((param_3 == 0) || (*(long *)(param_3 + 0x40) == 0)) goto LAB_05928d5c;
    uVar9 = FUN_058e96b8(*(long *)(param_3 + 0x40),uVar10,1,0);
    if ((uVar9 & 1) == 0) goto LAB_05928a3c;
    if (*(long *)(param_3 + 0x40) == 0) goto LAB_05928d5c;
    plVar11 = (long *)FUN_058e7554(*(long *)(param_3 + 0x40),uVar10,0);
    if (*(char *)(param_1 + 0xa0) != '\0') {
      if (plVar11 == (long *)0x0) goto LAB_05928d5c;
      iVar5 = (**(code **)(*plVar11 + 0x1d8))(plVar11,*(undefined8 *)(*plVar11 + 0x1e0));
      if (iVar5 != 2) {
        FUN_02979e58(plVar11);
        uVar10 = FUN_058d04c4(plVar11[6],0);
LAB_05928da8:
        uVar12 = thunk_FUN_02dfd288(OVR_OpenVR_IVRCompositor__GetFrameTimeRemaining_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar10,uVar12);
      }
      if (param_2[0x10] == 0) goto LAB_05928d5c;
      uVar9 = FUN_0536c9cc(*(undefined8 *)(param_2[0x10] + 0x18),0);
      if (((uVar9 & 1) != 0) && (uVar9 = FUN_0536c9cc(plVar11[0x17],0), (uVar9 & 1) != 0)) {
        return;
      }
      if (param_2[0x10] == 0) goto LAB_05928d5c;
      uVar17 = *(undefined8 *)(param_2[0x10] + 0x18);
      uVar12 = FUN_058c8a30(plVar11,0);
      uVar9 = FUN_0536b7a8(uVar17,uVar12,4,0);
      if ((uVar9 & 1) != 0) {
        return;
      }
      goto LAB_05928a3c;
    }
    bVar2 = false;
    plVar3 = (long *)System_Xml_Schema_XmlSchemaFractionDigitsFacet_TypeInfo;
  }
  else {
LAB_05928a3c:
    plVar11 = (long *)thunk_FUN_02dd3144(*(undefined8 *)
                                          System_Collections_Generic_Dictionary<GameObject,_OVRPassthroughLayer_PassthroughMeshInstance>_TypeInfo
                                        );
    FUN_058c4384(plVar11,uVar10,local_78,0,2,0);
    bVar2 = true;
    plVar3 = (long *)System_Xml_Schema_XmlSchemaFractionDigitsFacet_TypeInfo;
  }
  System_Xml_Schema_XmlSchemaFractionDigitsFacet_TypeInfo = (undefined *)plVar3;
  if (plVar7 == (long *)0x0) goto LAB_05928d5c;
  lVar16 = plVar7[9];
  if (*(int *)(*plVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_05920924(plVar11,lVar16);
  FUN_059211dc(param_1,plVar11,plVar7[9]);
  System_Runtime_Serialization_EnumDataContract___ctor(plVar11,plVar7[9]);
  if (plVar11 == (long *)0x0) goto LAB_05928d5c;
  lVar16 = FUN_058c7c94(plVar11,0);
  if (lVar16 != 0) {
    lVar16 = FUN_058c7c94(plVar11,0);
    if (lVar16 == 0) goto LAB_05928d5c;
    if (*(int *)(lVar16 + 0x10) != 0) {
      plVar13 = *(long **)(param_1 + 0x30);
      if (plVar13 == (long *)0x0) goto LAB_05928d5c;
      (**(code **)(*plVar13 + 0x308))(plVar13,plVar11,*(undefined8 *)(*plVar13 + 0x310));
    }
  }
  puVar4 = 
  System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualChar_TypeInfo;
  if (((lVar15 == 0) || (*(long *)(lVar15 + 0x28) == 0)) ||
     (*(int *)(*(long *)(lVar15 + 0x28) + 0x10) < 1)) {
    plVar11[0x1c] = lVar14;
LAB_05928b60:
    LeanTween__value(plVar11 + 0x1c,lVar14);
  }
  else {
    if (*(int *)(*plVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    lVar14 = FUN_05917d18(plVar8,*(undefined8 *)puVar4);
    if (lVar14 != 0) {
      lVar14 = FUN_05918020(lVar15);
      plVar11[0x1c] = lVar14;
      goto LAB_05928b60;
    }
  }
  FUN_058c4750(plVar11,lVar15,0);
  FUN_058c5120(plVar11,*(int *)((long)param_2 + 0x6c) != 3,0);
  if (param_2[0x10] == 0) {
LAB_05928d5c:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  FUN_058c8a74(plVar11,*(undefined8 *)(param_2[0x10] + 0x18),0);
  uVar10 = FUN_058c8a30(plVar11,0);
  uVar10 = FUN_05925434(uVar10,param_2,*(undefined8 *)puVar4,uVar10);
  FUN_058c8a74(plVar11,uVar10,0);
  if (bVar2) {
    if (*(char *)(param_1 + 0xa0) != '\0') {
      FUN_058c5120(plVar11,1,0);
      uVar10 = FUN_058c8a30(plVar11,0);
      uVar10 = FUN_0592c2ec(param_1,uVar10);
      FUN_058c6eb8(plVar11,uVar10,0);
    }
    if ((param_3 == 0) || (*(long *)(param_3 + 0x40) == 0)) goto LAB_05928d5c;
    FUN_058e788c(*(long *)(param_3 + 0x40),plVar11,0);
  }
  iVar5 = *(int *)((long)param_2 + 0x6c);
  if (iVar5 == 2) {
    uVar10 = (**(code **)(*plVar11 + 0x1e8))(plVar11,4,*(undefined8 *)(*plVar11 + 0x1f0));
    uVar6 = FUN_05922e80(uVar10,plVar7,
                         *(undefined8 *)
                          OVR_OpenVR_IVRCompositor__GetCurrentSceneFocusProcess_TypeInfo,1);
    FUN_058c5120(plVar11,uVar6 & 1,0);
    if (*(int *)(*plVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    lVar14 = FUN_05917d18(plVar7,*(undefined8 *)System_Net_Cache_RequestCacheLevel_TypeInfo);
    if (lVar14 != 0) {
      uVar10 = FUN_058cb060(plVar11,lVar14,0);
      System_Net_Http_Headers_WarningHeaderValue__ToString(plVar11,uVar10,0);
    }
    iVar5 = *(int *)((long)param_2 + 0x6c);
  }
  if (iVar5 == 3) {
    if (*(int *)(*plVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    lVar14 = FUN_05917d18(plVar7,*(undefined8 *)System_Net_Cache_RequestCacheLevel_TypeInfo);
  }
  else {
    lVar14 = plVar7[10];
  }
  if ((*(int *)((long)plVar7 + 0x6c) == 1) && (lVar14 == 0)) {
    lVar14 = plVar7[0xb];
  }
  if (lVar14 != 0) {
    uVar10 = FUN_058cb060(plVar11,lVar14,0);
    System_Net_Http_Headers_WarningHeaderValue__ToString(plVar11,uVar10,0);
  }
  return;
}


