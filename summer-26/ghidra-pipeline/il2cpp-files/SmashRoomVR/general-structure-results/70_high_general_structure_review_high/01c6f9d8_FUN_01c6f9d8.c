/*
FUNCTION_NAME: FUN_01c6f9d8
ENTRY_POINT: 01c6f9d8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_10;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x01c6fcb8) */
/* WARNING: Removing unreachable block (ram,0x01c6fcbc) */
/* WARNING: Removing unreachable block (ram,0x01c6fe44) */

void FUN_01c6f9d8(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  int *piVar10;
  long lVar11;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03fed728 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(StringLiteral_108);
    thunk_FUN_01ad9084(StringLiteral_109);
    thunk_FUN_01ad9084(StringLiteral_110);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__);
    thunk_FUN_01ad9084(StringLiteral_111);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__);
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_A252A93D042C5E2453990C2829A425C6DD749CCDCDF13DB58C11BBC78E8D3CE9
                      );
                    /* try { // try from 01c6fa70 to 01d6fa83 has its CatchHandler @ 01c6fd68 */
    thunk_FUN_01ad9084(StringLiteral_57);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_112);
    thunk_FUN_01ad9084(Method_Oculus_Interaction_PokeInteractor_<>c_<Awake>b__51_0__);
    thunk_FUN_01ad9084(StringLiteral_253);
    thunk_FUN_01ad9084(StringLiteral_254);
    DAT_03fed728 = 1;
  }
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  lVar11 = param_1[5];
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar6 = FUN_0391f968(lVar11,0,0);
  if ((uVar6 & 1) != 0) {
    if (param_1[5] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    local_80 = FUN_03442c98(param_1[5],0);
    FUN_02d98034(&local_98,local_80,*(undefined8 *)StringLiteral_112);
    puVar5 = StringLiteral_111;
    puVar4 = StringLiteral_110;
    puVar3 = StringLiteral_109;
    puVar2 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__;
    puVar1 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__;
    uStack_68 = uStack_90;
    local_70 = local_98;
    local_60 = local_88;
    while( true ) {
      uVar6 = FUN_0273aca4(&local_70,*(undefined8 *)puVar3);
      if ((uVar6 & 1) == 0) break;
      lVar11 = FUN_0273acd0(&local_70,*(undefined8 *)puVar4);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      plVar7 = (long *)FUN_03447408(lVar11,0);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
LAB_01c6fb84:
      lVar11 = *plVar7;
      uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar6 != 0) {
        piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_01c6fbd0;
          }
          uVar6 = uVar6 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar6 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ae9f78(plVar7,*(long *)puVar2,0);
LAB_01c6fbd0:
      uVar6 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      if ((uVar6 & 1) != 0) {
        lVar11 = *plVar7;
        uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar6 != 0) {
          piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar5) {
              puVar8 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_01c6fc2c;
            }
            uVar6 = uVar6 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar6 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ae9f78(plVar7,*(long *)puVar5,0);
LAB_01c6fc2c:
        lVar11 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        if (lVar11 != 0) {
          FUN_034415d8(lVar11,0);
        }
        goto LAB_01c6fb84;
      }
      if (plVar7 != (long *)0x0) {
        lVar11 = *plVar7;
        uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar6 != 0) {
          piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
              puVar8 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_01c6fca0;
            }
            uVar6 = uVar6 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar6 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ae9f78(plVar7,*(long *)puVar1,0);
LAB_01c6fca0:
        (*(code *)*puVar8)(plVar7,puVar8[1]);
      }
    }
    FUN_0273aca0(&local_70,*(undefined8 *)StringLiteral_108);
  }
  puVar2 = StringLiteral_253;
  puVar1 = 
  Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__;
  uVar9 = thunk_FUN_01afaadc(*(undefined8 *)
                              Method_Oculus_Interaction_PokeInteractor_<>c_<Awake>b__51_0__);
  FUN_0392e4c8(uVar9,param_1,*(undefined8 *)puVar2,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  FUN_038ef450(uVar9,0);
  if ((char)param_1[0x25] == '\0') {
    (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
    uVar9 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_57);
    FUN_01c53c6c(uVar9,param_1,*(undefined8 *)StringLiteral_254,0);
    if (*(int *)(*(long *)
                  Field_<PrivateImplementationDetails>_A252A93D042C5E2453990C2829A425C6DD749CCDCDF13DB58C11BBC78E8D3CE9
                + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_01c4fb08(uVar9,0);
  }
  return;
}


