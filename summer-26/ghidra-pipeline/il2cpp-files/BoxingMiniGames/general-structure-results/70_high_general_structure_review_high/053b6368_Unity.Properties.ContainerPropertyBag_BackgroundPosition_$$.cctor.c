/*
FUNCTION_NAME: Unity.Properties.ContainerPropertyBag<BackgroundPosition>$$.cctor
ENTRY_POINT: 053b6368
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x053b6584) */
/* WARNING: Removing unreachable block (ram,0x053b6674) */

void Unity_Properties_ContainerPropertyBag<BackgroundPosition>___cctor(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *unaff_x19;
  long lVar9;
  long lVar10;
  undefined8 *unaff_x22;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000058;
  undefined8 *in_stack_00000060;
  long *in_stack_00000068;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000078;
  undefined8 uStack0000000000000080;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  long in_stack_000000e8;
  
  uStack0000000000000078 = unaff_x22[1];
  uStack0000000000000070 = *unaff_x22;
  uStack0000000000000080 = unaff_x22[2];
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    FUN_0367c9fc();
  }
  in_stack_00000038 = uStack0000000000000078;
  in_stack_00000030 = uStack0000000000000070;
  in_stack_00000040 = uStack0000000000000080;
  FUN_055a8ef0();
                    /* try { // try from 053b63b0 to 054b63b3 has its CatchHandler @ 053b63cc */
                    /* try { // try from 053b63b4 to 054b63b7 has its CatchHandler @ 053b63c0 */
  if (unaff_x19[2] != 0) {
                    /* try { // try from 053b63b8 to 054b63e7 has its CatchHandler @ 053b62dc */
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 053b6314 with catch @ 053b63bc
                        */
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 053b63b4 with catch @ 053b63c0
                        */
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 053b63b0 with catch @ 053b63cc
                        */
    FUN_041e2150();
    if (unaff_x19[2] != 0) {
      if (*(int *)(unaff_x19[2] + 0x20) == 0) {
        in_stack_000000b8 = unaff_x19[1];
        in_stack_000000b0 = *unaff_x19;
        in_stack_000000c8 = unaff_x19[3];
        in_stack_000000c0 = unaff_x19[2];
        in_stack_00000060 = &stack0x000000b0;
                    /* try { // try from 053b63e8 to 054b63ff has its CatchHandler @ 053b64d8 */
        in_stack_000000d8 = unaff_x19[5];
        in_stack_000000d0 = unaff_x19[4];
        lVar9 = unaff_x19[5];
        in_stack_00000058 = 0;
        in_stack_00000068 = &stack0x000000e8;
                    /* try { // try from 053b6400 to 054b641f has its CatchHandler @ 053b62dc */
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        if ((*(ushort *)(*(long *)(in_stack_000000e8 + 0x20) + 0x135) & 1) == 0) {
          FUN_0367c9fc();
        }
                    /* try { // try from 053b6420 to 054b6423 has its CatchHandler @ 053b649c */
        *(undefined4 *)(lVar9 + 0x18) = 0;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (unaff_x19[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        FUN_0450f0c8(&stack0x00000030,unaff_x19[3],*(undefined8 *)PTR_DAT_07a024c8);
        puVar2 = PTR_DAT_07a024b8;
        in_stack_00000098 = in_stack_00000038;
        in_stack_00000090 = in_stack_00000030;
        in_stack_000000a8 = in_stack_00000048;
        in_stack_000000a0 = in_stack_00000040;
        while (uVar7 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>__System_Collections_IEnumerator_get_Current
                                 (&stack0x00000090,*(undefined8 *)puVar2), uVar4 = in_stack_000000a8
              , uVar3 = in_stack_000000a0, (uVar7 & 1) != 0) {
          lVar9 = unaff_x19[4];
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          lVar10 = unaff_x19[5];
          lVar8 = *(long *)(in_stack_000000e8 + 0x20);
          if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_0367c9fc();
          }
          FUN_055a8e08(&stack0x00000030,lVar9,uVar3,uVar4,
                       *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x30));
          uVar5 = in_stack_00000040;
          uVar4 = in_stack_00000038;
          uVar3 = in_stack_00000030;
          if (lVar10 == 0) {
LAB_053b665c:
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          lVar9 = *(long *)(in_stack_000000e8 + 0x20);
          if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_0367c9fc();
          }
          lVar8 = *(long *)(lVar10 + 0x10);
          lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x38);
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar8 == 0) goto LAB_053b665c;
          uVar1 = *(uint *)(lVar10 + 0x18);
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            lVar8 = lVar8 + (long)(int)uVar1 * 0x18;
            *(uint *)(lVar10 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar8 + 0x28) = uVar4;
            *(undefined8 *)(lVar8 + 0x20) = uVar3;
            *(undefined8 *)(lVar8 + 0x30) = uVar5;
          }
          else {
            in_stack_00000030 = uVar3;
            in_stack_00000038 = uVar4;
            in_stack_00000040 = uVar5;
            FUN_04473e48(lVar10,&stack0x00000030,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
        }
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
        puVar6 = in_stack_00000060;
        lVar9 = *(long *)(*in_stack_00000068 + 0x20);
        if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_0367c9fc();
        }
        FUN_053b6f28(puVar6,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x58));
        if (in_stack_00000058 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c00();
        }
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


