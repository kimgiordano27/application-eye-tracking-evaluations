/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$HookGetInstanceProcAddr
ENTRY_POINT: 031f13d8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_4;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_MetaXRFeature__HookGetInstanceProcAddr(void)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  int unaff_w20;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 in_stack_00000048;
  
  thunk_FUN_01ac7298();
  if (unaff_w20 == *(int *)(*(long *)(*unaff_x23 + 0xb8) + 8)) {
    plVar3 = (long *)FUN_031ee3bc();
    uVar4 = FUN_031edffc();
    puVar1 = PTR_DAT_03d83150;
    uVar4 = FUN_02edd6e8(uVar4,*(undefined8 *)PTR_DAT_03d83150,0);
    if (plVar3 != (long *)0x0) {
      lVar7 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x24) {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 9) * 0x10 + 0x138);
            goto LAB_031f14a8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ae9f78(plVar3,*unaff_x24,9);
LAB_031f14a8:
      iVar2 = (*(code *)*puVar5)(plVar3,in_stack_00000048,uVar4,puVar5[1]);
      lVar7 = *unaff_x23;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01ac7298(lVar7);
        lVar7 = *unaff_x23;
      }
      if (iVar2 != *(int *)(*(long *)(lVar7 + 0xb8) + 8)) {
        uVar4 = FUN_031edffc();
        uVar4 = FUN_02ee6c30(*(undefined8 *)PTR_DAT_03d83148,uVar4,*(undefined8 *)puVar1,0);
        goto LAB_031f1560;
      }
      plVar3 = (long *)FUN_031ee3bc();
      if (plVar3 != (long *)0x0) {
        lVar7 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x24) {
              puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 3) * 0x10 + 0x138);
              goto LAB_031f15a4;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ae9f78(plVar3,*unaff_x24,3);
LAB_031f15a4:
        iVar2 = (*(code *)*puVar5)(plVar3,in_stack_00000048,puVar5[1]);
        lVar7 = *unaff_x23;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01ac7298(lVar7);
          lVar7 = *unaff_x23;
        }
        if (iVar2 == *(int *)(*(long *)(lVar7 + 0xb8) + 8)) {
          return 1;
        }
        thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_4__);
        uVar4 = thunk_FUN_01afaadc();
        uVar6 = thunk_FUN_01ad9084(PTR_DAT_03d83168);
        FUN_03076790(uVar4,uVar6,0);
        uVar6 = thunk_FUN_01ad9084(PTR_DAT_03d83170);
                    /* WARNING: Subroutine does not return */
        FUN_01b48050(uVar4,uVar6);
      }
    }
  }
  else {
    lVar7 = FUN_0391c2b8();
    if (lVar7 != 0) {
      uVar4 = FUN_039230bc(lVar7,0);
      uVar4 = FUN_02edd6e8(*(undefined8 *)PTR_DAT_03d83158,uVar4,0);
LAB_031f1560:
      if (*(int *)(*(long *)
                    Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                          );
      }
      FUN_038f2e04(uVar4,0);
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


