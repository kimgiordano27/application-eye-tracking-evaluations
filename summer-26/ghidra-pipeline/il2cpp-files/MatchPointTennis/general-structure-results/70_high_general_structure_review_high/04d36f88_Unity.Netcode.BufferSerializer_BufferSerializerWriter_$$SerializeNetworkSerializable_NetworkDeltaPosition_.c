/*
FUNCTION_NAME: Unity.Netcode.BufferSerializer<BufferSerializerWriter>$$SerializeNetworkSerializable<NetworkDeltaPosition>
ENTRY_POINT: 04d36f88
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


/* WARNING: Removing unreachable block (ram,0x04d37110) */

uint Unity_Netcode_BufferSerializer<BufferSerializerWriter>__SerializeNetworkSerializable<NetworkDeltaPosition>
               (long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  size_t unaff_x22;
  void *unaff_x23;
  undefined8 *unaff_x24;
  void *unaff_x25;
  uint unaff_w26;
  long unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  
LAB_04d36f8c:
  lVar3 = *unaff_x19;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                    /* try { // try from 04d36f94 to 04e36f9f has its CatchHandler @ 04d3708c */
  if (uVar4 != 0) {
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == param_1) {
        lVar3 = lVar3 + (long)*piVar6 * 0x10 + 0x138;
        goto LAB_04d36fd4;
      }
      uVar4 = uVar4 - 1;
      piVar6 = piVar6 + 4;
                    /* try { // try from 04d36fb4 to 04e36fb7 has its CatchHandler @ 04d36fbc */
    } while (uVar4 != 0);
  }
                    /* try { // try from 04d36fb8 to 04e36fdb has its CatchHandler @ 04d36d3c */
                    /* catch() { ... } // from try @ 04d36fb4 with catch @ 04d36fbc */
                    /* catch() { ... } // from try @ 04d36f50 with catch @ 04d36fc0 */
  lVar3 = FUN_044822ac();
LAB_04d36fd4:
  *(void **)(unaff_x29 + -0x18) = unaff_x23;
  (**(code **)(*(long *)(lVar3 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar3 + 8) + 8));
  memcpy(unaff_x25,unaff_x23,unaff_x22);
  memcpy(unaff_x24,unaff_x25,unaff_x22);
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  puVar5 = unaff_x24;
  if (-1 < *(int *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x20) + 0x28)) {
    puVar5 = (undefined8 *)*unaff_x24;
  }
  puVar2 = *(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x30);
  uVar1 = *puVar2;
  *(undefined8 **)(unaff_x29 + -0x18) = puVar5;
  (*(code *)puVar2[2])(uVar1);
  if (*(char *)(unaff_x29 + -0xc) != '\0') goto joined_r0x04d37058;
  lVar3 = *unaff_x19;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *unaff_x28) {
        puVar5 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_04d36f5c;
      }
      uVar4 = uVar4 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar4 != 0);
  }
  puVar5 = (undefined8 *)FUN_044822ac();
LAB_04d36f5c:
  unaff_w26 = (*(code *)*puVar5)();
  if ((unaff_w26 & 1) != 0) {
    param_1 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x10);
    if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
      param_1 = FUN_04481fb8(param_1);
    }
    goto LAB_04d36f8c;
  }
  unaff_w26 = 0;
joined_r0x04d37058:
  if (unaff_x19 != (long *)0x0) {
    lVar3 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_09f1f008) {
          puVar5 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_04d370c0;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_044822ac();
LAB_04d370c0:
    (*(code *)*puVar5)();
  }
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return unaff_w26 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


