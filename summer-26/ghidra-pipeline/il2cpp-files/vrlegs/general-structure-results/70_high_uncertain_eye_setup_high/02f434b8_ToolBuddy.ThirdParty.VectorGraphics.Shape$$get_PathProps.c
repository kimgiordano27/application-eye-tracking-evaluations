/*
FUNCTION_NAME: ToolBuddy.ThirdParty.VectorGraphics.Shape$$get_PathProps
ENTRY_POINT: 02f434b8
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

long * ToolBuddy_ThirdParty_VectorGraphics_Shape__get_PathProps(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long *unaff_x21;
  long *plVar10;
  undefined8 *unaff_x23;
  undefined8 uVar11;
  uint uVar12;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  
  lVar6 = FUN_01ab6a94();
  (**(code **)(*unaff_x21 + 0x368))();
  lVar7 = *unaff_x19;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar7 = *unaff_x19;
  }
  plVar10 = *(long **)(*(long *)(lVar7 + 0xb8) + 0x38);
  thunk_FUN_01a4b338();
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  (**(code **)(*plVar10 + 0x318))(plVar10);
  if (in_stack_00000038._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(in_stack_00000010,0);
  }
  if (lVar6 == 0) {
LAB_02f43558:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  plVar10 = (long *)FUN_01ab6a94(*unaff_x23,*(undefined4 *)(lVar6 + 0x18));
  puVar2 = PTR_DAT_03d23de8;
  puVar1 = PTR_DAT_03d229e0;
  if (0 < *(int *)(lVar6 + 0x18)) {
    uVar12 = 0;
    do {
      plVar3 = (long *)thunk_FUN_01a89d6c();
      if (plVar3 == (long *)0x0) {
LAB_02f42c94:
        plVar3 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cfb838,1);
        lVar7 = *(long *)PTR_DAT_03d229f0;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar7);
          lVar7 = *(long *)PTR_DAT_03d229f0;
        }
        if (plVar3 == (long *)0x0) goto LAB_02f43558;
        lVar7 = **(long **)(lVar7 + 0xb8);
        if ((lVar7 != 0) &&
           (lVar5 = thunk_FUN_01a89d6c(lVar7,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
        goto LAB_02f43560;
        if ((int)plVar3[3] == 0) goto LAB_02f4355c;
        plVar3[4] = lVar7;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar3 + 4,lVar7);
      }
      else {
        lVar7 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
              puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_02f42c7c;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_01a472ec(plVar3,*(long *)puVar1,0);
LAB_02f42c7c:
        lVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        if (lVar7 == 0) goto LAB_02f42c94;
      }
      if (*(uint *)(lVar6 + 0x18) <= uVar12) {
LAB_02f4355c:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      lVar7 = *(long *)(lVar6 + (long)(int)uVar12 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_02f43558;
      uVar11 = *(undefined8 *)(lVar7 + 0xd8);
      lVar5 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
      FUN_02f2d730(lVar5,lVar7,uVar11);
      if (plVar10 == (long *)0x0) goto LAB_02f43558;
      if ((lVar5 != 0) &&
         (lVar7 = thunk_FUN_01a89d6c(lVar5,*(undefined8 *)(*plVar10 + 0x40)), lVar7 == 0)) {
LAB_02f43560:
        uVar11 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar11,0);
      }
      if (*(uint *)(plVar10 + 3) <= uVar12) goto LAB_02f4355c;
      plVar10[(long)(int)uVar12 + 4] = lVar5;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                (plVar10 + (long)(int)uVar12 + 4,lVar5);
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < *(int *)(lVar6 + 0x18));
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
    uVar11 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbed58,&stack0x00000020);
    lVar6 = *in_stack_00000018;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_03cca1a0) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_02f42fbc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01a472ec(in_stack_00000018,*(long *)PTR_DAT_03cca1a0,1);
LAB_02f42fbc:
    (*(code *)*puVar4)(in_stack_00000018,uVar11,plVar10,puVar4[1]);
  }
  return plVar10;
}


