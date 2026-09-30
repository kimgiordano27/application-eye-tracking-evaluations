/*
FUNCTION_NAME: Unity.Hierarchy.HierarchyNodeTypeHandlerBase$$InvokeDispose
ENTRY_POINT: 0891346c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


undefined8 Unity_Hierarchy_HierarchyNodeTypeHandlerBase__InvokeDispose(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 in_w8;
  undefined4 uVar6;
  long unaff_x19;
  long unaff_x20;
  long lVar7;
  undefined8 uStack0000000000000008;
  undefined8 *puStack0000000000000010;
  long in_stack_00000018;
  
  *(undefined1 *)(unaff_x20 + 0x2c2) = in_w8;
  puVar2 = PTR_DAT_09289f68;
  iVar1 = *(int *)(unaff_x19 + 0x10);
  lVar7 = *(long *)(unaff_x19 + 0x28);
  puStack0000000000000010 = &stack0x00000018;
  uStack0000000000000008 = 0;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      *(undefined4 *)(unaff_x19 + 0x10) = 0xfffffffd;
      if (*(char *)(unaff_x19 + 0x20) == '\0') goto LAB_089136d4;
      if (*(int *)(*(long *)PTR_DAT_09285d70 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_0897e2a8(*(undefined8 *)PTR_DAT_0933dc68,0);
      *(undefined8 *)(in_stack_00000018 + 0x18) = 0;
      thunk_FUN_040ec700((undefined8 *)(in_stack_00000018 + 0x18),0);
      uVar6 = 1;
    }
    else {
      if (iVar1 != 1) {
        return 0;
      }
      *(undefined4 *)(unaff_x19 + 0x10) = 0xfffffffd;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      if (DAT_09885a31 == '\0') {
        FUN_04077588(PTR_DAT_09289f68);
        DAT_09885a31 = '\x01';
      }
      lVar7 = *(long *)puVar2;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar7 = *(long *)puVar2;
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar7 = *(long *)(lVar7 + 0x18);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      FUN_0890823c(lVar7,0);
      *(undefined8 *)(in_stack_00000018 + 0x18) = 0;
      thunk_FUN_040ec700((undefined8 *)(in_stack_00000018 + 0x18),0);
      uVar6 = 2;
    }
LAB_0891378c:
    uVar5 = 1;
    *(undefined4 *)(in_stack_00000018 + 0x10) = uVar6;
  }
  else {
    if (iVar1 == 2) {
      *(undefined4 *)(unaff_x19 + 0x10) = 0xfffffffd;
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830(0);
      }
      lVar3 = *(long *)(lVar7 + 0x28);
      if (lVar3 != 0) {
        (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
        unaff_x19 = in_stack_00000018;
      }
LAB_089136d4:
      if ((*(char *)(unaff_x19 + 0x30) != '\0') && (uVar4 = FUN_0891393c(), (uVar4 & 1) != 0)) {
        if (*(int *)(*(long *)PTR_DAT_09285d70 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        FUN_0897e2a8(*(undefined8 *)PTR_DAT_0933dc60,0);
        puVar2 = PTR_DAT_09289f68;
        if (*(int *)(*(long *)PTR_DAT_09289f68 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        if (DAT_09885a31 == '\0') {
          FUN_04077588(PTR_DAT_09289f68);
          DAT_09885a31 = '\x01';
        }
        lVar7 = *(long *)puVar2;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          lVar7 = *(long *)puVar2;
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar7 = *(long *)(lVar7 + 0x18);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        uVar5 = UnityEngine_Rendering_SupportedRenderingFeatures__set_overridesLightProbeSystem
                          (lVar7,0);
        *(undefined8 *)(in_stack_00000018 + 0x18) = uVar5;
        thunk_FUN_040ec700();
        uVar6 = 3;
        goto LAB_0891378c;
      }
      uVar4 = FUN_08913984();
      if ((uVar4 & 1) != 0) {
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar7 = *(long *)(lVar7 + 0x30);
        if (lVar7 != 0) {
          (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
        }
        puVar2 = PTR_DAT_0933d930;
        if (*(int *)(*(long *)PTR_DAT_0933d930 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        if (DAT_098a953d == '\0') {
          FUN_04077588(PTR_DAT_0933d930);
          DAT_098a953d = '\x01';
        }
        lVar7 = *(long *)puVar2;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          lVar7 = *(long *)puVar2;
        }
        if (*(char *)(*(long *)(lVar7 + 0xb8) + 0x14) == '\0') {
          if (*(int *)(*(long *)PTR_DAT_09285d28 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          FUN_089731f0(0);
        }
      }
    }
    else {
      if (iVar1 != 3) {
        return 0;
      }
      *(undefined4 *)(unaff_x19 + 0x10) = 0xfffffffd;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      if (DAT_09885a31 == '\0') {
        FUN_04077588(PTR_DAT_09289f68);
        DAT_09885a31 = '\x01';
      }
      lVar3 = *(long *)puVar2;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar3 = *(long *)puVar2;
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar3 = *(long *)(lVar3 + 0x18);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      FUN_08907fd8(lVar3,0);
      if (DAT_09885a31 == '\0') {
        FUN_04077588(PTR_DAT_09289f68);
        DAT_09885a31 = '\x01';
      }
      lVar3 = *(long *)puVar2;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar3 = *(long *)puVar2;
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar3 = *(long *)(lVar3 + 0x18);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar5 = *(undefined8 *)(lVar3 + 0x30);
      if (*(int *)(*(long *)PTR_DAT_09285bb0 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar4 = FUN_089ca704(uVar5,0,0);
      puVar2 = PTR_DAT_0933d930;
      if ((uVar4 & 1) == 0) {
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
      }
      else {
        lVar3 = *(long *)PTR_DAT_0933d930;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          lVar3 = *(long *)puVar2;
        }
        *(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0xc) = 0;
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar3 = *(long *)(lVar7 + 0x40);
        if (lVar3 != 0) {
          (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
        }
      }
      lVar7 = *(long *)(lVar7 + 0x20);
      if (lVar7 != 0) {
        (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
      }
    }
    FUN_089139cc(in_stack_00000018);
    uVar5 = 0;
  }
  return uVar5;
}


