/*
FUNCTION_NAME: Photon.Realtime.CustomTypesUnity$$DeserializeVector2
ENTRY_POINT: 016f32fc
PROGRAM: LethalApe-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Photon_Realtime_CustomTypesUnity__DeserializeVector2(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  int unaff_w20;
  int iVar5;
  long *unaff_x21;
  long *unaff_x22;
  undefined8 unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  int unaff_w26;
  
code_r0x016f32fc:
  puVar1 = (undefined8 *)(param_1 + 0x138);
  iVar5 = unaff_w20;
  do {
    unaff_w20 = unaff_w26;
                    /* try { // try from 016f3300 to 017f3303 has its CatchHandler @ 016f3718 */
    (*(code *)*puVar1)(unaff_x22,iVar5,unaff_x23,puVar1[1]);
    lVar2 = *unaff_x21;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_016f3234;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_0099eb60();
LAB_016f3234:
    uVar3 = (*(code *)*puVar1)();
    if ((uVar3 & 1) == 0) {
                    /* try { // try from 016f3334 to 017f333f has its CatchHandler @ 016f374c */
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
                    /* try { // try from 016f3350 to 017f3357 has its CatchHandler @ 016f3738 */
      return;
    }
    lVar2 = *unaff_x21;
    unaff_x22 = *(long **)(unaff_x19 + 0x28);
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 1) * 0x10 + 0x138);
          goto LAB_016f3298;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_0099eb60();
LAB_016f3298:
    unaff_x23 = (*(code *)*puVar1)();
    if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00a190f0();
    }
    param_1 = *unaff_x22;
    unaff_w26 = unaff_w20 + 1;
    uVar3 = (ulong)*(ushort *)(param_1 + 0x12a);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x25) {
          param_1 = param_1 + (long)(*piVar4 + 8) * 0x10;
          goto code_r0x016f32fc;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_0099eb60(unaff_x22,*unaff_x25,8);
    iVar5 = unaff_w20;
  } while( true );
}


