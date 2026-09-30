/*
FUNCTION_NAME: ToolBuddy.ThirdParty.VectorGraphics.Shape$$set_PathProps
ENTRY_POINT: 02f434cc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f43544) */
/* WARNING: Removing unreachable block (ram,0x02f43548) */
/* WARNING: Removing unreachable block (ram,0x02f43578) */

long * ToolBuddy_ThirdParty_VectorGraphics_Shape__set_PathProps(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  code *in_x9;
  int *piVar8;
  long *unaff_x19;
  long *plVar9;
  undefined8 *unaff_x23;
  long unaff_x24;
  undefined8 uVar10;
  uint uVar11;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  
  (*in_x9)();
  lVar6 = *unaff_x19;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar6 = *unaff_x19;
  }
  plVar9 = *(long **)(*(long *)(lVar6 + 0xb8) + 0x38);
  thunk_FUN_01a4b338();
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  (**(code **)(*plVar9 + 0x318))(plVar9);
  if (in_stack_00000038._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(in_stack_00000010,0);
  }
  if (unaff_x24 == 0) {
LAB_02f43558:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  plVar9 = (long *)FUN_01ab6a94(*unaff_x23,*(undefined4 *)(unaff_x24 + 0x18));
  puVar2 = PTR_DAT_03d23de8;
  puVar1 = PTR_DAT_03d229e0;
  if (0 < *(int *)(unaff_x24 + 0x18)) {
    uVar11 = 0;
    do {
      plVar3 = (long *)thunk_FUN_01a89d6c();
      if (plVar3 == (long *)0x0) {
LAB_02f42c94:
        plVar3 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cfb838,1);
        lVar6 = *(long *)PTR_DAT_03d229f0;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar6);
          lVar6 = *(long *)PTR_DAT_03d229f0;
        }
        if (plVar3 == (long *)0x0) goto LAB_02f43558;
        lVar6 = **(long **)(lVar6 + 0xb8);
        if ((lVar6 != 0) &&
           (lVar5 = thunk_FUN_01a89d6c(lVar6,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
        goto LAB_02f43560;
        if ((int)plVar3[3] == 0) goto LAB_02f4355c;
        plVar3[4] = lVar6;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar3 + 4,lVar6);
      }
      else {
        lVar6 = *plVar3;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_02f42c7c;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_01a472ec(plVar3,*(long *)puVar1,0);
LAB_02f42c7c:
        lVar6 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        if (lVar6 == 0) goto LAB_02f42c94;
      }
      if (*(uint *)(unaff_x24 + 0x18) <= uVar11) {
LAB_02f4355c:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      lVar6 = *(long *)(unaff_x24 + (long)(int)uVar11 * 8 + 0x20);
      if (lVar6 == 0) goto LAB_02f43558;
      uVar10 = *(undefined8 *)(lVar6 + 0xd8);
      lVar5 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
      FUN_02f2d730(lVar5,lVar6,uVar10);
      if (plVar9 == (long *)0x0) goto LAB_02f43558;
      if ((lVar5 != 0) &&
         (lVar6 = thunk_FUN_01a89d6c(lVar5,*(undefined8 *)(*plVar9 + 0x40)), lVar6 == 0)) {
LAB_02f43560:
        uVar10 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar10,0);
      }
      if (*(uint *)(plVar9 + 3) <= uVar11) goto LAB_02f4355c;
      plVar9[(long)(int)uVar11 + 4] = lVar5;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                (plVar9 + (long)(int)uVar11 + 4,lVar5);
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < *(int *)(unaff_x24 + 0x18));
  }
  puVar1 = PTR_DAT_03d23cb8;
  if (in_stack_00000018 != (long *)0x0) {
    lVar6 = *(long *)PTR_DAT_03d23cb8;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar6 = *(long *)puVar1;
    }
    in_stack_00000028 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x68);
    in_stack_00000020 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x60);
    uVar10 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbed58,&stack0x00000020);
    lVar6 = *in_stack_00000018;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_03cca1a0) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_02f42fbc;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01a472ec(in_stack_00000018,*(long *)PTR_DAT_03cca1a0,1);
LAB_02f42fbc:
    (*(code *)*puVar4)(in_stack_00000018,uVar10,plVar9,puVar4[1]);
  }
  return plVar9;
}


