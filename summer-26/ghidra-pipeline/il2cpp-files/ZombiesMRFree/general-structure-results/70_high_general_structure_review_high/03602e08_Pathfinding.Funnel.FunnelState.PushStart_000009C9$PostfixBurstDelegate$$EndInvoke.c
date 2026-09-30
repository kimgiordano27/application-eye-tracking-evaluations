/*
FUNCTION_NAME: Pathfinding.Funnel.FunnelState.PushStart_000009C9$PostfixBurstDelegate$$EndInvoke
ENTRY_POINT: 03602e08
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_19;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Pathfinding_Funnel_FunnelState_PushStart_000009C9_PostfixBurstDelegate__EndInvoke(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long lVar15;
  undefined8 *unaff_x23;
  
  lVar12 = thunk_FUN_03010710();
  puVar2 = PTR_DAT_06f8cc20;
  if (lVar12 != 0) {
    if (1 < *(uint *)(unaff_x20 + 3)) {
      unaff_x20[5] = unaff_x21;
      thunk_FUN_03048534();
      lVar12 = FUN_05afde1c(*(undefined8 *)puVar2,0);
      if ((lVar12 != 0) &&
         (lVar13 = thunk_FUN_03010710(lVar12,*(undefined8 *)(*unaff_x20 + 0x40)), lVar13 == 0))
      goto LAB_036032e0;
      puVar2 = PTR_DAT_06f6d960;
      if (2 < *(uint *)(unaff_x20 + 3)) {
        unaff_x20[6] = lVar12;
        thunk_FUN_03048534(unaff_x20 + 6,lVar12);
        *(long **)(unaff_x19 + 0xa8) = unaff_x20;
        thunk_FUN_03048534();
        lVar12 = FUN_02fe9340(*(undefined8 *)puVar2,3);
        if (lVar12 == 0) {
LAB_036032ec:
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        uVar1 = *(uint *)(lVar12 + 0x18);
        if (((uVar1 != 0) && (*(undefined4 *)(lVar12 + 0x20) = 0x700, uVar1 != 1)) &&
           (*(undefined4 *)(lVar12 + 0x24) = 0x700, 2 < uVar1)) {
          *(undefined4 *)(lVar12 + 0x28) = 0x700;
          *(long *)(unaff_x19 + 0xb0) = lVar12;
          thunk_FUN_03048534();
          lVar12 = FUN_02fe9340(*unaff_x23,3);
          if (lVar12 == 0) goto LAB_036032ec;
          if (*(int *)(lVar12 + 0x18) != 0) {
            *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)PTR_DAT_06f8cee8;
            thunk_FUN_03048534((undefined8 *)(lVar12 + 0x20));
            if (1 < *(uint *)(lVar12 + 0x18)) {
              *(undefined8 *)(lVar12 + 0x28) = *(undefined8 *)PTR_DAT_06f8cd58;
              thunk_FUN_03048534((undefined8 *)(lVar12 + 0x28));
              if (2 < *(uint *)(lVar12 + 0x18)) {
                *(undefined8 *)(lVar12 + 0x30) = *(undefined8 *)PTR_DAT_06f8cde0;
                thunk_FUN_03048534();
                *(long *)(unaff_x19 + 0xb8) = lVar12;
                thunk_FUN_03048534((long *)(unaff_x19 + 0xb8),lVar12);
                lVar12 = FUN_02fe9340(*(undefined8 *)puVar2,3);
                if (lVar12 == 0) goto LAB_036032ec;
                uVar1 = *(uint *)(lVar12 + 0x18);
                if (((uVar1 != 0) && (*(undefined4 *)(lVar12 + 0x20) = 0x98, uVar1 != 1)) &&
                   (*(undefined4 *)(lVar12 + 0x24) = 0x1b0, puVar4 = PTR_DAT_06f8cbc8,
                   puVar3 = PTR_DAT_06f6ed00, 2 < uVar1)) {
                  *(undefined4 *)(lVar12 + 0x28) = 8;
                  *(long *)(unaff_x19 + 0xc0) = lVar12;
                  thunk_FUN_03048534();
                  lVar12 = FUN_02fe9340(*(undefined8 *)puVar3,3);
                  lVar15 = *(long *)puVar4;
                  lVar13 = *(long *)(lVar15 + 0x38);
                  if (lVar13 == 0) {
                    FUN_02feb320(lVar15);
                    lVar13 = *(long *)(lVar15 + 0x38);
                  }
                  lVar13 = *(long *)(lVar13 + 8);
                  if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
                    lVar13 = FUN_02feb2c4();
                  }
                  if (*(int *)(lVar13 + 0xe0) == 0) {
                    thunk_FUN_02fdcff0();
                  }
                  lVar13 = *(long *)(*(long *)(lVar15 + 0x38) + 8);
                  if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
                    lVar13 = FUN_02feb2c4();
                  }
                  puVar3 = PTR_DAT_06f8cbc0;
                  if (lVar12 == 0) goto LAB_036032ec;
                  if (*(int *)(lVar12 + 0x18) != 0) {
                    *(undefined8 *)(lVar12 + 0x20) = **(undefined8 **)(lVar13 + 0xb8);
                    lVar15 = *(long *)puVar3;
                    lVar13 = *(long *)(lVar15 + 0x38);
                    if (lVar13 == 0) {
                      FUN_02feb320(lVar15);
                      lVar13 = *(long *)(lVar15 + 0x38);
                    }
                    lVar13 = *(long *)(lVar13 + 8);
                    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
                      lVar13 = FUN_02feb2c4();
                    }
                    if (*(int *)(lVar13 + 0xe0) == 0) {
                      thunk_FUN_02fdcff0();
                    }
                    lVar13 = *(long *)(*(long *)(lVar15 + 0x38) + 8);
                    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
                      lVar13 = FUN_02feb2c4();
                    }
                    puVar3 = PTR_DAT_06f8cbd0;
                    if (1 < *(uint *)(lVar12 + 0x18)) {
                      *(undefined8 *)(lVar12 + 0x28) = **(undefined8 **)(lVar13 + 0xb8);
                      lVar15 = *(long *)puVar3;
                      lVar13 = *(long *)(lVar15 + 0x38);
                      if (lVar13 == 0) {
                        FUN_02feb320(lVar15);
                        lVar13 = *(long *)(lVar15 + 0x38);
                      }
                      lVar13 = *(long *)(lVar13 + 8);
                      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
                        lVar13 = FUN_02feb2c4();
                      }
                      if (*(int *)(lVar13 + 0xe0) == 0) {
                        thunk_FUN_02fdcff0();
                      }
                      lVar13 = *(long *)(*(long *)(lVar15 + 0x38) + 8);
                      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
                        lVar13 = FUN_02feb2c4();
                      }
                      if (2 < *(uint *)(lVar12 + 0x18)) {
                        *(undefined8 *)(lVar12 + 0x30) = **(undefined8 **)(lVar13 + 0xb8);
                        *(long *)(unaff_x19 + 200) = lVar12;
                        thunk_FUN_03048534((long *)(unaff_x19 + 200),lVar12);
                        lVar12 = FUN_02fe9340(*(undefined8 *)puVar2,3);
                        if (lVar12 == 0) goto LAB_036032ec;
                        uVar1 = *(uint *)(lVar12 + 0x18);
                        if (((uVar1 != 0) && (*(undefined4 *)(lVar12 + 0x20) = 0, uVar1 != 1)) &&
                           (*(undefined4 *)(lVar12 + 0x24) = 0, puVar11 = PTR_DAT_06f8cba8,
                           puVar10 = PTR_DAT_06f8cb90, puVar9 = PTR_DAT_06f8cb88,
                           puVar8 = PTR_DAT_06f8cb80, puVar7 = PTR_DAT_06f8cb78,
                           puVar6 = PTR_DAT_06f6ef68, puVar5 = PTR_DAT_06f6ec60,
                           puVar4 = PTR_DAT_06f6ec58, puVar3 = PTR_DAT_06f6ec50,
                           puVar2 = PTR_DAT_06f6eac0, 2 < uVar1)) {
                          *(undefined4 *)(lVar12 + 0x28) = 0x20000000;
                          *(long *)(unaff_x19 + 0xd0) = lVar12;
                          thunk_FUN_03048534();
                          uVar14 = thunk_FUN_0301080c(*(undefined8 *)puVar3);
                          FUN_064f985c(uVar14,0,*(undefined8 *)puVar9,0);
                          *(undefined8 *)(unaff_x19 + 0x10) = uVar14;
                          thunk_FUN_03048534((undefined8 *)(unaff_x19 + 0x10),uVar14);
                          uVar14 = thunk_FUN_0301080c(*(undefined8 *)puVar4);
                          FUN_064f9968(uVar14,0,*(undefined8 *)puVar8,0);
                          *(undefined8 *)(unaff_x19 + 0x18) = uVar14;
                          thunk_FUN_03048534((undefined8 *)(unaff_x19 + 0x18),uVar14);
                          uVar14 = thunk_FUN_0301080c(*(undefined8 *)puVar2);
                          FUN_064f9a74(uVar14,0,*(undefined8 *)puVar7,0);
                          *(undefined8 *)(unaff_x19 + 0x20) = uVar14;
                          thunk_FUN_03048534((undefined8 *)(unaff_x19 + 0x20),uVar14);
                          uVar14 = thunk_FUN_0301080c(*(undefined8 *)puVar5);
                          FUN_064ff380(uVar14,0,*(undefined8 *)puVar10,0);
                          *(undefined8 *)(unaff_x19 + 0x30) = uVar14;
                          thunk_FUN_03048534((undefined8 *)(unaff_x19 + 0x30),uVar14);
                          uVar14 = thunk_FUN_0301080c(*(undefined8 *)puVar6);
                          FUN_064ff2b8(uVar14,0,*(undefined8 *)PTR_DAT_06f8cb98,0);
                          *(undefined8 *)(unaff_x19 + 0x28) = uVar14;
                          thunk_FUN_03048534((undefined8 *)(unaff_x19 + 0x28),uVar14);
                          **(long **)(*(long *)puVar11 + 0xb8) = unaff_x19;
                          thunk_FUN_03048534(*(undefined8 *)(*(long *)puVar11 + 0xb8));
                          return;
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
    FUN_02fe94f0();
  }
LAB_036032e0:
  uVar14 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                     ();
                    /* WARNING: Subroutine does not return */
  FUN_02fe93c0(uVar14,0);
}


