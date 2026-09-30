/*
FUNCTION_NAME: Unity.Properties.ContainerPropertyBag<BackgroundPosition>$$.ctor
ENTRY_POINT: 053b64b8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x053b6584) */
/* WARNING: Removing unreachable block (ram,0x053b6674) */

void Unity_Properties_ContainerPropertyBag<BackgroundPosition>___ctor(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x24;
  int unaff_w25;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000058;
  undefined8 in_stack_00000060;
  long *in_stack_00000068;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  long in_stack_000000e8;
  
  while( true ) {
                    /* try { // try from 053b64c0 to 054b64c3 has its CatchHandler @ 053b64c8 */
    uStack0000000000000008 = in_stack_00000038;
    uStack0000000000000000 = in_stack_00000030;
    uStack0000000000000010 = in_stack_00000040;
                    /* catch() { ... } // from try @ 053b64c0 with catch @ 053b64c8 */
    if (unaff_x20 == 0) break;
                    /* try { // try from 053b64cc to 054b64df has its CatchHandler @ 053b64e8 */
    lVar5 = *(long *)(in_stack_000000e8 + 0x20);
                    /* catch() { ... } // from try @ 053b63e8 with catch @ 053b64d8
                       catch() { ... } // from try @ 053b6488 with catch @ 053b64d8 */
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
                    /* try { // try from 053b64e0 to 054b64eb has its CatchHandler @ 053b62dc */
      lVar5 = FUN_0367c9fc();
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 053b64cc with catch @ 053b64e8
                        */
                    /* catch() { ... } // from try @ 053b659c with catch @ 053b64ec
                       catch() { ... } // from try @ 053b65e0 with catch @ 053b64ec
                       catch() { ... } // from try @ 053b6620 with catch @ 053b64ec */
    lVar6 = *(long *)(unaff_x20 + 0x10);
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x38);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    if (lVar6 == 0) break;
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                    /* try { // try from 053b6510 to 054b6513 has its CatchHandler @ 053b65e8 */
      lVar6 = lVar6 + (long)(int)uVar1 * (long)unaff_w25;
      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar6 + 0x28) = uStack0000000000000008;
      *(undefined8 *)(lVar6 + 0x20) = uStack0000000000000000;
      *(undefined8 *)(lVar6 + 0x30) = uStack0000000000000010;
    }
    else {
                    /* try { // try from 053b6534 to 054b659b has its CatchHandler @ 053b65ec */
      in_stack_00000038 = uStack0000000000000008;
      in_stack_00000030 = uStack0000000000000000;
      in_stack_00000040 = uStack0000000000000010;
      FUN_04473e48(unaff_x20,&stack0x00000030,
                   *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
    }
    uVar4 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>__System_Collections_IEnumerator_get_Current
                      (&stack0x00000090,*unaff_x24);
    uVar3 = in_stack_000000a8;
    uVar2 = in_stack_000000a0;
    if ((uVar4 & 1) == 0) {
      FUN_0587c8cc(&stack0x00000090,*(undefined8 *)PTR_DAT_07a024b0);
      lVar5 = *(long *)(in_stack_000000e8 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0367c9fc();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x50);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0367c9fc();
      }
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      if ((*(ushort *)(*(long *)(in_stack_000000e8 + 0x20) + 0x135) & 1) == 0) {
        FUN_0367c9fc();
      }
      FUN_049983cc();
      if (*(int *)(*(long *)PTR_DAT_07a024f0 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar2 = in_stack_00000060;
      lVar5 = *(long *)(*in_stack_00000068 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0367c9fc();
      }
      FUN_053b6f28(uVar2,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x58));
      if (in_stack_00000058 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c00();
      }
      return;
    }
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    unaff_x20 = *(long *)(unaff_x19 + 0x28);
    lVar6 = *(long *)(in_stack_000000e8 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0367c9fc();
    }
    FUN_055a8e08(&stack0x00000030,lVar5,uVar2,uVar3,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x30))
    ;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


