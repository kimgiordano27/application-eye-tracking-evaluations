/*
FUNCTION_NAME: Unity.Netcode.BufferSerializer<BufferSerializerReader>$$SerializeValue<HalfVector3>
ENTRY_POINT: 04d36c5c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x04d36d20) */

uint Unity_Netcode_BufferSerializer<BufferSerializerReader>__SerializeValue<HalfVector3>
               (undefined8 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  long *unaff_x23;
  
code_r0x04d36c5c:
  do {
                    /* try { // try from 04d36c60 to 04e36c67 has its CatchHandler @ 04d36c80 */
    uVar2 = (*(code *)*param_1)();
                    /* catch() { ... } // from try @ 04d36be4 with catch @ 04d36c68
                       try { // try from 04d36c68 to 04e36cb7 has its CatchHandler @ 04d36944 */
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44(uVar2,uVar2);
    }
                    /* catch() { ... } // from try @ 04d36abc with catch @ 04d36c74 */
                    /* catch() { ... } // from try @ 04d36ad4 with catch @ 04d36c78 */
                    /* catch() { ... } // from try @ 04d36a08 with catch @ 04d36c7c */
    uVar3 = (**(code **)(unaff_x21 + 0x18))
                      (*(undefined8 *)(unaff_x21 + 0x40),uVar2,*(undefined8 *)(unaff_x21 + 0x28));
                    /* catch() { ... } // from try @ 04d36bfc with catch @ 04d36c80
                       catch() { ... } // from try @ 04d36c60 with catch @ 04d36c80 */
    if ((uVar3 & 1) != 0) {
                    /* catch() { ... } // from try @ 04d36a24 with catch @ 04d36c84 */
      uVar1 = unaff_w22;
      if (unaff_x19 == (long *)0x0) goto LAB_04d36cfc;
LAB_04d36c9c:
                    /* catch() { ... } // from try @ 04d36b00 with catch @ 04d36c9c */
      unaff_w22 = uVar1;
      lVar6 = *unaff_x19;
      uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar3 == 0) goto LAB_04d36cd4;
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x23) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_04d36be4;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_044822ac();
LAB_04d36be4:
    unaff_w22 = (*(code *)*puVar4)();
    if ((unaff_w22 & 1) == 0) {
                    /* catch() { ... } // from try @ 04d36b14 with catch @ 04d36c90 */
                    /* catch() { ... } // from try @ 04d36b9c with catch @ 04d36c94 */
      unaff_w22 = 0;
                    /* catch() { ... } // from try @ 04d36c34 with catch @ 04d36c98 */
      uVar1 = 0;
      if (unaff_x19 != (long *)0x0) goto LAB_04d36c9c;
      goto LAB_04d36cfc;
    }
    lVar6 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x10);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_04481fb8(lVar6);
    }
    lVar5 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar6) {
          param_1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto code_r0x04d36c5c;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    param_1 = (undefined8 *)FUN_044822ac();
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar7 = piVar7 + 4;
    if (uVar3 == 0) break;
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f1f008) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_04d36cf0;
    }
  }
LAB_04d36cd4:
  puVar4 = (undefined8 *)FUN_044822ac();
LAB_04d36cf0:
  (*(code *)*puVar4)();
LAB_04d36cfc:
  return unaff_w22 & 1;
}


