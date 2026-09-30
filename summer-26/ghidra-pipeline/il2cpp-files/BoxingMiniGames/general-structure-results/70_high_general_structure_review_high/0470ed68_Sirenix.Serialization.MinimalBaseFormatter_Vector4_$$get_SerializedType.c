/*
FUNCTION_NAME: Sirenix.Serialization.MinimalBaseFormatter<Vector4>$$get_SerializedType
ENTRY_POINT: 0470ed68
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0470ee60) */
/* WARNING: Removing unreachable block (ram,0x0470ee5c) */
/* WARNING: Removing unreachable block (ram,0x0470eea4) */

void Sirenix_Serialization_MinimalBaseFormatter<Vector4>__get_SerializedType
               (long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong in_x9;
  int *in_x10;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  long *in_stack_00000078;
  
code_r0x0470ed68:
                    /* try { // try from 0470ed68 to 0480ed6b has its CatchHandler @ 0470edf4 */
  in_x10 = in_x10 + 4;
                    /* try { // try from 0470ed6c to 0480edf7 has its CatchHandler @ 0470eac8 */
  if (!(bool)in_ZR) goto LAB_0470ed58;
LAB_0470ed70:
  puVar2 = (undefined8 *)FUN_0367cd30(unaff_x23,param_3,0);
  do {
    (*(code *)*puVar2)(&stack0x00000008,unaff_x23,puVar2[1]);
    in_stack_00000048 = in_stack_00000010;
    in_stack_00000040 = in_stack_00000008;
    in_stack_00000058 = in_stack_00000020;
    in_stack_00000050 = in_stack_00000018;
    in_stack_00000060 = in_stack_00000028;
    FUN_0470e754();
    plVar1 = in_stack_00000078;
    if (in_stack_00000078 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar3 = *in_stack_00000078;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0470ed08;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_0367cd30(in_stack_00000078,*unaff_x24,0);
LAB_0470ed08:
    uVar4 = (*(code *)*puVar2)(plVar1,puVar2[1]);
    unaff_x23 = in_stack_00000078;
    if ((uVar4 & 1) == 0) {
      if (in_stack_00000078 == (long *)0x0) goto LAB_0470ee50;
      lVar3 = *in_stack_00000078;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 == 0) goto LAB_0470ee28;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000078 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    param_3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(ushort *)(param_3 + 0x135) & 1) == 0) {
      param_3 = FUN_0367c9fc(param_3);
    }
    param_1 = *unaff_x23;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (in_x9 == 0) goto LAB_0470ed70;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_0470ed58:
    if (*(long *)(in_x10 + -2) != param_3) {
      in_x9 = in_x9 - 1;
      in_ZR = in_x9 == 0;
      goto code_r0x0470ed68;
    }
    puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_079f4598) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_0470ee44;
    }
  }
LAB_0470ee28:
  puVar2 = (undefined8 *)FUN_0367cd30(in_stack_00000078,*(long *)PTR_DAT_079f4598,0);
LAB_0470ee44:
  (*(code *)*puVar2)(unaff_x23,puVar2[1]);
LAB_0470ee50:
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


