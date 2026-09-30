/*
FUNCTION_NAME: Unity.Netcode.BufferSerializer<BufferSerializerWriter>$$SerializeNetworkSerializable<HalfVector4>
ENTRY_POINT: 04d36f48
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x04d37110) */

uint Unity_Netcode_BufferSerializer<BufferSerializerWriter>__SerializeNetworkSerializable<HalfVector4>
               (void)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  size_t unaff_x22;
  void *unaff_x23;
  undefined8 *unaff_x24;
  void *unaff_x25;
  long unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  
code_r0x04d36f48:
  puVar3 = (undefined8 *)FUN_044822ac();
  do {
    uVar2 = (*(code *)*puVar3)();
    if ((uVar2 & 1) == 0) {
      uVar2 = 0;
      uVar1 = 0;
      if (unaff_x19 == (long *)0x0) goto LAB_04d370cc;
LAB_04d3706c:
      uVar2 = uVar1;
      lVar5 = *unaff_x19;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 == 0) goto LAB_04d370a4;
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_04481fb8(lVar5);
    }
    lVar7 = *unaff_x19;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar5) {
          lVar5 = lVar7 + (long)*piVar9 * 0x10 + 0x138;
          goto LAB_04d36fd4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    lVar5 = FUN_044822ac();
LAB_04d36fd4:
    *(void **)(unaff_x29 + -0x18) = unaff_x23;
    (**(code **)(*(long *)(lVar5 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar5 + 8) + 8));
    memcpy(unaff_x25,unaff_x23,unaff_x22);
    memcpy(unaff_x24,unaff_x25,unaff_x22);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    puVar3 = unaff_x24;
    if (-1 < *(int *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x20) + 0x28)) {
      puVar3 = (undefined8 *)*unaff_x24;
    }
    puVar6 = *(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x30);
    uVar4 = *puVar6;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar3;
    (*(code *)puVar6[2])(uVar4);
    if (*(char *)(unaff_x29 + -0xc) != '\0') {
      uVar1 = uVar2;
      if (unaff_x19 != (long *)0x0) goto LAB_04d3706c;
      goto LAB_04d370cc;
    }
    lVar5 = *unaff_x19;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 == 0) goto code_r0x04d36f48;
    piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    while (*(long *)(piVar9 + -2) != *unaff_x28) {
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
      if (uVar8 == 0) goto code_r0x04d36f48;
    }
                    /* try { // try from 04d36f50 to 04e36f8b has its CatchHandler @ 04d36fc0 */
    puVar3 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_09f1f008) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_04d370c0;
    }
  }
LAB_04d370a4:
  puVar3 = (undefined8 *)FUN_044822ac();
LAB_04d370c0:
  (*(code *)*puVar3)();
LAB_04d370cc:
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


