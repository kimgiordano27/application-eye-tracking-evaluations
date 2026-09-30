/*
FUNCTION_NAME: Unity.Netcode.BufferSerializer<BufferSerializerReader>$$SerializeValue<FixedString128Bytes>
ENTRY_POINT: 04d36c18
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

uint Unity_Netcode_BufferSerializer<BufferSerializerReader>__SerializeValue<FixedString128Bytes>
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  long *unaff_x23;
  
  do {
    uVar5 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == param_3) {
                    /* try { // try from 04d36c58 to 04e36c5f has its CatchHandler @ 04d36944 */
          puVar2 = (undefined8 *)(param_1 + (long)*piVar6 * 0x10 + 0x138);
          goto Unity_Netcode_BufferSerializer<BufferSerializerReader>__SerializeValue<HalfVector3>;
        }
                    /* try { // try from 04d36c34 to 04e36c3b has its CatchHandler @ 04d36c98 */
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
                    /* try { // try from 04d36c40 to 04e36c57 has its CatchHandler @ 04d36d38 */
    puVar2 = (undefined8 *)FUN_044822ac();
Unity_Netcode_BufferSerializer<BufferSerializerReader>__SerializeValue<HalfVector3>:
    uVar3 = (*(code *)*puVar2)();
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44(uVar3,uVar3);
    }
    uVar5 = (**(code **)(unaff_x21 + 0x18))
                      (*(undefined8 *)(unaff_x21 + 0x40),uVar3,*(undefined8 *)(unaff_x21 + 0x28));
    if ((uVar5 & 1) != 0) {
      uVar1 = unaff_w22;
      if (unaff_x19 == (long *)0x0) goto LAB_04d36cfc;
      goto LAB_04d36c9c;
    }
    lVar4 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_04d36be4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_044822ac();
LAB_04d36be4:
    unaff_w22 = (*(code *)*puVar2)();
    if ((unaff_w22 & 1) == 0) break;
    param_3 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x10);
    if ((*(byte *)(param_3 + 0x135) & 1) == 0) {
      param_3 = FUN_04481fb8(param_3);
    }
    param_1 = *unaff_x19;
  } while( true );
  unaff_w22 = 0;
  uVar1 = 0;
  if (unaff_x19 != (long *)0x0) {
LAB_04d36c9c:
    unaff_w22 = uVar1;
    lVar4 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_09f1f008) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_04d36cf0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_044822ac();
LAB_04d36cf0:
    (*(code *)*puVar2)();
  }
LAB_04d36cfc:
  return unaff_w22 & 1;
}


