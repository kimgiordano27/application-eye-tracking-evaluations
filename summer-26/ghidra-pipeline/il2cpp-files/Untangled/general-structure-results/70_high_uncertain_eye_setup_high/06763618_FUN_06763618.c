/*
FUNCTION_NAME: FUN_06763618
ENTRY_POINT: 06763618
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_06763618(long param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  
  if ((DAT_071d5f0f & 1) == 0) {
    FUN_02f07e70(
                System_Collections_Generic_Dictionary<Type,_NetworkBehaviour_ReadersForType>_TypeInfo
                );
    FUN_02f07e70(PTR_DAT_06d069a8);
    FUN_02f07e70(
                System_Collections_Generic_Dictionary<Type,_NetworkBehaviourUtils_MetaData>_TypeInfo
                );
    FUN_02f07e70(PTR_DAT_06d066b8);
    FUN_02f07e70(System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_TypeInfo)
    ;
    DAT_071d5f0f = 1;
  }
  puVar8 = System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_TypeInfo;
  puVar7 = System_Collections_Generic_Dictionary<Type,_NetworkBehaviourUtils_MetaData>_TypeInfo;
  puVar6 = System_Collections_Generic_Dictionary<Type,_NetworkBehaviour_ReadersForType>_TypeInfo;
  puVar5 = PTR_DAT_06d069a8;
  lVar9 = *(long *)(param_1 + 8);
  if (0x3ffe < param_2) {
    param_2 = 0x3fff;
  }
  if (lVar9 != 0) {
    iVar11 = *(int *)(lVar9 + 0x18);
    iVar4 = param_2 << 2;
    iVar2 = iVar11 + 3;
    if (-1 < iVar11) {
      iVar2 = iVar11;
    }
    iVar2 = iVar2 >> 2;
    FUN_03738014((long *)(param_1 + 8),iVar4,*(undefined8 *)PTR_DAT_06d066b8);
    FUN_03738138(param_1 + 0x20,iVar4,*(undefined8 *)puVar8);
    ES3Types_ES3Type__ReadInto<ParticleSystem_SizeBySpeedModule>
              (param_1 + 0x28,iVar4,*(undefined8 *)puVar7);
    FUN_0373470c(param_1 + 0x30,iVar4,*(undefined8 *)puVar6);
    FUN_03735398((long *)(param_1 + 0x38),param_2 * 6,*(undefined8 *)puVar5);
    if (iVar2 < param_2) {
      lVar9 = *(long *)(param_1 + 0x38);
      if (lVar9 == 0) goto LAB_0676380c;
      uVar3 = *(uint *)(lVar9 + 0x18);
      uVar10 = iVar2 * 6 + 2;
      iVar11 = iVar2 << 2;
      lVar12 = (long)param_2 - (long)iVar2;
      do {
        if (uVar3 <= uVar10 - 2) {
LAB_06763808:
                    /* WARNING: Subroutine does not return */
          FUN_02f080c8();
        }
        *(int *)(lVar9 + (long)(int)(uVar10 - 2) * 4 + 0x20) = iVar11;
        if ((uVar3 <= uVar10 - 1) ||
           (*(int *)(lVar9 + (long)(int)(uVar10 - 1) * 4 + 0x20) = iVar11 + 1, uVar3 <= uVar10))
        goto LAB_06763808;
        *(int *)(lVar9 + (long)(int)uVar10 * 4 + 0x20) = iVar11 + 2;
        if (uVar3 <= uVar10 + 1) goto LAB_06763808;
        *(int *)(lVar9 + (long)(int)(uVar10 + 1) * 4 + 0x20) = iVar11 + 2;
        if (uVar3 <= uVar10 + 2) goto LAB_06763808;
        uVar1 = uVar10 + 3;
        *(int *)(lVar9 + (long)(int)(uVar10 + 2) * 4 + 0x20) = iVar11 + 3;
        if (uVar3 <= uVar1) goto LAB_06763808;
        uVar10 = uVar10 + 6;
        lVar12 = lVar12 + -1;
        *(int *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = iVar11;
        iVar11 = iVar11 + 4;
      } while (lVar12 != 0);
    }
    return;
  }
LAB_0676380c:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


