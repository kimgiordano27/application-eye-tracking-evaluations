/*
FUNCTION_NAME: Unity.Properties.ContainerPropertyBag<BackgroundPosition>$$GetProperties
ENTRY_POINT: 053b6444
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

void Unity_Properties_ContainerPropertyBag<BackgroundPosition>__GetProperties(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x19;
  long lVar8;
  long lVar9;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000058;
  undefined8 in_stack_00000060;
  long *in_stack_00000068;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  long in_stack_000000e8;
  
                    /* try { // try from 053b6444 to 054b645f has its CatchHandler @ 053b64a4 */
  FUN_0450f0c8();
  puVar2 = PTR_DAT_07a024b8;
  in_stack_00000098 = in_stack_00000038;
  in_stack_00000090 = in_stack_00000030;
  in_stack_000000a8 = in_stack_00000048;
  in_stack_000000a0 = in_stack_00000040;
                    /* try { // try from 053b6460 to 054b6487 has its CatchHandler @ 053b62dc */
  while( true ) {
    uVar6 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>__System_Collections_IEnumerator_get_Current
                      (&stack0x00000090,*(undefined8 *)puVar2);
    uVar4 = in_stack_000000a8;
    uVar3 = in_stack_000000a0;
    if ((uVar6 & 1) == 0) {
      FUN_0587c8cc(&stack0x00000090,*(undefined8 *)PTR_DAT_07a024b0);
      lVar9 = *(long *)(in_stack_000000e8 + 0x20);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0367c9fc();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x50);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0367c9fc();
      }
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      if ((*(ushort *)(*(long *)(in_stack_000000e8 + 0x20) + 0x135) & 1) == 0) {
        FUN_0367c9fc();
      }
      FUN_049983cc();
      if (*(int *)(*(long *)PTR_DAT_07a024f0 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar3 = in_stack_00000060;
      lVar9 = *(long *)(*in_stack_00000068 + 0x20);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0367c9fc();
      }
      FUN_053b6f28(uVar3,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x58));
      if (in_stack_00000058 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c00();
      }
      return;
    }
    lVar9 = *(long *)(unaff_x19 + 0x20);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar8 = *(long *)(unaff_x19 + 0x28);
    lVar7 = *(long *)(in_stack_000000e8 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0367c9fc();
    }
    FUN_055a8e08(&stack0x00000030,lVar9,uVar3,uVar4,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x30))
    ;
    uVar5 = in_stack_00000040;
    uVar4 = in_stack_00000038;
    uVar3 = in_stack_00000030;
    if (lVar8 == 0) break;
    lVar9 = *(long *)(in_stack_000000e8 + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0367c9fc();
    }
    lVar7 = *(long *)(lVar8 + 0x10);
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x38);
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (lVar7 == 0) break;
    uVar1 = *(uint *)(lVar8 + 0x18);
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      lVar7 = lVar7 + (long)(int)uVar1 * 0x18;
      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar7 + 0x28) = uVar4;
      *(undefined8 *)(lVar7 + 0x20) = uVar3;
      *(undefined8 *)(lVar7 + 0x30) = uVar5;
    }
    else {
      in_stack_00000030 = uVar3;
      in_stack_00000038 = uVar4;
      in_stack_00000040 = uVar5;
      FUN_04473e48(lVar8,&stack0x00000030,
                   *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


