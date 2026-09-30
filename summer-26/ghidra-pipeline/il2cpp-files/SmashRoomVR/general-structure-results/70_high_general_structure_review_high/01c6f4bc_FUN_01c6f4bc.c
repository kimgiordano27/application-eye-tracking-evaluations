/*
FUNCTION_NAME: FUN_01c6f4bc
ENTRY_POINT: 01c6f4bc
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


/* WARNING: Removing unreachable block (ram,0x01c6f79c) */
/* WARNING: Removing unreachable block (ram,0x01c6f7a0) */
/* WARNING: Removing unreachable block (ram,0x01c6f910) */

void FUN_01c6f4bc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
                    /* catch() { ... } // from try @ 01c6f3fc with catch @ 01c6f4e0 */
  if ((DAT_03fed727 & 1) == 0) {
                    /* catch() { ... } // from try @ 01c6f3e0 with catch @ 01c6f4f4 */
    thunk_FUN_01ad9084(
                      Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                      );
                    /* catch() { ... } // from try @ 01c6f398 with catch @ 01c6f4f8
                       catch() { ... } // from try @ 01c6f4ac with catch @ 01c6f4f8 */
                    /* catch() { ... } // from try @ 01c6f320 with catch @ 01c6f4fc
                       catch() { ... } // from try @ 01c6f4a8 with catch @ 01c6f4fc */
    thunk_FUN_01ad9084(StringLiteral_108);
    thunk_FUN_01ad9084(StringLiteral_109);
                    /* catch() { ... } // from try @ 01c6f8dc with catch @ 01c6f514 */
    thunk_FUN_01ad9084(StringLiteral_110);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__);
    thunk_FUN_01ad9084(StringLiteral_111);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__);
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_A252A93D042C5E2453990C2829A425C6DD749CCDCDF13DB58C11BBC78E8D3CE9
                      );
    thunk_FUN_01ad9084(StringLiteral_57);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_112);
    thunk_FUN_01ad9084(Method_Oculus_Interaction_PokeInteractor_<>c_<Awake>b__51_0__);
    thunk_FUN_01ad9084(StringLiteral_253);
    thunk_FUN_01ad9084(StringLiteral_254);
    DAT_03fed727 = 1;
  }
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  uVar11 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar6 = FUN_0391f968(uVar11,0,0);
  if ((uVar6 & 1) != 0) {
    if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    local_80 = FUN_03442c98(*(long *)(param_1 + 0x28),0);
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
      lVar7 = FUN_0273acd0(&local_70,*(undefined8 *)puVar4);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      plVar8 = (long *)FUN_03447408(lVar7,0);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
LAB_01c6f668:
      lVar7 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar6 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
            puVar9 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_01c6f6b4;
          }
          uVar6 = uVar6 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar6 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ae9f78(plVar8,*(long *)puVar2,0);
LAB_01c6f6b4:
      uVar6 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      if ((uVar6 & 1) != 0) {
        lVar7 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar6 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar5) {
              puVar9 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_01c6f710;
            }
            uVar6 = uVar6 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar6 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ae9f78(plVar8,*(long *)puVar5,0);
LAB_01c6f710:
        lVar7 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        if (lVar7 != 0) {
          FUN_03441550(lVar7,0);
        }
        goto LAB_01c6f668;
      }
      if (plVar8 != (long *)0x0) {
        lVar7 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar6 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
              puVar9 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_01c6f784;
            }
            uVar6 = uVar6 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar6 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ae9f78(plVar8,*(long *)puVar1,0);
LAB_01c6f784:
        (*(code *)*puVar9)(plVar8,puVar9[1]);
      }
    }
    FUN_0273aca0(&local_70,*(undefined8 *)StringLiteral_108);
  }
  puVar5 = StringLiteral_254;
  puVar4 = StringLiteral_253;
  puVar3 = 
  Field_<PrivateImplementationDetails>_A252A93D042C5E2453990C2829A425C6DD749CCDCDF13DB58C11BBC78E8D3CE9
  ;
  puVar2 = Method_Oculus_Interaction_PokeInteractor_<>c_<Awake>b__51_0__;
  puVar1 = 
  Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__;
  uVar11 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_57);
  FUN_01c53c6c(uVar11,param_1,*(undefined8 *)puVar5,0);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  FUN_01c4fa2c(uVar11,0);
  uVar11 = thunk_FUN_01afaadc(*(undefined8 *)puVar2);
  FUN_0392e4c8(uVar11,param_1,*(undefined8 *)puVar4,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  FUN_038ef044(uVar11,0);
  return;
}


