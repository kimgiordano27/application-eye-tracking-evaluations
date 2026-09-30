/*
FUNCTION_NAME: OVA.WisteriaX.Entities.Messages.ItemExtensions.ColliderRequestValueChangeMessage$$Deserialize
ENTRY_POINT: 08c5afbc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x08c5b058) */

void OVA_WisteriaX_Entities_Messages_ItemExtensions_ColliderRequestValueChangeMessage__Deserialize
               (long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong in_x9;
  int *in_x10;
  long *unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000040;
  
code_r0x08c5afbc:
  in_x9 = in_x9 - 1;
  in_x10 = in_x10 + 4;
  if (in_x9 != 0) goto LAB_08c5afb0;
  do {
    puVar2 = (undefined8 *)FUN_040b1e00(unaff_x20,param_3,0);
    while( true ) {
      (*(code *)*puVar2)(unaff_x20);
      uVar1 = FUN_07161154(&stack0x00000030,*unaff_x21);
      if ((uVar1 & 1) == 0) {
        FUN_07161150(&stack0x00000030,*(undefined8 *)PTR_DAT_09351ed8);
        FUN_061cdb80(in_stack_00000028,*(undefined8 *)PTR_DAT_09351f08);
        if (in_stack_00000020 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077828(in_stack_00000020);
        }
        return;
      }
      if (in_stack_00000040 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      param_1 = *in_stack_00000040;
      param_3 = *unaff_x22;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      unaff_x20 = in_stack_00000040;
      if (in_x9 == 0) break;
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_08c5afb0:
      if (*(long *)(in_x10 + -2) != param_3) goto code_r0x08c5afbc;
      puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
    }
  } while( true );
}


