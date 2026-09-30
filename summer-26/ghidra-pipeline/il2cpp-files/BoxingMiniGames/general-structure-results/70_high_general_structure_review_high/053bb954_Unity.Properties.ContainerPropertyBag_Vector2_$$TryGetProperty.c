/*
FUNCTION_NAME: Unity.Properties.ContainerPropertyBag<Vector2>$$TryGetProperty
ENTRY_POINT: 053bb954
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x053bbd84) */

void Unity_Properties_ContainerPropertyBag<Vector2>__TryGetProperty
               (undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 ****param_4,
               long param_5)

{
  ushort uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  code *pcVar10;
  undefined8 uVar11;
  ulong uVar12;
  long *aplStack_e0 [2];
  long lStack_d0;
  long **pplStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  long **pplStack_98;
  long *plStack_90;
  undefined8 *puStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  undefined8 ***pppuStack_20;
  long **pplStack_18;
  long *plStack_10;
  long lStack_8;
  
  lVar2 = tpidr_el0;
  lStack_8 = *(long *)(lVar2 + 0x28);
  lStack_28 = param_5;
  pppuStack_20 = param_4;
  if ((DAT_07edbd63 & 1) == 0) {
    FUN_03642964(PTR_DAT_07a024b0);
    FUN_03642964(PTR_DAT_07a024b8);
    FUN_03642964(PTR_DAT_07a024c0);
    FUN_03642964(PTR_DAT_07a005d0);
    FUN_03642964(PTR_DAT_07a005d8);
    FUN_03642964(PTR_DAT_07a024c8);
    DAT_07edbd63 = 1;
  }
  lVar6 = *(long *)(param_5 + 0x20);
  uVar1 = *(ushort *)(lVar6 + 0x135);
  lVar5 = lVar6;
  if ((uVar1 & 1) == 0) {
    lVar6 = FUN_0367c9fc(lVar6);
    uVar1 = *(ushort *)(*(long *)(param_5 + 0x20) + 0x135);
    lVar5 = *(long *)(param_5 + 0x20);
  }
  uVar12 = (ulong)*(uint *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x10) + 0xfc);
  plVar8 = (long *)((long)aplStack_e0 - (uVar12 + 0xf & 0x1fffffff0));
  lVar6 = param_1[4];
  uStack_68 = 0;
  plStack_70 = (long *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_78 = 0;
  plStack_80 = (long *)0x0;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_0367c9fc(lVar5);
  }
  if (-1 < *(int *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x10) + 0x28)) {
    param_4 = &pppuStack_20;
  }
  memcpy(plVar8,param_4,uVar12);
  if (lVar6 != 0) {
    lVar7 = *(long *)(param_5 + 0x20);
    uVar1 = *(ushort *)(lVar7 + 0x135);
    lVar5 = lVar7;
    if ((uVar1 & 1) == 0) {
      lVar7 = FUN_0367c9fc(lVar7);
      uVar1 = *(ushort *)(*(long *)(param_5 + 0x20) + 0x135);
      lVar5 = *(long *)(param_5 + 0x20);
    }
    uVar11 = **(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x18);
    lVar7 = lVar5;
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_0367c9fc(lVar5);
      uVar1 = *(ushort *)(*(long *)(param_5 + 0x20) + 0x135);
      lVar7 = *(long *)(param_5 + 0x20);
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x18);
    if ((uVar1 & 1) == 0) {
      lVar7 = FUN_0367c9fc(lVar7);
    }
    plStack_90 = plVar8;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) + 0x28)) {
      plStack_90 = (long *)*plVar8;
    }
    pplStack_98 = &plStack_c0;
    plStack_c0 = param_2;
    uStack_b8 = param_3;
    (**(code **)(lVar5 + 0x10))(uVar11,lVar5,lVar6,&pplStack_98);
    if (param_1[2] != 0) {
      FUN_041e2150(param_1[2],param_2,param_3,*(undefined8 *)PTR_DAT_07a005d0);
      if (param_1[2] != 0) {
        if (*(int *)(param_1[2] + 0x20) == 0) {
          uStack_58 = param_1[1];
          uStack_60 = *param_1;
          uStack_48 = param_1[3];
          uStack_50 = param_1[2];
          plStack_90 = &lStack_28;
          uStack_38 = param_1[5];
          uStack_40 = param_1[4];
          lVar5 = param_1[5];
          pplStack_98 = (long **)0x0;
          puStack_88 = &uStack_60;
          if (lVar5 == 0) {
            if (*(long *)(lVar2 + 0x28) == lStack_8) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            goto LAB_053bbfe8;
          }
          lVar7 = *(long *)(lStack_28 + 0x20);
          uVar1 = *(ushort *)(lVar7 + 0x135);
          lVar6 = lVar7;
          if ((uVar1 & 1) == 0) {
            lVar6 = FUN_0367c9fc();
            lVar7 = *(long *)(lStack_28 + 0x20);
            uVar1 = *(ushort *)(lVar7 + 0x135);
          }
          pcVar10 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x28);
          if ((uVar1 & 1) == 0) {
            lVar7 = FUN_0367c9fc();
          }
          (*pcVar10)(lVar5,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x28));
          if (param_1[3] == 0) {
            if (*(long *)(lVar2 + 0x28) == lStack_8) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            goto LAB_053bbfe8;
          }
          FUN_0450f0c8(&plStack_c0,param_1[3],*(undefined8 *)PTR_DAT_07a024c8);
          puVar3 = PTR_DAT_07a024b8;
          pplStack_c8 = &plStack_80;
          uStack_78 = uStack_b8;
          plStack_80 = plStack_c0;
          uStack_68 = uStack_a8;
          plStack_70 = plStack_b0;
          lStack_d0 = 0;
          while (uVar12 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>__System_Collections_IEnumerator_get_Current
                                    (&plStack_80,*(undefined8 *)puVar3), (uVar12 & 1) != 0) {
            lVar5 = param_1[4];
            if (lVar5 == 0) {
LAB_053bbecc:
              if (*(long *)(lVar2 + 0x28) == lStack_8) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              goto LAB_053bbfe8;
            }
            lVar9 = param_1[5];
            lVar7 = *(long *)(lStack_28 + 0x20);
            aplStack_e0[1] = (long *)uStack_68;
            aplStack_e0[0] = plStack_70;
            uVar1 = *(ushort *)(lVar7 + 0x135);
            lVar6 = lVar7;
            if ((uVar1 & 1) == 0) {
              lVar6 = FUN_0367c9fc();
              lVar7 = *(long *)(lStack_28 + 0x20);
              uVar1 = *(ushort *)(lVar7 + 0x135);
            }
            uVar11 = **(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x30);
            if ((uVar1 & 1) == 0) {
              lVar7 = FUN_0367c9fc();
            }
            lVar6 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x30);
            uStack_b8 = aplStack_e0[1];
            plStack_c0 = aplStack_e0[0];
            pplStack_18 = &plStack_c0;
            plStack_10 = plVar8;
            (**(code **)(lVar6 + 0x10))(uVar11,lVar6,lVar5,&pplStack_18,plVar8);
            if (lVar9 == 0) goto LAB_053bbecc;
            lVar6 = *(long *)(lStack_28 + 0x20);
            uVar1 = *(ushort *)(lVar6 + 0x135);
            lVar5 = lVar6;
            if ((uVar1 & 1) == 0) {
              lVar5 = FUN_0367c9fc();
              lVar6 = *(long *)(lStack_28 + 0x20);
              uVar1 = *(ushort *)(lVar6 + 0x135);
            }
            uVar11 = **(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x38);
            lVar5 = lVar6;
            if ((uVar1 & 1) == 0) {
              lVar5 = FUN_0367c9fc();
              lVar6 = *(long *)(lStack_28 + 0x20);
              uVar1 = *(ushort *)(lVar6 + 0x135);
            }
            lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x38);
            if ((uVar1 & 1) == 0) {
              lVar6 = FUN_0367c9fc();
            }
            plStack_c0 = plVar8;
            if (-1 < *(int *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x10) + 0x28)) {
              plStack_c0 = (long *)*plVar8;
            }
            (**(code **)(lVar5 + 0x10))(uVar11,lVar5,lVar9,&plStack_c0);
          }
          FUN_0587c8cc(pplStack_c8,*(undefined8 *)PTR_DAT_07a024b0);
          if (lStack_d0 != 0) {
            if (*(long *)(lVar2 + 0x28) == lStack_8) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c00();
            }
            goto LAB_053bbfe8;
          }
          lVar6 = param_1[5];
          lVar5 = *(long *)(lStack_28 + 0x20);
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
          lVar7 = *(long *)(lStack_28 + 0x20);
          uVar1 = *(ushort *)(lVar7 + 0x135);
          lVar5 = lVar7;
          if ((uVar1 & 1) == 0) {
            lVar5 = FUN_0367c9fc();
            lVar7 = *(long *)(lStack_28 + 0x20);
            uVar1 = *(ushort *)(lVar7 + 0x135);
          }
          uVar11 = **(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x48);
          if ((uVar1 & 1) == 0) {
            lVar7 = FUN_0367c9fc();
          }
          lVar5 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x48);
          lStack_d0 = lVar6;
          (**(code **)(lVar5 + 0x10))(uVar11,lVar5,param_1,&lStack_d0,lVar6);
          plVar8 = plStack_90;
          lVar5 = *(long *)(*plStack_90 + 0x20);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_0367c9fc();
          }
          lVar5 = thunk_FUN_03694220(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x58));
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          puVar4 = puStack_88;
          lVar5 = *(long *)(*plVar8 + 0x20);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_0367c9fc();
          }
          FUN_053bcaf0(puVar4,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x58));
          if (pplStack_98 != (long **)0x0) {
            if (*(long *)(lVar2 + 0x28) == lStack_8) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c00();
            }
            goto LAB_053bbfe8;
          }
        }
        if (*(long *)(lVar2 + 0x28) == lStack_8) {
          return;
        }
        goto LAB_053bbfe8;
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == lStack_8) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
LAB_053bbfe8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


