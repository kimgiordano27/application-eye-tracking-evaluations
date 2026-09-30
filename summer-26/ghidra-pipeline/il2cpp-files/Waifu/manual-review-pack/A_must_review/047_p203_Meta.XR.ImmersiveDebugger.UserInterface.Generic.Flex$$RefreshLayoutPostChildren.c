/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Flex$$RefreshLayoutPostChildren
ENTRY_POINT: 0636a18c
PROGRAM: Waifu-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined1  [16]
Meta_XR_ImmersiveDebugger_UserInterface_Generic_Flex__RefreshLayoutPostChildren(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  long unaff_x19;
  uint unaff_w20;
  undefined4 unaff_w22;
  undefined4 unaff_s8;
  undefined1 auVar6 [16];
  uint uStack0000000000000008;
  undefined4 uStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  undefined4 in_stack_000000a8;
  undefined4 uStack00000000000000b0;
  undefined4 uStack00000000000000b4;
  undefined4 in_stack_000000b8;
  
  uStack0000000000000008 = 0;
  lVar2 = FUN_03398188(param_1,1);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    *(uint *)(lVar2 + 0x20) = unaff_w20 | 1;
    FUN_0636acb0(&stack0x00000008);
    uVar1 = uStack0000000000000008;
    lVar2 = *(long *)(unaff_x19 + 0x18);
    if (lVar2 != 0) {
                    /* try { // try from 0636a1e0 to 0646a1e7 has its CatchHandler @ 0636a818 */
      auVar6 = FUN_042b5310(lVar2,1,*(undefined8 *)
                                     (*(long *)(*(long *)(DAT_083eb478 + 0x20) + 0xc0) + 0x48));
      *(uint *)(*(long *)(lVar2 + 0x10) + (auVar6._0_8_ >> 0x20) * 4) = uVar1;
      lVar2 = *(long *)(unaff_x19 + 0x20);
      if (lVar2 != 0) {
                    /* try { // try from 0636a1f8 to 0646a203 has its CatchHandler @ 0636a820 */
        lVar3 = FUN_0429e128(lVar2,1,*(undefined8 *)
                                      (*(long *)(*(long *)(DAT_083eafd8 + 0x20) + 0xc0) + 0x48));
        *(undefined4 *)(*(long *)(lVar2 + 0x10) + (lVar3 >> 0x20) * 4) = unaff_w22;
        if (*(long *)(unaff_x19 + 0x28) != 0) {
          FUN_042a5640(*(long *)(unaff_x19 + 0x28),DAT_083eb130);
          if (*(long *)(unaff_x19 + 0x30) != 0) {
            FUN_042a80d8(*(long *)(unaff_x19 + 0x30),DAT_083eb1e8);
            if (*(long *)(unaff_x19 + 0x38) != 0) {
                    /* try { // try from 0636a284 to 0646a28b has its CatchHandler @ 0636a814 */
              FUN_042a5640(*(long *)(unaff_x19 + 0x38),DAT_083eb130);
              if (*(long *)(unaff_x19 + 0x40) != 0) {
                    /* try { // try from 0636a2a4 to 0646a2ab has its CatchHandler @ 0636a6fc */
                FUN_042a80d8(*(long *)(unaff_x19 + 0x40),DAT_083eb1e8);
                if (*(long *)(unaff_x19 + 0x48) != 0) {
                    /* try { // try from 0636a2c4 to 0646a2cf has its CatchHandler @ 0636a6f4 */
                  FUN_042a5640(*(long *)(unaff_x19 + 0x48),DAT_083eb130);
                  if (*(long *)(unaff_x19 + 0x50) != 0) {
                    FUN_042a5640(uStack00000000000000b0,uStack00000000000000b4,in_stack_000000b8,
                                 *(long *)(unaff_x19 + 0x50),DAT_083eb130);
                    /* try { // try from 0636a2e4 to 0646a2ef has its CatchHandler @ 0636a6f8 */
                    if (*(long *)(unaff_x19 + 0x58) != 0) {
                      FUN_042a5640(*(long *)(unaff_x19 + 0x58),DAT_083eb130);
                      if (*(long *)(unaff_x19 + 0x60) != 0) {
                    /* try { // try from 0636a304 to 0646a37b has its CatchHandler @ 0636a6e0 */
                        FUN_042a80d8(*(long *)(unaff_x19 + 0x60),DAT_083eb1e8);
                        if (*(long *)(unaff_x19 + 0x68) != 0) {
                          FUN_042a5640(*(long *)(unaff_x19 + 0x68),DAT_083eb130);
                          if (*(long *)(unaff_x19 + 0x70) != 0) {
                            FUN_042a80d8(*(long *)(unaff_x19 + 0x70),DAT_083eb1e8);
                            if (*(long *)(unaff_x19 + 0x78) != 0) {
                              FUN_042a5640(*(long *)(unaff_x19 + 0x78),DAT_083eb130);
                              if (*(long *)(unaff_x19 + 0x80) != 0) {
                                FUN_042a80d8(*(long *)(unaff_x19 + 0x80),DAT_083eb1e8);
                                lVar2 = *(long *)(unaff_x19 + 0x88);
                                if (lVar2 != 0) {
                    /* try { // try from 0636a3a8 to 0646a3b3 has its CatchHandler @ 0636a6ec */
                                  lVar3 = FUN_0429fcc0(lVar2,1,*(undefined8 *)
                                                                (*(long *)(*(long *)(DAT_083eb058 +
                                                                                    0x20) + 0xc0) +
                                                                0x48));
                                  *(undefined4 *)(*(long *)(lVar2 + 0x10) + (lVar3 >> 0x20) * 4) =
                                       unaff_s8;
                    /* try { // try from 0636a3c8 to 0646a43b has its CatchHandler @ 0636a6e4 */
                                  if (*(long *)(unaff_x19 + 0x90) != 0) {
                                    FUN_042a5640(uStack00000000000000a0,uStack00000000000000a4,
                                                 in_stack_000000a8,*(long *)(unaff_x19 + 0x90),
                                                 DAT_083eb130);
                                    lVar2 = *(long *)(unaff_x19 + 0xa8);
                                    if (lVar2 != 0) {
                                      lVar3 = FUN_0429fcc0(lVar2,1,*(undefined8 *)
                                                                    (*(long *)(*(long *)(
                                                  DAT_083eb058 + 0x20) + 0xc0) + 0x48));
                                      *(undefined4 *)(*(long *)(lVar2 + 0x10) + (lVar3 >> 0x20) * 4)
                                           = 0;
                                      lVar2 = *(long *)(unaff_x19 + 0xb0);
                                      if (lVar2 != 0) {
                                        lVar3 = FUN_0429fcc0(lVar2,1,*(undefined8 *)
                                                                      (*(long *)(*(long *)(
                                                  DAT_083eb058 + 0x20) + 0xc0) + 0x48));
                                        *(undefined4 *)
                                         (*(long *)(lVar2 + 0x10) + (lVar3 >> 0x20) * 4) = 0;
                                        lVar2 = *(long *)(unaff_x19 + 0xb8);
                                        if (lVar2 != 0) {
                                          lVar3 = FUN_042a5368(lVar2,1,*(undefined8 *)
                                                                        (*(long *)(*(long *)(
                                                  DAT_083eb130 + 0x20) + 0xc0) + 0x48));
                                          puVar4 = (undefined8 *)
                                                   (*(long *)(lVar2 + 0x10) + (lVar3 >> 0x20) * 0xc)
                                          ;
                                          *puVar4 = 0;
                                          *(undefined4 *)(puVar4 + 1) = 0;
                                          lVar2 = *(long *)(unaff_x19 + 0xc0);
                                          if (lVar2 != 0) {
                                            lVar3 = FUN_0429e128(lVar2,1,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  DAT_083eafd8 + 0x20) + 0xc0) + 0x48));
                                            *(undefined4 *)
                                             (*(long *)(lVar2 + 0x10) + (lVar3 >> 0x20) * 4) = 0;
                                            lVar2 = *(long *)(unaff_x19 + 200);
                    /* try { // try from 0636a4b0 to 0646a4bf has its CatchHandler @ 0636a6cc */
                                            if (lVar2 != 0) {
                                              lVar3 = FUN_042a5368(lVar2,1,*(undefined8 *)
                                                                            (*(long *)(*(long *)(
                                                  DAT_083eb130 + 0x20) + 0xc0) + 0x48));
                                              puVar4 = (undefined8 *)
                                                       (*(long *)(lVar2 + 0x10) +
                                                       (lVar3 >> 0x20) * 0xc);
                                              *puVar4 = 0;
                                              *(undefined4 *)(puVar4 + 1) = 0;
                                              lVar2 = *(long *)(unaff_x19 + 0xd0);
                                              if (lVar2 != 0) {
                                                lVar3 = FUN_042a5368(lVar2,1,*(undefined8 *)
                                                                              (*(long *)(*(long *)(
                                                  DAT_083eb130 + 0x20) + 0xc0) + 0x48));
                                                puVar4 = (undefined8 *)
                                                         (*(long *)(lVar2 + 0x10) +
                                                         (lVar3 >> 0x20) * 0xc);
                                                *puVar4 = 0;
                                                *(undefined4 *)(puVar4 + 1) = 0;
                                                lVar2 = *(long *)(unaff_x19 + 0xd8);
                                                if (lVar2 != 0) {
                                                  lVar3 = FUN_042a5368(lVar2,1,*(undefined8 *)
                                                                                (*(long *)(*(long *)
                                                  (DAT_083eb130 + 0x20) + 0xc0) + 0x48));
                                                  puVar4 = (undefined8 *)
                                                           (*(long *)(lVar2 + 0x10) +
                                                           (lVar3 >> 0x20) * 0xc);
                                                  *puVar4 = 0;
                                                  *(undefined4 *)(puVar4 + 1) = 0;
                                                  if (*(long *)(unaff_x19 + 0xe8) != 0) {
                                                    puVar5 = *(undefined4 **)(DAT_083d4540 + 0xb8);
                                                    FUN_042a80d8(*puVar5,puVar5[1],puVar5[2],
                                                                 puVar5[3],
                                                                 *(long *)(unaff_x19 + 0xe8),
                                                                 DAT_083eb1e8);
                                                    if (*(long *)(unaff_x19 + 0xf0) != 0) {
                                                      puVar5 = *(undefined4 **)(DAT_083d4540 + 0xb8)
                                                      ;
                                                      FUN_042a80d8(*puVar5,puVar5[1],puVar5[2],
                                                                   puVar5[3],
                                                                   *(long *)(unaff_x19 + 0xf0),
                                                                   DAT_083eb1e8);
                                                      lVar2 = *(long *)(unaff_x19 + 0x98);
                                                      if (lVar2 != 0) {
                                                        lVar3 = FUN_0429e128(lVar2,1,*(undefined8 *)
                                                                                      (*(long *)(*(
                                                  long *)(DAT_083eafd8 + 0x20) + 0xc0) + 0x48));
                                                  *(undefined4 *)
                                                   (*(long *)(lVar2 + 0x10) + (lVar3 >> 0x20) * 4) =
                                                       0xffffffff;
                                                  lVar2 = *(long *)(unaff_x19 + 0xa0);
                                                  if (lVar2 != 0) {
                                                    lVar3 = FUN_0429e128(lVar2,1,*(undefined8 *)
                                                                                  (*(long *)(*(long 
                                                  *)(DAT_083eafd8 + 0x20) + 0xc0) + 0x48));
                                                  *(undefined4 *)
                                                   (*(long *)(lVar2 + 0x10) + (lVar3 >> 0x20) * 4) =
                                                       0xffffffff;
                                                  if ((uVar1 >> 4 & 1) != 0) {
                                                    *(int *)(unaff_x19 + 0xfc) =
                                                         *(int *)(unaff_x19 + 0xfc) + 1;
                                                  }
                                                  return auVar6;
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


