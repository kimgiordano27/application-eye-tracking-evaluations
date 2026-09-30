/*
FUNCTION_NAME: Unity.Properties.ContainerPropertyBag<Vector2>$$.ctor
ENTRY_POINT: 053bb980
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x053bbd84) */

void Unity_Properties_ContainerPropertyBag<Vector2>___ctor
               (undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  byte bVar1;
  ushort uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  long *plVar9;
  long unaff_x20;
  undefined8 *__dest;
  undefined8 unaff_x21;
  long lVar10;
  undefined8 uVar11;
  long unaff_x23;
  void *unaff_x25;
  undefined8 uVar12;
  ulong uVar13;
  long unaff_x27;
  long unaff_x29;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  *(undefined8 *)(unaff_x29 + -8) = param_1;
  bVar1 = *(byte *)(unaff_x20 + 0xd63);
  *(undefined8 *)(unaff_x29 + -0x28) = param_6;
  *(undefined8 *)(unaff_x29 + -0x20) = param_5;
  if ((bVar1 & 1) == 0) {
    FUN_03642964(PTR_DAT_07a024b0);
    FUN_03642964(PTR_DAT_07a024b8);
    FUN_03642964(PTR_DAT_07a024c0);
    FUN_03642964(PTR_DAT_07a005d0);
    FUN_03642964(PTR_DAT_07a005d8);
    FUN_03642964(PTR_DAT_07a024c8);
    *(undefined1 *)(unaff_x20 + 0xd63) = 1;
  }
  lVar6 = *(long *)(unaff_x23 + 0x20);
  uVar2 = *(ushort *)(lVar6 + 0x135);
  lVar4 = lVar6;
  if ((uVar2 & 1) == 0) {
    lVar6 = FUN_0367c9fc(lVar6);
    uVar2 = *(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135);
    lVar4 = *(long *)(unaff_x23 + 0x20);
  }
  uVar13 = (ulong)*(uint *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x10) + 0xfc);
  __dest = (undefined8 *)(&stack0x00000000 + -(uVar13 + 0xf & 0x1fffffff0));
  lVar6 = param_2[4];
  *(undefined8 *)(unaff_x29 + -0x68) = 0;
  *(undefined8 *)(unaff_x29 + -0x70) = 0;
  *(undefined8 *)(unaff_x29 + -0x58) = 0;
  *(undefined8 *)(unaff_x29 + -0x60) = 0;
  *(undefined8 *)(unaff_x29 + -0x48) = 0;
  *(undefined8 *)(unaff_x29 + -0x50) = 0;
  *(undefined8 *)(unaff_x29 + -0x38) = 0;
  *(undefined8 *)(unaff_x29 + -0x40) = 0;
  *(undefined8 *)(unaff_x29 + -0x78) = 0;
  *(undefined8 *)(unaff_x29 + -0x80) = 0;
  if ((uVar2 & 1) == 0) {
    lVar4 = FUN_0367c9fc(lVar4);
  }
  if (-1 < *(int *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x10) + 0x28)) {
    unaff_x25 = (void *)(unaff_x29 + -0x20);
  }
  memcpy(__dest,unaff_x25,uVar13);
  if (lVar6 != 0) {
    lVar7 = *(long *)(unaff_x23 + 0x20);
    uVar2 = *(ushort *)(lVar7 + 0x135);
    lVar4 = lVar7;
    if ((uVar2 & 1) == 0) {
      lVar7 = FUN_0367c9fc(lVar7);
      uVar2 = *(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135);
      lVar4 = *(long *)(unaff_x23 + 0x20);
    }
    uVar12 = **(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x18);
    lVar7 = lVar4;
    if ((uVar2 & 1) == 0) {
      lVar4 = FUN_0367c9fc(lVar4);
      uVar2 = *(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135);
      lVar7 = *(long *)(unaff_x23 + 0x20);
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x18);
    if ((uVar2 & 1) == 0) {
      lVar7 = FUN_0367c9fc(lVar7);
    }
    puVar5 = __dest;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) + 0x28)) {
      puVar5 = (undefined8 *)*__dest;
    }
    pcVar8 = *(code **)(lVar4 + 0x10);
    *(undefined8 *)(unaff_x29 + -0xc0) = param_3;
    *(undefined8 *)(unaff_x29 + -0xb8) = unaff_x21;
    *(long *)(unaff_x29 + -0x98) = unaff_x29 + -0xc0;
    *(undefined8 **)(unaff_x29 + -0x90) = puVar5;
    (*pcVar8)(uVar12,lVar4,lVar6,unaff_x29 + -0x98);
    if (param_2[2] != 0) {
      FUN_041e2150(param_2[2],param_3);
      if (param_2[2] != 0) {
        if (*(int *)(param_2[2] + 0x20) == 0) {
          uVar11 = param_2[1];
          uVar12 = *param_2;
          uVar15 = param_2[3];
          uVar14 = param_2[2];
          uVar17 = param_2[5];
          uVar16 = param_2[4];
          lVar4 = param_2[5];
          *(undefined8 *)(unaff_x29 + -0x98) = 0;
          *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0x28;
          *(undefined8 *)(unaff_x29 + -0x58) = uVar11;
          *(undefined8 *)(unaff_x29 + -0x60) = uVar12;
          *(undefined8 *)(unaff_x29 + -0x48) = uVar15;
          *(undefined8 *)(unaff_x29 + -0x50) = uVar14;
          *(undefined8 *)(unaff_x29 + -0x38) = uVar17;
          *(undefined8 *)(unaff_x29 + -0x40) = uVar16;
          *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0x60;
          if (lVar4 == 0) {
            if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            goto LAB_053bbfe8;
          }
          lVar7 = *(long *)(*(long *)(unaff_x29 + -0x28) + 0x20);
          uVar2 = *(ushort *)(lVar7 + 0x135);
          lVar6 = lVar7;
          if ((uVar2 & 1) == 0) {
            lVar6 = FUN_0367c9fc();
            lVar7 = *(long *)(*(long *)(unaff_x29 + -0x28) + 0x20);
            uVar2 = *(ushort *)(lVar7 + 0x135);
          }
          pcVar8 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x28);
          if ((uVar2 & 1) == 0) {
            lVar7 = FUN_0367c9fc();
          }
          (*pcVar8)(lVar4,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x28));
          if (param_2[3] == 0) {
            if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            goto LAB_053bbfe8;
          }
          FUN_0450f0c8(unaff_x29 + -0xc0,param_2[3],*(undefined8 *)PTR_DAT_07a024c8);
          *(undefined8 *)(unaff_x29 + -0x78) = *(undefined8 *)(unaff_x29 + -0xb8);
          *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0xc0);
          *(undefined8 *)(unaff_x29 + -0x68) = *(undefined8 *)(unaff_x29 + -0xa8);
          *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(unaff_x29 + -0xb0);
          puVar3 = PTR_DAT_07a024b8;
          *(undefined8 *)(unaff_x29 + -0xd0) = 0;
          *(long *)(unaff_x29 + -200) = unaff_x29 + -0x80;
          while (uVar13 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>__System_Collections_IEnumerator_get_Current
                                    (unaff_x29 + -0x80,*(undefined8 *)puVar3), (uVar13 & 1) != 0) {
            lVar4 = param_2[4];
            if (lVar4 == 0) {
LAB_053bbecc:
              if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              goto LAB_053bbfe8;
            }
            lVar10 = param_2[5];
            lVar7 = *(long *)(*(long *)(unaff_x29 + -0x28) + 0x20);
            *(undefined8 *)(unaff_x29 + -0xd8) = *(undefined8 *)(unaff_x29 + -0x68);
            *(undefined8 *)(unaff_x29 + -0xe0) = *(undefined8 *)(unaff_x29 + -0x70);
            uVar2 = *(ushort *)(lVar7 + 0x135);
            lVar6 = lVar7;
            if ((uVar2 & 1) == 0) {
              lVar6 = FUN_0367c9fc();
              lVar7 = *(long *)(*(long *)(unaff_x29 + -0x28) + 0x20);
              uVar2 = *(ushort *)(lVar7 + 0x135);
            }
            uVar12 = **(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x30);
            if ((uVar2 & 1) == 0) {
              lVar7 = FUN_0367c9fc();
            }
            lVar6 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x30);
            *(undefined8 *)(unaff_x29 + -0xb8) = *(undefined8 *)(unaff_x29 + -0xd8);
            *(undefined8 *)(unaff_x29 + -0xc0) = *(undefined8 *)(unaff_x29 + -0xe0);
            *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0xc0;
            *(undefined8 **)(unaff_x29 + -0x10) = __dest;
            (**(code **)(lVar6 + 0x10))(uVar12,lVar6,lVar4,unaff_x29 + -0x18,__dest);
            if (lVar10 == 0) goto LAB_053bbecc;
            lVar6 = *(long *)(*(long *)(unaff_x29 + -0x28) + 0x20);
            uVar2 = *(ushort *)(lVar6 + 0x135);
            lVar4 = lVar6;
            if ((uVar2 & 1) == 0) {
              lVar4 = FUN_0367c9fc();
              lVar6 = *(long *)(*(long *)(unaff_x29 + -0x28) + 0x20);
              uVar2 = *(ushort *)(lVar6 + 0x135);
            }
            uVar12 = **(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0x38);
            lVar4 = lVar6;
            if ((uVar2 & 1) == 0) {
              lVar4 = FUN_0367c9fc();
              lVar6 = *(long *)(*(long *)(unaff_x29 + -0x28) + 0x20);
              uVar2 = *(ushort *)(lVar6 + 0x135);
            }
            lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x38);
            if ((uVar2 & 1) == 0) {
              lVar6 = FUN_0367c9fc();
            }
            puVar5 = __dest;
            if (-1 < *(int *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x10) + 0x28)) {
              puVar5 = (undefined8 *)*__dest;
            }
            pcVar8 = *(code **)(lVar4 + 0x10);
            *(undefined8 **)(unaff_x29 + -0xc0) = puVar5;
            (*pcVar8)(uVar12,lVar4,lVar10,unaff_x29 + -0xc0);
          }
          FUN_0587c8cc(*(undefined8 *)(unaff_x29 + -200),*(undefined8 *)PTR_DAT_07a024b0);
          if (*(long *)(unaff_x29 + -0xd0) != 0) {
            if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c00();
            }
            goto LAB_053bbfe8;
          }
          uVar12 = param_2[5];
          lVar4 = *(long *)(*(long *)(unaff_x29 + -0x28) + 0x20);
          if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_0367c9fc();
          }
          lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x50);
          if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_0367c9fc();
          }
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          lVar6 = *(long *)(*(long *)(unaff_x29 + -0x28) + 0x20);
          uVar2 = *(ushort *)(lVar6 + 0x135);
          lVar4 = lVar6;
          if ((uVar2 & 1) == 0) {
            lVar4 = FUN_0367c9fc();
            lVar6 = *(long *)(*(long *)(unaff_x29 + -0x28) + 0x20);
            uVar2 = *(ushort *)(lVar6 + 0x135);
          }
          uVar11 = **(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0x48);
          if ((uVar2 & 1) == 0) {
            lVar6 = FUN_0367c9fc();
          }
          lVar4 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x48);
          *(undefined8 *)(unaff_x29 + -0xd0) = uVar12;
          (**(code **)(lVar4 + 0x10))(uVar11,lVar4,param_2,unaff_x29 + -0xd0,uVar12);
          plVar9 = *(long **)(unaff_x29 + -0x90);
          lVar4 = *(long *)(*plVar9 + 0x20);
          if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_0367c9fc();
          }
          lVar4 = thunk_FUN_03694220(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x58));
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          uVar12 = *(undefined8 *)(unaff_x29 + -0x88);
          lVar4 = *(long *)(*plVar9 + 0x20);
          if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_0367c9fc();
          }
          FUN_053bcaf0(uVar12,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x58));
          if (*(long *)(unaff_x29 + -0x98) != 0) {
            if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c00();
            }
            goto LAB_053bbfe8;
          }
        }
        if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
          return;
        }
        goto LAB_053bbfe8;
      }
    }
  }
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
LAB_053bbfe8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


