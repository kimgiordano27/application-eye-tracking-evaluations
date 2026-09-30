/*
FUNCTION_NAME: FUN_0534908c
ENTRY_POINT: 0534908c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool FUN_0534908c(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 local_8c;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  
  puVar2 = UnityEngine_XR_OpenXR_Features_Interactions_EyeTrackingUsages_TypeInfo;
  if ((DAT_06bbb51c & 1) == 0) {
    FUN_02f08768(UnityEngine_XR_OpenXR_Features_Interactions_EyeTrackingUsages_TypeInfo);
    FUN_02f08768(UnityEngine_UIElements_StyleValuePropertyBag<StyleFloat,_float>_TypeInfo);
    FUN_02f08768(PTR_DAT_067c9790);
    DAT_06bbb51c = 1;
  }
  lVar3 = FUN_04735a9c(param_1,*(undefined8 *)puVar2);
  if (lVar3 != 0) {
    cVar1 = *(char *)(lVar3 + 0x2c);
    if (cVar1 == '\0') {
      if (*(int *)(*(long *)PTR_DAT_067c9790 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_060fdf88(&local_50,0);
      uVar9 = CONCAT44(uStack_44,uStack_48);
      uVar10 = CONCAT44(uStack_40,uStack_44);
      local_8c = local_50;
      uStack_78 = uStack_3c;
LAB_053491e8:
      param_2[1] = uVar9;
      *param_2 = local_8c;
      *(undefined8 *)((long)param_2 + 0x14) = uStack_78;
      *(undefined8 *)((long)param_2 + 0xc) = uVar10;
      return cVar1 != '\0';
    }
    lVar4 = FUN_04735a9c(param_1,*(undefined8 *)puVar2);
    if ((lVar4 != 0) && (*(long *)(lVar4 + 0x38) != 0)) {
      local_70 = *(undefined8 *)(lVar3 + 0x10);
      plVar8 = *(long **)(*(long *)(lVar4 + 0x38) + 0x10);
      uStack_5c = *(undefined8 *)(lVar3 + 0x24);
      uStack_68 = (undefined4)*(undefined8 *)(lVar3 + 0x18);
      uStack_64 = (undefined4)*(undefined8 *)(lVar3 + 0x1c);
      uStack_60 = (undefined4)((ulong)*(undefined8 *)(lVar3 + 0x1c) >> 0x20);
      if (plVar8 != (long *)0x0) {
        lVar3 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) ==
                *(long *)UnityEngine_UIElements_StyleValuePropertyBag<StyleFloat,_float>_TypeInfo) {
              puVar5 = (undefined8 *)(lVar3 + (long)(*piVar7 + 1) * 0x10 + 0x138);
              goto LAB_053491b8;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar5 = (undefined8 *)
                 FUN_02f421d0(plVar8,*(long *)
                                      UnityEngine_UIElements_StyleValuePropertyBag<StyleFloat,_float>_TypeInfo
                              ,1);
LAB_053491b8:
        uStack_48 = uStack_68;
        local_50 = local_70;
        uStack_3c = uStack_5c;
        uStack_44 = uStack_64;
        uStack_40 = uStack_60;
        (*(code *)*puVar5)(&local_8c,plVar8,&local_50,puVar5[1]);
        uVar9 = CONCAT44(uStack_80,uStack_84);
        uVar10 = CONCAT44(uStack_7c,uStack_80);
        goto LAB_053491e8;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


