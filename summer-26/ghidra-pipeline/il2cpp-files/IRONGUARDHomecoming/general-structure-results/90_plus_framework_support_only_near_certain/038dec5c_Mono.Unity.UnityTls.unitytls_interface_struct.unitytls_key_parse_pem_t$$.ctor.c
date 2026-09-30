/*
FUNCTION_NAME: Mono.Unity.UnityTls.unitytls_interface_struct.unitytls_key_parse_pem_t$$.ctor
ENTRY_POINT: 038dec5c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 100
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x038deeac) */

void Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_key_parse_pem_t___ctor(void)

{
  undefined1 uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  ulong uVar7;
  
  thunk_FUN_01ee6d7c();
  plVar2 = (long *)FUN_029cff28(unaff_w21,*(undefined8 *)StringLiteral_2946);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar3 = FUN_029cfea8(plVar2,*(undefined8 *)StringLiteral_2947);
  if (0 < *(int *)(unaff_x20 + 0x10)) {
    uVar7 = 0;
    do {
      uVar1 = FUN_03409f80();
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(uint *)(lVar3 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      *(undefined1 *)(lVar3 + 0x20 + uVar7) = uVar1;
      uVar7 = uVar7 + 1;
    } while ((long)uVar7 < (long)*(int *)(unaff_x20 + 0x10));
  }
  plVar4 = (long *)(**(code **)(*unaff_x19 + 0x3f8))();
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  (**(code **)(*plVar4 + 0x358))
            (plVar4,lVar3,0,*(undefined4 *)(unaff_x20 + 0x10),*(undefined8 *)(*plVar4 + 0x360));
  if (plVar2 != (long *)0x0) {
    lVar3 = *plVar2;
    uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar7 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar5 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_038dee68;
        }
        uVar7 = uVar7 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01ecb238(plVar2,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_038dee68:
    (*(code *)*puVar5)(plVar2,puVar5[1]);
  }
  return;
}


