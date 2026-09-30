/*
FUNCTION_NAME: Unity.Properties.ContainerPropertyBag<Vector3>$$.cctor
ENTRY_POINT: 053bbca0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x053bbd84) */

void Unity_Properties_ContainerPropertyBag<Vector3>___cctor
               (code *param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  ushort uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  code *pcVar6;
  long unaff_x19;
  long *plVar7;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 unaff_x24;
  undefined8 *unaff_x25;
  long unaff_x27;
  long unaff_x29;
  
  while ((*param_1)(param_2,param_3,unaff_x22,param_5), unaff_x21 != 0) {
    lVar3 = *(long *)(*(long *)(unaff_x29 + -0x28) + 0x20);
    uVar1 = *(ushort *)(lVar3 + 0x135);
    lVar4 = lVar3;
    if ((uVar1 & 1) == 0) {
      lVar4 = FUN_0367c9fc();
      lVar3 = *(long *)(*(long *)(unaff_x29 + -0x28) + 0x20);
      uVar1 = *(ushort *)(lVar3 + 0x135);
    }
    uVar9 = **(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0x38);
    lVar4 = lVar3;
    if ((uVar1 & 1) == 0) {
      lVar4 = FUN_0367c9fc();
      lVar3 = *(long *)(*(long *)(unaff_x29 + -0x28) + 0x20);
      uVar1 = *(ushort *)(lVar3 + 0x135);
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x38);
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_0367c9fc();
    }
    puVar5 = unaff_x20;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x10) + 0x28)) {
      puVar5 = (undefined8 *)*unaff_x20;
    }
    pcVar6 = *(code **)(lVar4 + 0x10);
    *(undefined8 **)(unaff_x29 + -0xc0) = puVar5;
    (*pcVar6)(uVar9,lVar4,unaff_x21,unaff_x29 + -0xc0);
    uVar2 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>__System_Collections_IEnumerator_get_Current
                      (unaff_x29 + -0x80,*unaff_x25);
    if ((uVar2 & 1) == 0) {
      FUN_0587c8cc(*(undefined8 *)(unaff_x29 + -200),*(undefined8 *)PTR_DAT_07a024b0);
      if (*(long *)(unaff_x29 + -0xd0) == 0) {
        uVar9 = *(undefined8 *)(unaff_x19 + 0x28);
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
        lVar3 = *(long *)(*(long *)(unaff_x29 + -0x28) + 0x20);
        uVar1 = *(ushort *)(lVar3 + 0x135);
        lVar4 = lVar3;
        if ((uVar1 & 1) == 0) {
          lVar4 = FUN_0367c9fc();
          lVar3 = *(long *)(*(long *)(unaff_x29 + -0x28) + 0x20);
          uVar1 = *(ushort *)(lVar3 + 0x135);
        }
        uVar8 = **(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0x48);
        if ((uVar1 & 1) == 0) {
          lVar3 = FUN_0367c9fc();
        }
        lVar4 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
        *(undefined8 *)(unaff_x29 + -0xd0) = uVar9;
        (**(code **)(lVar4 + 0x10))(uVar8);
        plVar7 = *(long **)(unaff_x29 + -0x90);
        lVar4 = *(long *)(*plVar7 + 0x20);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0367c9fc();
        }
        lVar4 = thunk_FUN_03694220(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x58));
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        uVar9 = *(undefined8 *)(unaff_x29 + -0x88);
        lVar4 = *(long *)(*plVar7 + 0x20);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0367c9fc();
        }
        FUN_053bcaf0(uVar9,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x58));
        if (*(long *)(unaff_x29 + -0x98) == 0) {
          if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
            return;
          }
        }
        else if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c00();
        }
      }
      else if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c00();
      }
      goto LAB_053bbfe8;
    }
    unaff_x22 = *(long *)(unaff_x19 + 0x20);
    if (unaff_x22 == 0) break;
    unaff_x21 = *(long *)(unaff_x19 + 0x28);
    lVar3 = *(long *)(*(long *)(unaff_x29 + -0x28) + 0x20);
    *(undefined8 *)(unaff_x29 + -0xd8) = *(undefined8 *)(unaff_x29 + -0x68);
    *(undefined8 *)(unaff_x29 + -0xe0) = *(undefined8 *)(unaff_x29 + -0x70);
    uVar1 = *(ushort *)(lVar3 + 0x135);
    lVar4 = lVar3;
    if ((uVar1 & 1) == 0) {
      lVar4 = FUN_0367c9fc();
      lVar3 = *(long *)(*(long *)(unaff_x29 + -0x28) + 0x20);
      uVar1 = *(ushort *)(lVar3 + 0x135);
    }
    param_2 = **(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0x30);
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_0367c9fc();
    }
    param_3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x30);
    *(undefined8 *)(unaff_x29 + -0xb8) = *(undefined8 *)(unaff_x29 + -0xd8);
    *(undefined8 *)(unaff_x29 + -0xc0) = *(undefined8 *)(unaff_x29 + -0xe0);
    *(undefined8 *)(unaff_x29 + -0x18) = unaff_x24;
    *(undefined8 **)(unaff_x29 + -0x10) = unaff_x20;
    param_1 = *(code **)(param_3 + 0x10);
    param_5 = unaff_x29 + -0x18;
  }
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
LAB_053bbfe8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


