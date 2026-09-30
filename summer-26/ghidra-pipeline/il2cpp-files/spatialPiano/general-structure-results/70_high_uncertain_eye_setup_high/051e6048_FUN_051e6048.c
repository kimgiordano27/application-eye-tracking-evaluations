/*
FUNCTION_NAME: FUN_051e6048
ENTRY_POINT: 051e6048
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x051e654c) */
/* WARNING: Removing unreachable block (ram,0x051e63b0) */

ulong FUN_051e6048(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  ulong local_70;
  undefined8 local_68;
  long **pplStack_60;
  long *local_58;
  ulong local_50;
  ulong local_48;
  
  if ((DAT_06bba5c7 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c91b0);
    FUN_02f08768(System_Collections_Generic_IEnumerator<XmlAttribute>_TypeInfo);
                    /* try { // try from 051e6088 to 052e611b has its CatchHandler @ 051e6088
                       catch() { ... } // from try @ 051e6088 with catch @ 051e6088
                       catch() { ... } // from try @ 051e6154 with catch @ 051e6088
                       catch() { ... } // from try @ 051e61f8 with catch @ 051e6088
                       catch() { ... } // from try @ 051e6240 with catch @ 051e6088 */
    FUN_02f08768(PTR_DAT_067ccba8);
    FUN_02f08768(PTR_DAT_067c91b8);
    FUN_02f08768(PTR_DAT_067ca180);
    FUN_02f08768(
                System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_TypeInfo
                );
    FUN_02f08768(
                System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
                );
    FUN_02f08768(
                System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>_TypeInfo
                );
    DAT_06bba5c7 = 1;
  }
  local_58 = (long *)0x0;
  local_50 = 0;
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  iVar5 = (**(code **)(*param_2 + 0x228))(param_2,*(undefined8 *)(*param_2 + 0x230));
  puVar4 = 
  System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
  ;
  if (iVar5 == 8) {
    if (*(int *)(*(long *)PTR_DAT_067ca180 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_052042b8(param_2,0);
    uVar7 = FUN_051e7ae0();
    local_48 = 0;
    FUN_03e1bd20(&local_48,uVar7,
                 *(undefined8 *)
                  System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
                );
    return local_48;
  }
  if (iVar5 != 2) {
    FUN_02a7da48(param_2);
    uVar10 = FUN_051ff9d0(param_2,0);
    thunk_FUN_02f6ef30(PTR_DAT_067c9fd8);
    FUN_02a7d698();
    uVar11 = FUN_050656a0(0);
    FUN_02a7da48(param_2);
    uVar7 = (**(code **)(*param_2 + 0x228))(param_2,*(undefined8 *)(*param_2 + 0x230));
    local_68 = CONCAT44(local_68._4_4_,uVar7);
    uVar12 = thunk_FUN_02f6ef30(
                               System_Collections_Generic_Dictionary<XmlQualifiedName,_int>_TypeInfo
                               );
    uVar12 = thunk_FUN_02f44ec4(uVar12,&local_68);
    uVar13 = thunk_FUN_02f6ef30(System_Collections_Generic_IList<Type>_TypeInfo);
    uVar11 = FUN_051b937c(uVar13,uVar11,uVar12,0);
    uVar10 = FUN_0515e14c(param_2,uVar10,uVar11,0);
    uVar11 = thunk_FUN_02f6ef30(System_Collections_Generic_IList<Transform>_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar10,uVar11);
  }
  FUN_03e1bd20(&local_50,0,
               *(undefined8 *)
                System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
              );
  lVar14 = *param_2;
  uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) ==
          *(long *)System_Collections_Generic_IEnumerator<XmlAttribute>_TypeInfo) {
        puVar8 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_051e61b4;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar8 = (undefined8 *)
           FUN_02f421d0(param_2,*(long *)
                                 System_Collections_Generic_IEnumerator<XmlAttribute>_TypeInfo,0);
LAB_051e61b4:
  plVar9 = (long *)(*(code *)*puVar8)(param_2,puVar8[1]);
  puVar3 = PTR_DAT_067ccba8;
  puVar2 = PTR_DAT_067ca180;
  puVar1 = PTR_DAT_067c91b8;
  pplStack_60 = &local_58;
  local_68 = 0;
  do {
    local_58 = plVar9;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar14 = *plVar9;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar1) {
          puVar8 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_051e6238;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar8 = (undefined8 *)FUN_02f421d0(plVar9,*(long *)puVar1,0);
LAB_051e6238:
    uVar15 = (*(code *)*puVar8)(plVar9,puVar8[1]);
    plVar9 = local_58;
    if ((uVar15 & 1) == 0) {
      if (local_58 == (long *)0x0) {
        return local_50;
      }
      lVar14 = *local_58;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 == 0) goto LAB_051e637c;
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      break;
    }
    if (local_58 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar14 = *local_58;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
          puVar8 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_051e629c;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar8 = (undefined8 *)FUN_02f421d0(local_58,*(long *)puVar3,0);
LAB_051e629c:
    plVar9 = (long *)(*(code *)*puVar8)(plVar9,puVar8[1]);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    iVar5 = (**(code **)(*plVar9 + 0x228))(plVar9,*(undefined8 *)(*plVar9 + 0x230));
    uVar15 = local_50;
    if (iVar5 != 8) {
      uVar10 = FUN_051ff9d0(plVar9,0);
      lVar14 = thunk_FUN_02f6ef30(PTR_DAT_067c9fd8);
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar11 = FUN_050656a0(0);
      uVar7 = (**(code **)(*param_2 + 0x228))(param_2,*(undefined8 *)(*param_2 + 0x230));
      local_70 = CONCAT44(local_70._4_4_,uVar7);
      uVar12 = thunk_FUN_02f6ef30(
                                 System_Collections_Generic_Dictionary<XmlQualifiedName,_int>_TypeInfo
                                 );
      uVar12 = thunk_FUN_02f44ec4(uVar12,&local_70);
      uVar13 = thunk_FUN_02f6ef30(System_Collections_Generic_IList<Task>_TypeInfo);
      uVar11 = FUN_051b937c(uVar13,uVar11,uVar12,0);
      uVar10 = FUN_0515e14c(plVar9,uVar10,uVar11,0);
      uVar11 = thunk_FUN_02f6ef30(System_Collections_Generic_IList<Transform>_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar10,uVar11);
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_052042b8(plVar9,0);
    uVar6 = FUN_051e7ae0();
    if ((uVar15 & 0xff) == 0) {
      local_50 = 0;
      plVar9 = local_58;
    }
    else {
      local_70 = 0;
      FUN_03e1bd20(&local_70,uVar6 | (uint)(uVar15 >> 0x20),*(undefined8 *)puVar4);
      plVar9 = local_58;
      local_50 = local_70;
    }
  } while( true );
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar8 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_051e6398;
    }
  }
LAB_051e637c:
  puVar8 = (undefined8 *)FUN_02f421d0(local_58,*(long *)PTR_DAT_067c91b0,0);
LAB_051e6398:
  (*(code *)*puVar8)(plVar9,puVar8[1]);
  return local_50;
}


