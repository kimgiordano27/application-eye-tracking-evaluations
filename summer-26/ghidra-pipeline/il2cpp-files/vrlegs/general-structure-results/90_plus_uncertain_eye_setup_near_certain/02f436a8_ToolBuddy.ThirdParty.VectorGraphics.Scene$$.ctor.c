/*
FUNCTION_NAME: ToolBuddy.ThirdParty.VectorGraphics.Scene$$.ctor
ENTRY_POINT: 02f436a8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02f43548) */
/* WARNING: Removing unreachable block (ram,0x02f43878) */

long * ToolBuddy_ThirdParty_VectorGraphics_Scene___ctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  long unaff_x24;
  int unaff_w26;
  undefined8 uVar10;
  uint uVar11;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  
  if (unaff_w26 != 1) {
    if (in_stack_00000038._4_1_ != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(in_stack_00000010,0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01b3fef0();
  }
  plVar6 = (long *)__cxa_begin_catch();
  lVar9 = *plVar6;
  __cxa_end_catch();
  puVar1 = PTR_DAT_03cfffe8;
  if (in_stack_00000038._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(in_stack_00000010,0);
  }
  if (lVar9 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c(lVar9);
  }
  if (unaff_x24 == 0) {
LAB_02f43558:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  plVar6 = (long *)FUN_01ab6a94(*(undefined8 *)puVar1,*(undefined4 *)(unaff_x24 + 0x18));
  puVar2 = PTR_DAT_03d23de8;
  puVar1 = PTR_DAT_03d229e0;
  if (0 < *(int *)(unaff_x24 + 0x18)) {
    uVar11 = 0;
    do {
      plVar3 = (long *)thunk_FUN_01a89d6c();
      if (plVar3 == (long *)0x0) {
LAB_02f42c94:
        plVar3 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cfb838,1);
        lVar9 = *(long *)PTR_DAT_03d229f0;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar9);
          lVar9 = *(long *)PTR_DAT_03d229f0;
        }
        if (plVar3 == (long *)0x0) goto LAB_02f43558;
        lVar9 = **(long **)(lVar9 + 0xb8);
        if ((lVar9 != 0) &&
           (lVar5 = thunk_FUN_01a89d6c(lVar9,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
        goto LAB_02f43560;
        if ((int)plVar3[3] == 0) goto LAB_02f4355c;
        plVar3[4] = lVar9;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar3 + 4,lVar9);
      }
      else {
        lVar9 = *plVar3;
        uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
              puVar4 = (undefined8 *)(lVar9 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_02f42c7c;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_01a472ec(plVar3,*(long *)puVar1,0);
LAB_02f42c7c:
        lVar9 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        if (lVar9 == 0) goto LAB_02f42c94;
      }
      if (*(uint *)(unaff_x24 + 0x18) <= uVar11) {
LAB_02f4355c:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      lVar9 = *(long *)(unaff_x24 + (long)(int)uVar11 * 8 + 0x20);
      if (lVar9 == 0) goto LAB_02f43558;
      uVar10 = *(undefined8 *)(lVar9 + 0xd8);
      lVar5 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
      FUN_02f2d730(lVar5,lVar9,uVar10);
      if (plVar6 == (long *)0x0) goto LAB_02f43558;
      if ((lVar5 != 0) &&
         (lVar9 = thunk_FUN_01a89d6c(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
LAB_02f43560:
        uVar10 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar10,0);
      }
      if (*(uint *)(plVar6 + 3) <= uVar11) goto LAB_02f4355c;
      plVar6[(long)(int)uVar11 + 4] = lVar5;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                (plVar6 + (long)(int)uVar11 + 4,lVar5);
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < *(int *)(unaff_x24 + 0x18));
  }
  puVar1 = PTR_DAT_03d23cb8;
  if (in_stack_00000018 != (long *)0x0) {
    lVar9 = *(long *)PTR_DAT_03d23cb8;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar9 = *(long *)puVar1;
    }
    in_stack_00000028 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x68);
    in_stack_00000020 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x60);
    uVar10 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbed58,&stack0x00000020);
    lVar9 = *in_stack_00000018;
    uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_03cca1a0) {
          puVar4 = (undefined8 *)(lVar9 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_02f42fbc;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01a472ec(in_stack_00000018,*(long *)PTR_DAT_03cca1a0,1);
LAB_02f42fbc:
    (*(code *)*puVar4)(in_stack_00000018,uVar10,plVar6,puVar4[1]);
  }
  return plVar6;
}


