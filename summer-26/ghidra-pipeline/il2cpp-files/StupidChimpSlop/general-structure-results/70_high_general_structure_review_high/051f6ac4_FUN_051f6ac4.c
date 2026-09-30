/*
FUNCTION_NAME: FUN_051f6ac4
ENTRY_POINT: 051f6ac4
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


uint FUN_051f6ac4(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  int local_24;
  
  if ((DAT_06a51fb8 & 1) == 0) {
    FUN_02d4dc40(System_ComponentModel_TypeConverter_var);
    FUN_02d4dc40(System_ComponentModel_TypeConverterAttribute_var);
    FUN_02d4dc40(PlayFab_ClientModels_UnlinkAndroidDeviceIDRequest_var);
    FUN_02d4dc40(UnityEngine_UIElements_TypeConverterRegistry_var);
    FUN_02d4dc40(UnityEngine_UIElements_VisualTreeAsset_UsingEntry_var);
    FUN_02d4dc40(PTR_DAT_06647b60);
    FUN_02d4dc40(System_Action<ClimbProvider>_TypeInfo);
    FUN_02d4dc40(System_Action<Collider>_TypeInfo);
    DAT_06a51fb8 = 1;
  }
  if (*(long *)(param_1 + 0x50) == 0) {
    if (*(long *)(param_1 + 0x80) == 0) goto LAB_051f6d30;
    if (*(char *)(*(long *)(param_1 + 0x80) + 0x40) != '\0') {
      plVar9 = *(long **)(param_1 + 0x78);
      if (plVar9 == (long *)0x0) goto LAB_051f6d30;
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      lVar3 = *(long *)UnityEngine_UIElements_VisualTreeAsset_UsingEntry_var;
      uVar4 = *(undefined8 *)System_Action<Collider>_TypeInfo;
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar3) goto LAB_051f6cf8;
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
LAB_051f6ce8:
      puVar5 = (undefined8 *)FUN_02d87540(plVar9,lVar3,0);
      goto LAB_051f6d04;
    }
  }
  else {
    if (*(long *)(*(long *)(param_1 + 0x50) + 0x28) != 0) {
      lVar3 = thunk_FUN_02d8a638(*(undefined8 *)UnityEngine_UIElements_TypeConverterRegistry_var);
      FUN_04799694(lVar3,*(undefined8 *)System_ComponentModel_TypeConverterAttribute_var);
      if ((*(long *)(param_1 + 0x50) == 0) || (lVar3 == 0)) {
LAB_051f6d30:
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      FUN_0479a434(lVar3,0xdd,*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x28),
                   *(undefined8 *)System_ComponentModel_TypeConverter_var);
      if (-1 < *(int *)(param_1 + 0x5c)) {
        local_24 = *(int *)(param_1 + 0x5c);
        uVar4 = thunk_FUN_02d8a270(*(undefined8 *)(PTR_DAT_066462a0 + 0x48),&local_24);
        FUN_0479a420(lVar3,0xe,uVar4,
                     *(undefined8 *)PlayFab_ClientModels_UnlinkAndroidDeviceIDRequest_var);
      }
      puVar1 = PTR_DAT_06647b60;
      plVar9 = *(long **)(param_1 + 0x80);
      if (*(int *)(*(long *)PTR_DAT_06647b60 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      if (plVar9 == (long *)0x0) goto LAB_051f6d30;
      uVar2 = (**(code **)(*plVar9 + 0x228))
                        (plVar9,0xe6,lVar3,**(undefined8 **)(*(long *)puVar1 + 0xb8),
                         *(undefined8 *)(*plVar9 + 0x230));
      goto LAB_051f6d1c;
    }
    if (*(long *)(param_1 + 0x80) == 0) goto LAB_051f6d30;
    if (*(char *)(*(long *)(param_1 + 0x80) + 0x40) != '\0') {
      plVar9 = *(long **)(param_1 + 0x78);
      if (plVar9 == (long *)0x0) goto LAB_051f6d30;
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      lVar3 = *(long *)UnityEngine_UIElements_VisualTreeAsset_UsingEntry_var;
      uVar4 = *(undefined8 *)System_Action<ClimbProvider>_TypeInfo;
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar3) goto LAB_051f6cf8;
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      goto LAB_051f6ce8;
    }
  }
LAB_051f6d18:
  uVar2 = 0;
LAB_051f6d1c:
  return uVar2 & 1;
LAB_051f6cf8:
  puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
LAB_051f6d04:
  (*(code *)*puVar5)(plVar9,1,uVar4,puVar5[1]);
  goto LAB_051f6d18;
}


