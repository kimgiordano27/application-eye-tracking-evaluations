/*
FUNCTION_NAME: Sirenix.Serialization.MinimalBaseFormatter<Quaternion>$$Sirenix.Serialization.IFormatter.Deserialize
ENTRY_POINT: 0470c0fc
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


/* WARNING: Removing unreachable block (ram,0x0470c1b4) */
/* WARNING: Removing unreachable block (ram,0x0470c1b0) */
/* WARNING: Removing unreachable block (ram,0x0470c1fc) */

void Sirenix_Serialization_MinimalBaseFormatter<Quaternion>__Sirenix_Serialization_IFormatter_Deserialize
               (code *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x23;
  long *unaff_x24;
  long *in_stack_00000018;
  
  do {
                    /* try { // try from 0470c100 to 0480c127 has its CatchHandler @ 0470c394 */
    (*param_1)(unaff_x23,param_3);
    FUN_0470baf8();
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar2 = *in_stack_00000018;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0470c074;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_0367cd30(in_stack_00000018,*unaff_x24,0);
LAB_0470c074:
    uVar4 = (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
    if ((uVar4 & 1) == 0) {
      if (in_stack_00000018 == (long *)0x0) goto LAB_0470c1a4;
      lVar2 = *in_stack_00000018;
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar4 == 0) goto LAB_0470c17c;
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc(lVar2);
    }
    lVar3 = *in_stack_00000018;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar2) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0470c0f8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_0367cd30(in_stack_00000018,lVar2,0);
LAB_0470c0f8:
    param_1 = (code *)*puVar1;
    param_3 = puVar1[1];
    unaff_x23 = in_stack_00000018;
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_079f4598) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_0470c198;
    }
  }
LAB_0470c17c:
  puVar1 = (undefined8 *)FUN_0367cd30(in_stack_00000018,*(long *)PTR_DAT_079f4598,0);
LAB_0470c198:
  (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
LAB_0470c1a4:
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


