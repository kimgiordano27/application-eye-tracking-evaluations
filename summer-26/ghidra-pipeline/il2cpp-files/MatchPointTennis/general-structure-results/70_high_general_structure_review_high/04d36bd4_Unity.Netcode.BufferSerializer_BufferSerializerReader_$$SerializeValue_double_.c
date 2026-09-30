/*
FUNCTION_NAME: Unity.Netcode.BufferSerializer<BufferSerializerReader>$$SerializeValue<double>
ENTRY_POINT: 04d36bd4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_12
*/


/* WARNING: Removing unreachable block (ram,0x04d36d20) */

uint Unity_Netcode_BufferSerializer<BufferSerializerReader>__SerializeValue<double>
               (undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  
LAB_04d36be4:
                    /* try { // try from 04d36be4 to 04e36be7 has its CatchHandler @ 04d36c68 */
  uVar2 = (*(code *)*param_1)();
  if ((uVar2 & 1) != 0) {
                    /* try { // try from 04d36bfc to 04e36c03 has its CatchHandler @ 04d36c80 */
    lVar5 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x10);
                    /* try { // try from 04d36c04 to 04e36c33 has its CatchHandler @ 04d36944 */
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_04481fb8(lVar5);
    }
    lVar6 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto Unity_Netcode_BufferSerializer<BufferSerializerReader>__SerializeValue<HalfVector3>;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_044822ac();
Unity_Netcode_BufferSerializer<BufferSerializerReader>__SerializeValue<HalfVector3>:
    uVar4 = (*(code *)*puVar3)();
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44(uVar4,uVar4);
    }
    uVar7 = (**(code **)(unaff_x21 + 0x18))
                      (*(undefined8 *)(unaff_x21 + 0x40),uVar4,*(undefined8 *)(unaff_x21 + 0x28));
    if ((uVar7 & 1) != 0) {
      uVar1 = uVar2;
      if (unaff_x19 == (long *)0x0) goto LAB_04d36cfc;
      goto LAB_04d36c9c;
    }
    lVar5 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x23) {
          param_1 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_04d36be4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    param_1 = (undefined8 *)FUN_044822ac();
    goto LAB_04d36be4;
  }
  uVar2 = 0;
  uVar1 = 0;
  if (unaff_x19 != (long *)0x0) {
LAB_04d36c9c:
    uVar2 = uVar1;
    lVar5 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09f1f008) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_04d36cf0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_044822ac();
LAB_04d36cf0:
    (*(code *)*puVar3)();
  }
LAB_04d36cfc:
  return uVar2 & 1;
}


