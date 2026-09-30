/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ScrollViewport$$get_Flex
ENTRY_POINT: 052dc898
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_UserInterface_Generic_ScrollViewport__get_Flex
          (undefined1 param_1 [16],ulong param_2,undefined8 param_3)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  int in_w8;
  long unaff_x19;
  long *plVar5;
  long lVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  
  plVar5 = *(long **)(unaff_x19 + 0x20);
  if (in_w8 == 2) {
    fVar10 = *(float *)(unaff_x19 + 0x34);
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    fVar7 = (float)FUN_066d1758(0);
    fVar10 = fVar10 + fVar7;
    *(float *)(unaff_x19 + 0x34) = fVar10;
    if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_052dcadc;
    if ((*(char *)(*(long *)(unaff_x19 + 0x28) + 0xb1) != '\0') ||
       (param_2 = (ulong)(uint)*(float *)(unaff_x19 + 0x30), fVar10 <= *(float *)(unaff_x19 + 0x30))
       ) goto LAB_052dc988;
    if (plVar5 == (long *)0x0) goto LAB_052dcadc;
    (**(code **)(*plVar5 + 0x4d8))(plVar5,*(undefined8 *)(*plVar5 + 0x4e0));
  }
  else {
    if (in_w8 != 1) {
      if (in_w8 != 0) {
        return 0;
      }
      *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
      puVar1 = PTR_DAT_06d01e20;
      if (plVar5 != (long *)0x0) {
        lVar6 = plVar5[0x35];
        if (*(int *)(*(long *)PTR_DAT_06d01e20 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        uVar3 = FUN_066cd30c(lVar6,0);
        if ((uVar3 & 1) == 0) {
          return 0;
        }
        lVar6 = plVar5[0x5f];
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        uVar3 = FUN_066cd30c(lVar6,0);
        if ((uVar3 & 1) == 0) {
          return 0;
        }
        *(long *)(unaff_x19 + 0x18) = plVar5[0x74];
        thunk_FUN_02f411dc((long *)(unaff_x19 + 0x18));
        *(undefined4 *)(unaff_x19 + 0x10) = 1;
        return 1;
      }
      goto LAB_052dcadc;
    }
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    *(undefined4 *)(unaff_x19 + 0x34) = 0;
LAB_052dc988:
    if ((plVar5 == (long *)0x0) || (plVar5[0x4c] == 0)) goto LAB_052dcadc;
    uVar3 = FUN_04c74820(plVar5[0x4c],*(undefined8 *)(unaff_x19 + 0x28),
                         *(undefined8 *)PTR_DAT_06d3d7f8);
    if ((uVar3 & 1) != 0) {
      if ((plVar5[0x35] == 0) || (lVar6 = FUN_066c67b0(plVar5[0x35],0), lVar6 == 0))
      goto LAB_052dcadc;
      uVar8 = FUN_066d48c0(lVar6,0);
      if (plVar5[0x5f] == 0) goto LAB_052dcadc;
      uVar9 = UnityEngine_UIElements_MinMaxSlider__UnregisterEditingCallbacks(plVar5[0x5f],0);
      lVar6 = plVar5[0x60];
      if (*(int *)(*(long *)PTR_DAT_06d03000 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar2 = FUN_0673f798(uVar8,param_2,param_3,uVar9,lVar6,0xffffffff,1,0);
      if (0 < (int)uVar2) {
        uVar3 = 0;
        do {
          lVar6 = plVar5[0x60];
          if (lVar6 == 0) goto LAB_052dcadc;
          if (*(uint *)(lVar6 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c8();
          }
          if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_052dcadc;
          uVar4 = FUN_05293990(*(long *)(unaff_x19 + 0x28),*(undefined8 *)(lVar6 + uVar3 * 8 + 0x20)
                               ,0);
          if ((uVar4 & 1) != 0) {
            *(long *)(unaff_x19 + 0x18) = plVar5[0x74];
            thunk_FUN_02f411dc((long *)(unaff_x19 + 0x18));
            *(undefined4 *)(unaff_x19 + 0x10) = 2;
            return 1;
          }
          uVar3 = uVar3 + 1;
        } while (uVar2 != uVar3);
      }
    }
  }
  FUN_052cb430(plVar5,*(undefined8 *)(unaff_x19 + 0x28),0);
  if (plVar5[0x4c] != 0) {
    FUN_04c75b28(plVar5[0x4c],*(undefined8 *)(unaff_x19 + 0x28),*(undefined8 *)PTR_DAT_06d3d760);
    return 0;
  }
LAB_052dcadc:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


