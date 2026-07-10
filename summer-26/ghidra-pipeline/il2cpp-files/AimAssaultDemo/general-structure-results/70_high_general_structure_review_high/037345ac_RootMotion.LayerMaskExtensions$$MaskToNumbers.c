/*
FUNCTION_NAME: RootMotion.LayerMaskExtensions$$MaskToNumbers
ENTRY_POINT: 037345ac
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void RootMotion_LayerMaskExtensions__MaskToNumbers(void)

{
  uint uVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int *piVar14;
  long *plVar15;
  undefined8 *puVar16;
  long lVar17;
  long *unaff_x19;
  long *plVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  
  lVar11 = FUN_075fef60();
  if (lVar11 == 0) goto LAB_03734d40;
  iVar8 = FUN_075fe464(lVar11,0);
  bVar7 = *(byte *)unaff_x19[1] & iVar8 != 8;
  *(byte *)unaff_x19[2] = bVar7;
  if (bVar7 == 0) goto LAB_03734bc8;
  lVar11 = FUN_075fef60(0);
  if (lVar11 == 0) goto LAB_03734d40;
  iVar8 = FUN_075fe464(lVar11,0);
  *(bool *)unaff_x19[3] = iVar8 == 0xc;
  puVar4 = 
  System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_TypeInfo;
  if (*(int *)(*(long *)
                System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_TypeInfo
              + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar9 = FUN_07603e4c(0);
  *(undefined4 *)unaff_x19[4] = uVar9;
  uVar12 = FUN_075fef60(0);
  uVar9 = FUN_076117fc(uVar12,0);
  *(undefined4 *)unaff_x19[5] = uVar9;
  lVar11 = **(long **)unaff_x19[6];
  lVar11 = (**(code **)(lVar11 + 0x228))(*(long **)unaff_x19[6],*(undefined8 *)(lVar11 + 0x230));
  *(bool *)unaff_x19[7] = lVar11 != 0;
  if (lVar11 != 0) {
    piVar14 = (int *)unaff_x19[5];
    if (*piVar14 < 0) {
      uVar1 = *(byte *)unaff_x19[3] ^ 1;
      *(uint *)unaff_x19[8] = uVar1;
      *(char *)unaff_x19[9] = (char)uVar1;
      if (uVar1 != 0) {
        lVar11 = **(long **)unaff_x19[6];
        lVar11 = (**(code **)(lVar11 + 0x228))
                           (*(long **)unaff_x19[6],*(undefined8 *)(lVar11 + 0x230));
        if (lVar11 == 0) goto LAB_03734d40;
        uVar12 = FUN_0783a478(lVar11,0);
        *(undefined8 *)unaff_x19[10] = uVar12;
        lVar11 = **(long **)unaff_x19[6];
        uVar12 = (**(code **)(lVar11 + 0x228))
                           (*(long **)unaff_x19[6],*(undefined8 *)(lVar11 + 0x230));
        iVar8 = *(int *)unaff_x19[5];
        if (iVar8 == -1) {
          *(undefined8 *)unaff_x19[0xb] = *(undefined8 *)unaff_x19[6];
          plVar15 = unaff_x19 + 0xc;
        }
        else {
          *(undefined8 *)unaff_x19[0xd] = *(undefined8 *)unaff_x19[6];
          plVar15 = unaff_x19 + 0xe;
        }
        *(undefined8 *)*plVar15 = uVar12;
        puVar5 = Method_System_Collections_Generic_Dictionary<string,_string>__ctor__;
        if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<string,_string>__ctor__ +
                    0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        if (iVar8 == -1) {
          if (DAT_08271c2f == '\0') {
            FUN_0373b518(Method_System_Collections_Generic_Dictionary<string,_string>__ctor__);
            DAT_08271c2f = '\x01';
          }
          lVar11 = *(long *)puVar5;
          if (*(int *)(lVar11 + 0xe4) == 0) {
            thunk_FUN_03798b70();
            lVar11 = *(long *)puVar5;
          }
          *(undefined8 *)unaff_x19[0xf] = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8);
          *(undefined8 *)unaff_x19[0x10] = *(undefined8 *)unaff_x19[0xb];
          plVar15 = unaff_x19 + 0xc;
        }
        else {
          if (DAT_08271c2e == '\0') {
            FUN_0373b518(Method_System_Collections_Generic_Dictionary<string,_string>__ctor__);
            DAT_08271c2e = '\x01';
          }
          lVar11 = *(long *)puVar5;
          if (*(int *)(lVar11 + 0xe4) == 0) {
            thunk_FUN_03798b70();
            lVar11 = *(long *)puVar5;
          }
          *(undefined8 *)unaff_x19[0xf] = **(undefined8 **)(lVar11 + 0xb8);
          *(undefined8 *)unaff_x19[0x10] = *(undefined8 *)unaff_x19[0xd];
          plVar15 = unaff_x19 + 0xe;
        }
        *(undefined8 *)unaff_x19[0x11] = *(undefined8 *)*plVar15;
        if (*(long *)unaff_x19[0x11] == 0) goto LAB_03734d40;
        uVar12 = FUN_07847998(*(long *)unaff_x19[0x11],*(undefined8 *)unaff_x19[0x10],
                              *(undefined8 *)unaff_x19[0xf],0);
        *(undefined8 *)unaff_x19[0x12] = uVar12;
        lVar11 = *(long *)unaff_x19[10];
        lVar17 = *(long *)unaff_x19[6];
        *(bool *)unaff_x19[0x13] = lVar11 == lVar17;
        if (lVar11 == lVar17) {
          lVar17 = *(long *)unaff_x19[0x12];
          *(bool *)unaff_x19[0x14] = lVar17 == lVar11;
          if (lVar17 == lVar11) {
            iVar8 = *(int *)unaff_x19[5];
            *(bool *)unaff_x19[0x15] = iVar8 == -2;
            if (iVar8 == -2) {
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_03798b70();
              }
              FUN_076118dc(0);
            }
            else {
              *(bool *)unaff_x19[0x16] = iVar8 == -1;
              if (iVar8 == -1) {
                if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                  thunk_FUN_03798b70();
                }
                FUN_076118b4(0);
              }
            }
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            uVar9 = FUN_07603e4c(0);
            plVar15 = *(long **)unaff_x19[6];
            *(undefined4 *)((long)plVar15 + 0x53c) = uVar9;
            lVar11 = (**(code **)(*plVar15 + 0x228))(plVar15,*(undefined8 *)(*plVar15 + 0x230));
            uVar9 = FUN_07603e4c(0);
            if (lVar11 == 0) goto LAB_03734d40;
            *(undefined4 *)(lVar11 + 0x3c) = uVar9;
          }
          else {
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            FUN_07603eb4(0,0);
            lVar11 = **(long **)unaff_x19[6];
            lVar11 = (**(code **)(lVar11 + 0x228))
                               (*(long **)unaff_x19[6],*(undefined8 *)(lVar11 + 0x230));
            if (lVar11 == 0) goto LAB_03734d40;
            *(undefined4 *)(lVar11 + 0x3c) = 0;
          }
        }
        goto LAB_03734ba0;
      }
    }
    else {
      *(undefined4 *)unaff_x19[8] = 0;
      *(undefined1 *)unaff_x19[9] = 0;
    }
    if (*piVar14 < 1) {
      *(undefined4 *)unaff_x19[0x17] = 0;
      *(undefined1 *)unaff_x19[0x18] = 0;
    }
    else {
      uVar1 = *(byte *)unaff_x19[3] ^ 1;
      *(uint *)unaff_x19[0x17] = uVar1;
      *(char *)unaff_x19[0x18] = (char)uVar1;
      if (uVar1 != 0) {
        lVar11 = **(long **)unaff_x19[6];
        lVar11 = (**(code **)(lVar11 + 0x228))
                           (*(long **)unaff_x19[6],*(undefined8 *)(lVar11 + 0x230));
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_03798b70(*(long *)puVar4);
        }
        uVar9 = FUN_07603e4c(0);
        if (lVar11 == 0) goto LAB_03734d40;
        *(undefined4 *)(lVar11 + 0x3c) = uVar9;
        uVar9 = FUN_07603e4c(0);
        *(undefined4 *)(*(long *)unaff_x19[6] + 0x53c) = uVar9;
        goto LAB_03734ba0;
      }
    }
    iVar8 = *piVar14;
    *(bool *)unaff_x19[0x19] = iVar8 == 0;
    if (iVar8 == 0) {
      if (*(int *)unaff_x19[0x1a] == 0) {
        plVar15 = *(long **)unaff_x19[6];
        uVar1 = *(byte *)(plVar15 + 0xa8) ^ 1;
        *(uint *)unaff_x19[0x1b] = uVar1;
        *(char *)unaff_x19[0x1c] = (char)uVar1;
        if (uVar1 == 0) goto LAB_037347d4;
        lVar11 = (**(code **)(*plVar15 + 0x228))(plVar15,*(undefined8 *)(*plVar15 + 0x230));
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_03798b70(*(long *)puVar4);
        }
        uVar9 = FUN_07603e4c(0);
        if (lVar11 == 0) goto LAB_03734d40;
        uVar13 = 1;
        uVar12 = *(undefined8 *)unaff_x19[6];
      }
      else {
        *(undefined4 *)unaff_x19[0x1b] = 0;
        *(undefined1 *)unaff_x19[0x1c] = 0;
LAB_037347d4:
        iVar8 = *(int *)unaff_x19[4];
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        iVar10 = FUN_07603e4c(0);
        if (iVar8 == iVar10) {
          iVar8 = *(int *)unaff_x19[0x1a];
          *(uint *)unaff_x19[0x1d] = (uint)(iVar8 == 0);
          *(bool *)unaff_x19[0x1e] = iVar8 == 0;
          if (iVar8 == 0) goto LAB_03734ad8;
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          iVar8 = FUN_07603e4c(0);
          lVar11 = **(long **)unaff_x19[6];
          lVar11 = (**(code **)(lVar11 + 0x228))
                             (*(long **)unaff_x19[6],*(undefined8 *)(lVar11 + 0x230));
          if (lVar11 == 0) goto LAB_03734d40;
          bVar6 = iVar8 == *(int *)(lVar11 + 0x3c);
          *(bool *)unaff_x19[0x1f] = !bVar6;
          if (bVar6) goto LAB_03734ba0;
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          uVar9 = FUN_07603e4c(0);
          plVar15 = *(long **)unaff_x19[6];
          *(undefined4 *)((long)plVar15 + 0x53c) = uVar9;
          lVar11 = (**(code **)(*plVar15 + 0x228))(plVar15,*(undefined8 *)(*plVar15 + 0x230));
          if (lVar11 == 0) goto LAB_03734d40;
          plVar15 = (long *)FUN_0783a478(lVar11,0);
          plVar18 = *(long **)unaff_x19[6];
          *(bool *)unaff_x19[0x20] = plVar15 == plVar18;
          lVar11 = (**(code **)(*plVar18 + 0x228))(plVar18,*(undefined8 *)(*plVar18 + 0x230));
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_03798b70(*(long *)puVar4);
          }
          uVar9 = FUN_07603e4c(0);
          if (lVar11 == 0) goto LAB_03734d40;
          if (plVar15 == plVar18) {
            *(undefined4 *)(lVar11 + 0x3c) = uVar9;
            goto LAB_03734ba0;
          }
          puVar16 = (undefined8 *)unaff_x19[6];
        }
        else {
          *(undefined4 *)unaff_x19[0x1d] = 1;
          *(undefined1 *)unaff_x19[0x1e] = 1;
LAB_03734ad8:
          lVar11 = **(long **)unaff_x19[6];
          lVar11 = (**(code **)(lVar11 + 0x228))
                             (*(long **)unaff_x19[6],*(undefined8 *)(lVar11 + 0x230));
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_03798b70(*(long *)puVar4);
          }
          uVar9 = FUN_07603e4c(0);
          if (lVar11 == 0) {
LAB_03734d40:
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          puVar16 = (undefined8 *)unaff_x19[6];
        }
        uVar12 = *puVar16;
        uVar13 = 0;
      }
      FUN_07848848(lVar11,uVar9,uVar12,uVar13,0);
    }
  }
LAB_03734ba0:
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  bVar7 = FUN_07611904(0);
  *(byte *)(*(long *)unaff_x19[6] + 0x538) = bVar7 & 1;
LAB_03734bc8:
  cVar3 = *(char *)unaff_x19[0x21];
  *(char *)unaff_x19[0x22] = cVar3;
  if (cVar3 != '\0') {
    puVar2 = (undefined4 *)unaff_x19[0x24];
    uVar12 = *(undefined8 *)unaff_x19[0x23];
    uVar21 = *puVar2;
    uVar19 = puVar2[1];
    uVar20 = puVar2[2];
    uVar9 = puVar2[3];
    if (*(int *)(*(long *)PTR_DAT_07d99918 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    FUN_07758e34(uVar21,uVar19,uVar20,uVar9,uVar12,0);
    FUN_07851a58(*(undefined8 *)unaff_x19[6]);
  }
  uVar9 = FUN_07605fe4(0);
  *(undefined4 *)unaff_x19[0x25] = uVar9;
  while( true ) {
    iVar10 = FUN_07605fe4(0);
    iVar8 = *(int *)unaff_x19[0x26];
    *(bool *)unaff_x19[0x27] = iVar8 < iVar10;
    if (iVar10 <= iVar8) break;
    FUN_07605128(0);
  }
  if (*unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7ac();
}


