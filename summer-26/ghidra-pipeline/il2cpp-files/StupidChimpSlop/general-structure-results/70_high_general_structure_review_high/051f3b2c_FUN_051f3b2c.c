/*
FUNCTION_NAME: FUN_051f3b2c
ENTRY_POINT: 051f3b2c
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2
*/


uint FUN_051f3b2c(long param_1,undefined4 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  undefined1 local_38 [4];
  undefined4 local_34;
  
  if ((DAT_06a51fa6 & 1) == 0) {
    FUN_02d4dc40(System_ComponentModel_TypeConverter_var);
    FUN_02d4dc40(System_ComponentModel_TypeConverterAttribute_var);
    FUN_02d4dc40(PlayFab_ClientModels_UnlinkAndroidDeviceIDRequest_var);
    FUN_02d4dc40(UnityEngine_UIElements_TypeConverterRegistry_var);
    FUN_02d4dc40(UnityEngine_UIElements_VisualTreeAsset_UsingEntry_var);
    FUN_02d4dc40(PTR_DAT_06647b60);
    FUN_02d4dc40(UnityEngine_UIElements_PointerDeviceState_RuntimePointerState_RaycastHit_var);
    DAT_06a51fa6 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x80);
  if (*(int *)(param_1 + 0x38) == 7) {
    if (lVar5 != 0) {
      lVar5 = thunk_FUN_02d8a638(*(undefined8 *)UnityEngine_UIElements_TypeConverterRegistry_var);
      FUN_04799694(lVar5,*(undefined8 *)System_ComponentModel_TypeConverterAttribute_var);
      puVar1 = PTR_DAT_066462a0;
      local_34 = param_2;
      uVar3 = thunk_FUN_02d8a270(*(undefined8 *)(PTR_DAT_066462a0 + 0x48),&local_34);
      if (lVar5 != 0) {
        FUN_0479a434(lVar5,10,uVar3,*(undefined8 *)System_ComponentModel_TypeConverter_var);
        if ((param_4 & 1) == 0) {
          uVar3 = 3;
        }
        else {
          local_38[0] = 1;
          param_3 = thunk_FUN_02d8a270(*(undefined8 *)(puVar1 + 0x28),local_38);
          uVar3 = 0xc;
        }
        FUN_0479a420(lVar5,uVar3,param_3,
                     *(undefined8 *)PlayFab_ClientModels_UnlinkAndroidDeviceIDRequest_var);
        puVar1 = PTR_DAT_06647b60;
        plVar8 = *(long **)(param_1 + 0x80);
        if (*(int *)(*(long *)PTR_DAT_06647b60 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        if (plVar8 != (long *)0x0) {
          uVar2 = (**(code **)(*plVar8 + 0x228))
                            (plVar8,5,lVar5,**(undefined8 **)(*(long *)puVar1 + 0xb8),
                             *(undefined8 *)(*plVar8 + 0x230));
          goto LAB_051f3d48;
        }
      }
    }
  }
  else if (lVar5 != 0) {
    if (*(char *)(lVar5 + 0x40) != '\0') {
      plVar8 = *(long **)(param_1 + 0x78);
      if (plVar8 == (long *)0x0) goto LAB_051f3d60;
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      uVar3 = *(undefined8 *)
               UnityEngine_UIElements_PointerDeviceState_RuntimePointerState_RaycastHit_var;
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              *(long *)UnityEngine_UIElements_VisualTreeAsset_UsingEntry_var) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_051f3d30;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_02d87540(plVar8,*(long *)UnityEngine_UIElements_VisualTreeAsset_UsingEntry_var,0)
      ;
LAB_051f3d30:
      (*(code *)*puVar4)(plVar8,1,uVar3,puVar4[1]);
    }
    uVar2 = 0;
LAB_051f3d48:
    return uVar2 & 1;
  }
LAB_051f3d60:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


