/*
FUNCTION_NAME: Sirenix.Serialization.MinimalBaseFormatter<Vector4>$$Deserialize
ENTRY_POINT: 0470eda0
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

void Sirenix_Serialization_MinimalBaseFormatter<Vector4>__Deserialize(void)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x24;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  undefined8 uStack0000000000000060;
  long *in_stack_00000078;
  
  do {
    uStack0000000000000048 = in_stack_00000010;
    uStack0000000000000040 = in_stack_00000008;
    uStack0000000000000058 = in_stack_00000020;
    uStack0000000000000050 = in_stack_00000018;
    uStack0000000000000060 = in_stack_00000028;
    FUN_0470e754();
    plVar1 = in_stack_00000078;
    if (in_stack_00000078 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar3 = *in_stack_00000078;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0470ed08;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_0367cd30(in_stack_00000078,*unaff_x24,0);
LAB_0470ed08:
    uVar5 = (*(code *)*puVar2)(plVar1,puVar2[1]);
    plVar1 = in_stack_00000078;
    if ((uVar5 & 1) == 0) {
      if (in_stack_00000078 == (long *)0x0) goto LAB_0470ee50;
                    /* catch() { ... } // from try @ 0470ed68 with catch @ 0470edf4 */
      lVar3 = *in_stack_00000078;
                    /* try { // try from 0470edf8 to 0480edff has its CatchHandler @ 0470ee08 */
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
                    /* try { // try from 0470ee00 to 0480ee0b has its CatchHandler @ 0470eac8 */
      if (uVar5 == 0) goto LAB_0470ee28;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0470edf8 with catch @ 0470ee08
                        */
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000078 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0367c9fc(lVar3);
    }
    lVar4 = *plVar1;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0470ed8c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_0367cd30(plVar1,lVar3,0);
LAB_0470ed8c:
    (*(code *)*puVar2)(&stack0x00000008,plVar1,puVar2[1]);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_079f4598) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_0470ee44;
    }
  }
LAB_0470ee28:
  puVar2 = (undefined8 *)FUN_0367cd30(in_stack_00000078,*(long *)PTR_DAT_079f4598,0);
LAB_0470ee44:
  (*(code *)*puVar2)(plVar1,puVar2[1]);
LAB_0470ee50:
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


