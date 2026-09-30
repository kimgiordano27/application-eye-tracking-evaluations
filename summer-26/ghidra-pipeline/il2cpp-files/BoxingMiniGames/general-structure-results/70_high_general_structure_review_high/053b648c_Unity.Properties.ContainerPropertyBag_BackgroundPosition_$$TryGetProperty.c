/*
FUNCTION_NAME: Unity.Properties.ContainerPropertyBag<BackgroundPosition>$$TryGetProperty
ENTRY_POINT: 053b648c
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

void Unity_Properties_ContainerPropertyBag<BackgroundPosition>__TryGetProperty(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 *unaff_x24;
  int unaff_w25;
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
    if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
                    /* try { // try from 053b6498 to 054b649b has its CatchHandler @ 053b64a4 */
      param_1 = FUN_0367c9fc();
    }
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 053b6420 with catch @ 053b649c
                       try { // try from 053b649c to 054b64bf has its CatchHandler @ 053b62dc */
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 053b6444 with catch @ 053b64a4
                       catch(type#1 @ 07542bc8) { ... } // from try @ 053b6498 with catch @ 053b64a4
                        */
    FUN_055a8e08(&stack0x00000030,unaff_x21,unaff_x22,unaff_x23,
                 *(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x30));
    uVar4 = in_stack_00000040;
    uVar3 = in_stack_00000038;
    uVar2 = in_stack_00000030;
    if (unaff_x20 == 0) break;
    lVar6 = *(long *)(in_stack_000000e8 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0367c9fc();
    }
    lVar7 = *(long *)(unaff_x20 + 0x10);
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x38);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    if (lVar7 == 0) break;
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      lVar7 = lVar7 + (long)(int)uVar1 * (long)unaff_w25;
      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar7 + 0x28) = uVar3;
      *(undefined8 *)(lVar7 + 0x20) = uVar2;
      *(undefined8 *)(lVar7 + 0x30) = uVar4;
    }
    else {
      in_stack_00000030 = uVar2;
      in_stack_00000038 = uVar3;
      in_stack_00000040 = uVar4;
      FUN_04473e48(unaff_x20,&stack0x00000030,
                   *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
    }
    uVar5 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>__System_Collections_IEnumerator_get_Current
                      (&stack0x00000090,*unaff_x24);
    if ((uVar5 & 1) == 0) {
      FUN_0587c8cc(&stack0x00000090,*(undefined8 *)PTR_DAT_07a024b0);
      lVar6 = *(long *)(in_stack_000000e8 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0367c9fc();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x50);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0367c9fc();
      }
      if (*(int *)(lVar6 + 0xe4) == 0) {
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
      lVar6 = *(long *)(*in_stack_00000068 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0367c9fc();
      }
      FUN_053b6f28(uVar2,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x58));
      if (in_stack_00000058 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c00();
      }
      return;
    }
    unaff_x21 = *(long *)(unaff_x19 + 0x20);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    unaff_x20 = *(long *)(unaff_x19 + 0x28);
    param_1 = *(long *)(in_stack_000000e8 + 0x20);
    unaff_x22 = in_stack_000000a0;
    unaff_x23 = in_stack_000000a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


