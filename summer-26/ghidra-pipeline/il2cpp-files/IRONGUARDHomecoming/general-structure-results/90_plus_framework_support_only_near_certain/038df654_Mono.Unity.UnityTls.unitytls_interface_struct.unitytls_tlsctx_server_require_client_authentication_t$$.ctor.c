/*
FUNCTION_NAME: Mono.Unity.UnityTls.unitytls_interface_struct.unitytls_tlsctx_server_require_client_authentication_t$$.ctor
ENTRY_POINT: 038df654
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_possible_biometrics_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x038df780) */

void Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_tlsctx_server_require_client_authentication_t___ctor
               (undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x20;
  undefined4 unaff_w21;
  
  plVar2 = (long *)FUN_029cff28(unaff_w21,*param_1);
  puVar1 = StringLiteral_2947;
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_029cfea8(plVar2,*(undefined8 *)StringLiteral_2947);
  FUN_03952ce8();
  plVar3 = (long *)(**(code **)(*unaff_x20 + 0x3f8))();
  uVar4 = FUN_029cfea8(plVar2,*(undefined8 *)puVar1);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c(uVar4,uVar4);
  }
  (**(code **)(*plVar3 + 0x358))(plVar3,uVar4,0,unaff_w21,*(undefined8 *)(*plVar3 + 0x360));
  lVar6 = *plVar2;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_038df770;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)
           FUN_01ecb238(plVar2,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_038df770:
  (*(code *)*puVar5)(plVar2,puVar5[1]);
  return;
}


