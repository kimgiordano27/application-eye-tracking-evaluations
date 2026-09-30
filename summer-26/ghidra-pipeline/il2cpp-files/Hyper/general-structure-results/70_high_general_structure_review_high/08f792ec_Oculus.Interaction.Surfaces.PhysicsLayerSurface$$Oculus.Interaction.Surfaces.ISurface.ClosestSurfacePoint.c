/*
FUNCTION_NAME: Oculus.Interaction.Surfaces.PhysicsLayerSurface$$Oculus.Interaction.Surfaces.ISurface.ClosestSurfacePoint
ENTRY_POINT: 08f792ec
PROGRAM: Hyper-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_2;strong_file_logging_hits_2
*/


void Oculus_Interaction_Surfaces_PhysicsLayerSurface__Oculus_Interaction_Surfaces_ISurface_ClosestSurfacePoint
               (void)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long *unaff_x20;
  int unaff_w24;
  long *unaff_x26;
  long unaff_x27;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined8 in_stack_00000058;
  
code_r0x08f792ec:
                    /* try { // try from 08f792ec to 090792ef has its CatchHandler @ 08f794cc */
  uVar4 = FUN_08f740b8();
  do {
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar7 = *unaff_x20;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0ac15058) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_08f79368;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_04980e68(unaff_x20,*(long *)PTR_DAT_0ac15058,2);
LAB_08f79368:
    (*(code *)*puVar5)(unaff_x20,uVar4,puVar5[1]);
LAB_08f79164:
    do {
      while ((**(code **)(*unaff_x19 + 0x268))(), *(int *)(unaff_x27 + 0x18) != unaff_w24) {
        uVar8 = (**(code **)(*unaff_x19 + 0x288))();
        if ((uVar8 & 1) == 0) {
LAB_08f79584:
          FUN_08f7aa04();
LAB_08f795a4:
          FUN_08f7a7d8();
          return;
        }
        iVar1 = (**(code **)(*unaff_x19 + 0x238))();
        if (iVar1 != 5) {
          if (iVar1 == 0xe) {
            FUN_0762c218();
            if (*(int *)(unaff_x27 + 0x18) < 1) goto LAB_08f795a4;
            unaff_x20 = (long *)FUN_0762c1d4();
          }
          else {
            if (iVar1 != 2) {
              FUN_04338ac4();
              uVar2 = (**(code **)(*unaff_x19 + 0x238))();
              in_stack_00000030 = thunk_FUN_049ae08c(PTR_DAT_0ac70da8);
              in_stack_00000038 = 0xffffffffffffffff;
              in_stack_00000040 = uVar2;
              uVar4 = FUN_08db2914(&stack0x00000030,0);
              uVar6 = thunk_FUN_049ae08c(PTR_DAT_0ac73638);
              FUN_08bcc3c0(uVar6,uVar4,0);
              uVar4 = FUN_08f00ec4();
              uVar6 = thunk_FUN_049ae08c(PTR_DAT_0ac73640);
                    /* WARNING: Subroutine does not return */
              FUN_04948050(uVar4,uVar6);
            }
            plVar3 = (long *)thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac13188);
            FUN_06b7f60c(plVar3,*(undefined8 *)PTR_DAT_0ac13190);
            if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0494818c();
            }
            lVar7 = *unaff_x20;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0ac15058) {
                  puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
                  goto LAB_08f793c8;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar5 = (undefined8 *)FUN_04980e68(unaff_x20,*(long *)PTR_DAT_0ac15058,2);
LAB_08f793c8:
            (*(code *)*puVar5)(unaff_x20,plVar3,puVar5[1]);
            FUN_0762c314();
            unaff_x20 = plVar3;
          }
        }
      }
      uVar8 = FUN_08f07cec();
      if ((uVar8 & 1) == 0) goto LAB_08f79584;
      iVar1 = (**(code **)(*unaff_x19 + 0x238))();
    } while (iVar1 == 5);
    if (iVar1 == 0xe) {
      FUN_0762c218();
      unaff_x20 = (long *)FUN_0762c1d4();
      in_stack_00000058 = 0;
      goto LAB_08f79164;
    }
    if ((unaff_x26 == (long *)0x0) ||
       (uVar8 = (**(code **)(*unaff_x26 + 0x1a8))(), (uVar8 & 1) == 0)) goto code_r0x08f792ec;
    uVar4 = FUN_08f73ca0();
  } while( true );
}


