/*
FUNCTION_NAME: Oculus.Interaction.Surfaces.PhysicsLayerSurface$$Oculus.Interaction.Surfaces.ISurface.ClosestSurfacePoint
ENTRY_POINT: 051ecd84
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_2;strong_file_logging_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x051ece50) */
/* WARNING: Removing unreachable block (ram,0x051ecf74) */

void Oculus_Interaction_Surfaces_PhysicsLayerSurface__Oculus_Interaction_Surfaces_ISurface_ClosestSurfacePoint
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong in_x9;
  int *in_x10;
  int *piVar5;
  long in_x11;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *in_stack_00000018;
  
  do {
    if (in_x11 == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_051eccfc;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar1 = (undefined8 *)FUN_02f421d0(unaff_x20,param_3,0);
LAB_051eccfc:
        (*(code *)*puVar1)(unaff_x20,puVar1[1]);
        FUN_051ec1a4();
        if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar3 = *in_stack_00000018;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *unaff_x21) {
              puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_051ecd50;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar1 = (undefined8 *)FUN_02f421d0(in_stack_00000018,*unaff_x21,0);
LAB_051ecd50:
        uVar4 = (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
        if ((uVar4 & 1) == 0) {
          if (in_stack_00000018 == (long *)0x0) goto LAB_051ece44;
          lVar3 = *in_stack_00000018;
          uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar4 == 0) goto LAB_051ece1c;
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          goto LAB_051ece04;
        }
        if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        param_1 = *in_stack_00000018;
        param_3 = *unaff_x22;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
        unaff_x20 = in_stack_00000018;
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_x11 = *(long *)(in_x10 + -2);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
LAB_051ece04:
    if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_051ece38;
    }
  }
LAB_051ece1c:
  puVar1 = (undefined8 *)FUN_02f421d0(in_stack_00000018,*(long *)PTR_DAT_067c91b0,0);
LAB_051ece38:
  (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
LAB_051ece44:
  plVar2 = *(long **)(unaff_x19 + 0x10);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x5a8))(plVar2,*(undefined8 *)(*plVar2 + 0x5b0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


