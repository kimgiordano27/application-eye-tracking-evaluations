/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.SpatialAnchorSpawnerBuildingBlock$$.ctor
ENTRY_POINT: 039c9814
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_BuildingBlocks_SpatialAnchorSpawnerBuildingBlock___ctor(void)

{
  undefined2 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long lVar8;
  long unaff_x24;
  uint unaff_w25;
  uint uVar9;
  uint uVar10;
  long lVar11;
  int unaff_w28;
  int *piVar12;
  long in_stack_00000000;
  undefined2 *in_stack_00000008;
  undefined8 in_stack_00000018;
  
  uVar10 = 0xffffffff;
  do {
    uVar9 = unaff_w25;
    lVar11 = *(long *)(unaff_x19 + 0x18);
    if (lVar11 == 0) goto LAB_039c9a20;
    if (*(uint *)(lVar11 + 0x18) <= uVar9) goto LAB_039c9a24;
    piVar12 = (int *)(lVar11 + (long)(int)uVar9 * 0xc + 0x20);
    lVar8 = (long)(int)uVar9;
    if (*piVar12 == unaff_w28) {
      plVar4 = *(long **)(unaff_x19 + 0x30);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)(*(long *)(*(long *)(unaff_x24 + 0x20) + 0xc0) + 0x10
                                               ) + 8))();
        if (plVar4 == (long *)0x0) goto LAB_039c9a20;
        uVar6 = (**(code **)(*plVar4 + 0x1b8))
                          (plVar4,*(undefined2 *)(lVar11 + lVar8 * 0xc + 0x28),
                           in_stack_00000018._4_2_,*(undefined8 *)(*plVar4 + 0x1c0));
      }
      else {
        if (plVar4 == (long *)0x0) goto LAB_039c9a20;
        lVar3 = *(long *)(*(long *)(*(long *)(unaff_x24 + 0x20) + 0xc0) + 0x148);
        uVar1 = *(undefined2 *)(lVar11 + lVar8 * 0xc + 0x28);
        if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
          lVar3 = FUN_015c2790(lVar3);
        }
        lVar5 = *plVar4;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == lVar3) {
              puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_039c991c;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined8 *)FUN_015c2a80(plVar4,lVar3,0);
LAB_039c991c:
        uVar6 = (*(code *)*puVar2)(plVar4,uVar1,in_stack_00000018._4_2_,puVar2[1]);
      }
      if ((uVar6 & 1) != 0) {
        if ((int)uVar10 < 0) {
          lVar3 = *(long *)(unaff_x19 + 0x10);
          if (lVar3 == 0) goto LAB_039c9a20;
          if (*(uint *)(lVar3 + 0x18) <= (uint)in_stack_00000000) goto LAB_039c9a24;
          *(int *)(lVar3 + in_stack_00000000 * 4 + 0x20) = *(int *)(lVar11 + lVar8 * 0xc + 0x24) + 1
          ;
        }
        else {
          lVar3 = *(long *)(unaff_x19 + 0x18);
          if (lVar3 == 0) {
LAB_039c9a20:
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          if (*(uint *)(lVar3 + 0x18) <= uVar10) {
LAB_039c9a24:
                    /* WARNING: Subroutine does not return */
            FUN_0160eebc();
          }
          *(undefined4 *)(lVar3 + (long)(int)uVar10 * 0xc + 0x24) =
               *(undefined4 *)(lVar11 + lVar8 * 0xc + 0x24);
        }
        lVar11 = lVar11 + lVar8 * 0xc;
        *in_stack_00000008 = *(undefined2 *)(lVar11 + 0x2a);
        *piVar12 = -1;
        *(undefined4 *)(lVar11 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
        *(uint *)(unaff_x19 + 0x24) = uVar9;
        *(ulong *)(unaff_x19 + 0x28) =
             CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                      (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
        return 1;
      }
    }
    unaff_w25 = *(uint *)(lVar11 + lVar8 * 0xc + 0x24);
    uVar10 = uVar9;
    if ((int)unaff_w25 < 0) {
      *in_stack_00000008 = 0;
      return 0;
    }
  } while( true );
}


