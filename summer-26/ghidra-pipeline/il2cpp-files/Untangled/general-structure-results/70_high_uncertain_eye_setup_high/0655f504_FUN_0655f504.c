/*
FUNCTION_NAME: FUN_0655f504
ENTRY_POINT: 0655f504
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] FUN_0655f504(long param_1,long *param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  short sVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined8 local_50;
  undefined8 local_48;
  
  if ((DAT_071ce6dd & 1) == 0) {
    FUN_02f07e70(Unity_Collections_AllocatorManager_TypeInfo);
    FUN_02f07e70(OVRPlugin_Quatf___TypeInfo);
    FUN_02f07e70(PTR_DAT_06d3b2e0);
    FUN_02f07e70(PTR_DAT_06d0e120);
    FUN_02f07e70(UnityEngine_InputSystem_AmbientTemperatureSensor_TypeInfo);
    FUN_02f07e70(System_ComponentModel_AmbientValueAttribute_TypeInfo);
    FUN_02f07e70(System_Reflection_AmbiguousMatchException_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d02140);
    FUN_02f07e70(Unity_VisualScripting_AmbiguousOperatorException_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d3b2f0);
    FUN_02f07e70(UnityEngine_Rendering_Universal_LightUtility_LightMeshVertex___TypeInfo);
    FUN_02f07e70(PTR_DAT_06d38e18);
    DAT_071ce6dd = 1;
  }
  local_50 = 0;
  local_48 = 0;
  sVar4 = FUN_0655d984(param_1,0);
  puVar2 = UnityEngine_InputSystem_AmbientTemperatureSensor_TypeInfo;
  if (sVar4 != 0x7b) {
    *param_2 = 0;
    thunk_FUN_02f411dc(param_2,0);
    uVar9 = *(undefined8 *)puVar2;
LAB_0655f9d0:
    auVar10 = FUN_0655d6e4(param_1,uVar9);
    return auVar10;
  }
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_0655fa00;
  if (*(int *)(*(long *)(param_1 + 0x20) + 0x10) <= *(int *)(param_1 + 0x18)) {
    *param_2 = 0;
    thunk_FUN_02f411dc(param_2,0);
    puVar8 = (undefined8 *)System_Reflection_AmbiguousMatchException_TypeInfo;
LAB_0655f9cc:
    uVar9 = *puVar8;
    goto LAB_0655f9d0;
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  FUN_0655d9ac(param_1);
  puVar2 = UnityEngine_Rendering_Universal_LightUtility_LightMeshVertex___TypeInfo;
  lVar5 = *(long *)UnityEngine_Rendering_Universal_LightUtility_LightMeshVertex___TypeInfo;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar5 = *(long *)puVar2;
  }
  puVar2 = PTR_DAT_06d0e120;
  cVar1 = **(char **)(lVar5 + 0xb8);
  if (*(int *)(*(long *)PTR_DAT_06d0e120 + 0xe0) == 0) {
    thunk_FUN_02f12b58(*(long *)PTR_DAT_06d0e120);
    if (cVar1 != '\0') goto LAB_0655f644;
LAB_0655f6c8:
    if (DAT_071c20de == '\0') {
      FUN_02f07e70(PTR_DAT_06d0e120);
      DAT_071c20de = '\x01';
    }
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar5 = *(long *)puVar2;
    }
    lVar7 = 0x18;
  }
  else {
    if (cVar1 == '\0') goto LAB_0655f6c8;
LAB_0655f644:
    if (DAT_071bbbfa == '\0') {
      FUN_02f07e70(PTR_DAT_06d0e120);
      DAT_071bbbfa = '\x01';
    }
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar5 = *(long *)puVar2;
    }
    lVar7 = 0x10;
  }
  uVar9 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + lVar7);
  lVar5 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d3b2e0);
  FUN_04c73c8c(lVar5,uVar9,*(undefined8 *)OVRPlugin_Quatf___TypeInfo);
  puVar3 = Unity_Collections_AllocatorManager_TypeInfo;
  puVar2 = PTR_DAT_06d38e18;
LAB_0655f740:
  do {
    iVar6 = *(int *)(param_1 + 0x18);
    do {
      if (iVar6 < 0) goto LAB_0655f9b4;
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_0655fa00;
      if (*(int *)(*(long *)(param_1 + 0x20) + 0x10) <= iVar6) goto LAB_0655f90c;
      sVar4 = FUN_0655d984(param_1,0);
      if (sVar4 == 0x7d) {
        iVar6 = *(int *)(param_1 + 0x18);
        goto LAB_0655f908;
      }
      FUN_0655d9ac(param_1);
      auVar10 = FUN_0655e4b8(param_1,&local_48);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      if ((auVar10._0_8_ & 0xff) == 0) {
LAB_0655f8f0:
        *param_2 = 0;
        thunk_FUN_02f411dc(param_2,0);
        return auVar10;
      }
      FUN_0655d9ac(param_1);
      if (*(int *)(param_1 + 0x18) < 0) {
LAB_0655f8b4:
        *param_2 = 0;
        thunk_FUN_02f411dc(param_2,0);
        uVar9 = FUN_05465414(*(undefined8 *)System_ComponentModel_AmbientValueAttribute_TypeInfo,
                             local_48,*(undefined8 *)PTR_DAT_06d02140,0);
        goto LAB_0655f9d0;
      }
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_0655fa00;
      if ((*(int *)(*(long *)(param_1 + 0x20) + 0x10) <= *(int *)(param_1 + 0x18)) ||
         (sVar4 = FUN_0655d984(param_1,0), sVar4 != 0x3a)) goto LAB_0655f8b4;
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_0655fa00;
      if (*(int *)(*(long *)(param_1 + 0x20) + 0x10) <= *(int *)(param_1 + 0x18)) goto LAB_0655f8b4;
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      FUN_0655d9ac(param_1);
      auVar10 = FUN_0655f204(param_1,&local_50);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      if ((auVar10._0_8_ & 0xff) == 0) goto LAB_0655f8f0;
      if (lVar5 == 0) goto LAB_0655fa00;
      FUN_04c7462c(lVar5,local_48,local_50,*(undefined8 *)puVar3);
      FUN_0655d9ac(param_1);
      iVar6 = *(int *)(param_1 + 0x18);
    } while (iVar6 < 0);
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_0655fa00;
  } while ((*(int *)(*(long *)(param_1 + 0x20) + 0x10) <= iVar6) ||
          (sVar4 = FUN_0655d984(param_1,0), sVar4 != 0x2c));
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_0655fa00;
  iVar6 = *(int *)(param_1 + 0x18);
  if (iVar6 < *(int *)(*(long *)(param_1 + 0x20) + 0x10)) {
    *(int *)(param_1 + 0x18) = iVar6 + 1;
    FUN_0655d9ac(param_1);
    goto LAB_0655f740;
  }
LAB_0655f908:
  if (-1 < iVar6) {
LAB_0655f90c:
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_0655fa00;
    if ((iVar6 < *(int *)(*(long *)(param_1 + 0x20) + 0x10)) &&
       (sVar4 = FUN_0655d984(param_1,0), sVar4 == 0x7d)) {
      if (*(long *)(param_1 + 0x20) == 0) {
LAB_0655fa00:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      if (*(int *)(param_1 + 0x18) < *(int *)(*(long *)(param_1 + 0x20) + 0x10)) {
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
        lVar7 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d3b2f0);
        FUN_05645a04(lVar7,0);
        *(long *)(lVar7 + 0x10) = lVar5;
        thunk_FUN_02f411dc((long *)(lVar7 + 0x10),lVar5);
        *param_2 = lVar7;
        thunk_FUN_02f411dc(param_2,lVar7);
        lVar5 = *(long *)puVar2;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
          lVar5 = *(long *)puVar2;
        }
        return *(undefined1 (*) [16])(*(long *)(lVar5 + 0xb8) + 8);
      }
    }
  }
LAB_0655f9b4:
  *param_2 = 0;
  thunk_FUN_02f411dc(param_2,0);
  puVar8 = (undefined8 *)Unity_VisualScripting_AmbiguousOperatorException_TypeInfo;
  goto LAB_0655f9cc;
}


