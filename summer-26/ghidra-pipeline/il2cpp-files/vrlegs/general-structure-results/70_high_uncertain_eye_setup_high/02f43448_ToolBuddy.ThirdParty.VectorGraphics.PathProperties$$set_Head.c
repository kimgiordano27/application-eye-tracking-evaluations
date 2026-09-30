/*
FUNCTION_NAME: ToolBuddy.ThirdParty.VectorGraphics.PathProperties$$set_Head
ENTRY_POINT: 02f43448
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f43578) */

long * ToolBuddy_ThirdParty_VectorGraphics_PathProperties__set_Head(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  int unaff_w19;
  long *unaff_x21;
  undefined8 *unaff_x23;
  undefined8 uVar11;
  uint uVar12;
  long unaff_x27;
  long *in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  
  puVar6 = (undefined8 *)FUN_01a472ec();
  (*(code *)*puVar6)();
  puVar1 = PTR_DAT_03d23cb8;
  if (unaff_x27 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c();
  }
  if ((unaff_w19 == 0xb) || (unaff_w19 == 0)) {
    if (in_stack_00000008 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar3 = (**(code **)(*in_stack_00000008 + 0x298))
                      (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x2a0));
    lVar7 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03d23df8,uVar3);
    (**(code **)(*in_stack_00000008 + 0x368))
              (in_stack_00000008,lVar7,0,*(undefined8 *)(*in_stack_00000008 + 0x370));
    lVar8 = *(long *)puVar1;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar8 = *(long *)puVar1;
    }
    unaff_x21 = *(long **)(*(long *)(lVar8 + 0xb8) + 0x38);
    thunk_FUN_01a4b338();
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    (**(code **)(*unaff_x21 + 0x318))(unaff_x21);
    unaff_w19 = 5;
  }
  else {
    lVar7 = 0;
  }
  if (in_stack_00000038._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(in_stack_00000010,0);
  }
  if ((unaff_w19 == 5) || (unaff_w19 == 0)) {
    if (lVar7 == 0) {
LAB_02f43558:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    unaff_x21 = (long *)FUN_01ab6a94(*unaff_x23,*(undefined4 *)(lVar7 + 0x18));
    puVar2 = PTR_DAT_03d23de8;
    puVar1 = PTR_DAT_03d229e0;
    if (0 < *(int *)(lVar7 + 0x18)) {
      uVar12 = 0;
      do {
        plVar4 = (long *)thunk_FUN_01a89d6c();
        if (plVar4 == (long *)0x0) {
LAB_02f42c94:
          plVar4 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cfb838,1);
          lVar8 = *(long *)PTR_DAT_03d229f0;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar8);
            lVar8 = *(long *)PTR_DAT_03d229f0;
          }
          if (plVar4 == (long *)0x0) goto LAB_02f43558;
          lVar8 = **(long **)(lVar8 + 0xb8);
          if ((lVar8 != 0) &&
             (lVar5 = thunk_FUN_01a89d6c(lVar8,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
          goto LAB_02f43560;
          if ((int)plVar4[3] == 0) goto LAB_02f4355c;
          plVar4[4] = lVar8;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 4,lVar8);
        }
        else {
          lVar8 = *plVar4;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_02f42c7c;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar6 = (undefined8 *)FUN_01a472ec(plVar4,*(long *)puVar1,0);
LAB_02f42c7c:
          lVar8 = (*(code *)*puVar6)(plVar4,puVar6[1]);
          if (lVar8 == 0) goto LAB_02f42c94;
        }
        if (*(uint *)(lVar7 + 0x18) <= uVar12) {
LAB_02f4355c:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        lVar8 = *(long *)(lVar7 + (long)(int)uVar12 * 8 + 0x20);
        if (lVar8 == 0) goto LAB_02f43558;
        uVar11 = *(undefined8 *)(lVar8 + 0xd8);
        lVar5 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
        FUN_02f2d730(lVar5,lVar8,uVar11);
        if (unaff_x21 == (long *)0x0) goto LAB_02f43558;
        if ((lVar5 != 0) &&
           (lVar8 = thunk_FUN_01a89d6c(lVar5,*(undefined8 *)(*unaff_x21 + 0x40)), lVar8 == 0)) {
LAB_02f43560:
          uVar11 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar11,0);
        }
        if (*(uint *)(unaff_x21 + 3) <= uVar12) goto LAB_02f4355c;
        unaff_x21[(long)(int)uVar12 + 4] = lVar5;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  (unaff_x21 + (long)(int)uVar12 + 4,lVar5);
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < *(int *)(lVar7 + 0x18));
    }
    puVar1 = PTR_DAT_03d23cb8;
    if (in_stack_00000018 != (long *)0x0) {
      lVar7 = *(long *)PTR_DAT_03d23cb8;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar7 = *(long *)puVar1;
      }
      in_stack_00000028 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x68);
      in_stack_00000020 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x60);
      uVar11 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbed58,&stack0x00000020);
      lVar7 = *in_stack_00000018;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_03cca1a0) {
            puVar6 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_02f42fbc;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_01a472ec(in_stack_00000018,*(long *)PTR_DAT_03cca1a0,1);
LAB_02f42fbc:
      (*(code *)*puVar6)(in_stack_00000018,uVar11,unaff_x21,puVar6[1]);
    }
  }
  return unaff_x21;
}


