/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ScrollView$$.ctor
ENTRY_POINT: 052dc890
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
Meta_XR_ImmersiveDebugger_UserInterface_Generic_ScrollView___ctor
          (undefined1 param_1 [16],ulong param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 in_w8;
  long unaff_x19;
  long unaff_x20;
  long *plVar6;
  long lVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  
  *(undefined1 *)(unaff_x20 + 0x110) = in_w8;
  iVar1 = *(int *)(unaff_x19 + 0x10);
  plVar6 = *(long **)(unaff_x19 + 0x20);
  if (iVar1 == 2) {
    fVar11 = *(float *)(unaff_x19 + 0x34);
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    fVar8 = (float)FUN_066d1758(0);
    fVar11 = fVar11 + fVar8;
    *(float *)(unaff_x19 + 0x34) = fVar11;
    if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_052dcadc;
    if ((*(char *)(*(long *)(unaff_x19 + 0x28) + 0xb1) != '\0') ||
       (param_2 = (ulong)(uint)*(float *)(unaff_x19 + 0x30), fVar11 <= *(float *)(unaff_x19 + 0x30))
       ) goto LAB_052dc988;
    if (plVar6 == (long *)0x0) goto LAB_052dcadc;
    (**(code **)(*plVar6 + 0x4d8))(plVar6,*(undefined8 *)(*plVar6 + 0x4e0));
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 0) {
        return 0;
      }
      *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
      puVar2 = PTR_DAT_06d01e20;
      if (plVar6 != (long *)0x0) {
        lVar7 = plVar6[0x35];
        if (*(int *)(*(long *)PTR_DAT_06d01e20 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        uVar4 = FUN_066cd30c(lVar7,0);
        if ((uVar4 & 1) == 0) {
          return 0;
        }
        lVar7 = plVar6[0x5f];
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        uVar4 = FUN_066cd30c(lVar7,0);
        if ((uVar4 & 1) == 0) {
          return 0;
        }
        *(long *)(unaff_x19 + 0x18) = plVar6[0x74];
        thunk_FUN_02f411dc((long *)(unaff_x19 + 0x18));
        *(undefined4 *)(unaff_x19 + 0x10) = 1;
        return 1;
      }
      goto LAB_052dcadc;
    }
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    *(undefined4 *)(unaff_x19 + 0x34) = 0;
LAB_052dc988:
    if ((plVar6 == (long *)0x0) || (plVar6[0x4c] == 0)) goto LAB_052dcadc;
    uVar4 = FUN_04c74820(plVar6[0x4c],*(undefined8 *)(unaff_x19 + 0x28),
                         *(undefined8 *)PTR_DAT_06d3d7f8);
    if ((uVar4 & 1) != 0) {
      if ((plVar6[0x35] == 0) || (lVar7 = FUN_066c67b0(plVar6[0x35],0), lVar7 == 0))
      goto LAB_052dcadc;
      uVar9 = FUN_066d48c0(lVar7,0);
      if (plVar6[0x5f] == 0) goto LAB_052dcadc;
      uVar10 = UnityEngine_UIElements_MinMaxSlider__UnregisterEditingCallbacks(plVar6[0x5f],0);
      lVar7 = plVar6[0x60];
      if (*(int *)(*(long *)PTR_DAT_06d03000 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar3 = FUN_0673f798(uVar9,param_2,param_3,uVar10,lVar7,0xffffffff,1,0);
      if (0 < (int)uVar3) {
        uVar4 = 0;
        do {
          lVar7 = plVar6[0x60];
          if (lVar7 == 0) goto LAB_052dcadc;
          if (*(uint *)(lVar7 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c8();
          }
          if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_052dcadc;
          uVar5 = FUN_05293990(*(long *)(unaff_x19 + 0x28),*(undefined8 *)(lVar7 + uVar4 * 8 + 0x20)
                               ,0);
          if ((uVar5 & 1) != 0) {
            *(long *)(unaff_x19 + 0x18) = plVar6[0x74];
            thunk_FUN_02f411dc((long *)(unaff_x19 + 0x18));
            *(undefined4 *)(unaff_x19 + 0x10) = 2;
            return 1;
          }
          uVar4 = uVar4 + 1;
        } while (uVar3 != uVar4);
      }
    }
  }
  FUN_052cb430(plVar6,*(undefined8 *)(unaff_x19 + 0x28),0);
  if (plVar6[0x4c] != 0) {
    FUN_04c75b28(plVar6[0x4c],*(undefined8 *)(unaff_x19 + 0x28),*(undefined8 *)PTR_DAT_06d3d760);
    return 0;
  }
LAB_052dcadc:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


