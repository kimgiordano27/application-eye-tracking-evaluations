/*
FUNCTION_NAME: Oculus.Interaction.Surfaces.PhysicsLayerSurface$$ClosestSurfacePoint
ENTRY_POINT: 018c12c4
PROGRAM: vrfs-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_6;ray_or_cast_sink_hits_2;strong_file_logging_hits_2
*/


void Oculus_Interaction_Surfaces_PhysicsLayerSurface__ClosestSurfacePoint(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  int *piVar8;
  long unaff_x19;
  int unaff_w20;
  undefined8 *unaff_x23;
  
  lVar5 = FUN_0160edfc(param_1,unaff_w20);
  lVar7 = *(long *)(unaff_x19 + 0x18);
  if (lVar7 != 0) {
    FUN_031dd848(lVar7,0,lVar5,0,*(undefined4 *)(unaff_x19 + 0x24),0);
  }
  lVar7 = FUN_0160edfc(*unaff_x23,unaff_w20);
  if (0 < *(int *)(unaff_x19 + 0x24)) {
    if (lVar5 == 0) {
LAB_018c139c:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    uVar2 = *(uint *)(lVar5 + 0x18);
    uVar6 = 0;
    piVar8 = (int *)(lVar5 + 0x24);
    do {
      if (uVar2 <= uVar6) {
LAB_018c1398:
                    /* WARNING: Subroutine does not return */
        FUN_0160eebc();
      }
      if (lVar7 == 0) goto LAB_018c139c;
      iVar4 = 0;
      if (unaff_w20 != 0) {
        iVar4 = piVar8[-1] / unaff_w20;
      }
      uVar3 = piVar8[-1] - iVar4 * unaff_w20;
      if (*(uint *)(lVar7 + 0x18) <= uVar3) goto LAB_018c1398;
      lVar1 = lVar7 + (long)(int)uVar3 * 4;
      uVar6 = uVar6 + 1;
      *piVar8 = *(int *)(lVar1 + 0x20) + -1;
      *(uint *)(lVar1 + 0x20) = uVar6;
      piVar8 = piVar8 + 6;
    } while ((int)uVar6 < *(int *)(unaff_x19 + 0x24));
  }
  *(long *)(unaff_x19 + 0x18) = lVar5;
  thunk_FUN_01656ef8((long *)(unaff_x19 + 0x18),lVar5);
  *(long *)(unaff_x19 + 0x10) = lVar7;
  thunk_FUN_01656ef8((long *)(unaff_x19 + 0x10),lVar7);
  return;
}


