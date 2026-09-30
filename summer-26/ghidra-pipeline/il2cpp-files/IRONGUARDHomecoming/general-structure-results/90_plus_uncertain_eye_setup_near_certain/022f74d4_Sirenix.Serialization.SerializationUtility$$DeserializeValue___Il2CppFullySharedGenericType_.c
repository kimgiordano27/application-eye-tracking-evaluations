/*
FUNCTION_NAME: Sirenix.Serialization.SerializationUtility$$DeserializeValue<__Il2CppFullySharedGenericType>
ENTRY_POINT: 022f74d4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 162
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x022f75f4) */

undefined8
Sirenix_Serialization_SerializationUtility__DeserializeValue<__Il2CppFullySharedGenericType>(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar8;
  long *unaff_x23;
  
code_r0x022f74d4:
  puVar2 = (undefined8 *)FUN_01ecb238();
  do {
    uVar3 = (*(code *)*puVar2)();
    uVar4 = (**(code **)(unaff_x21 + 0x18))
                      (*(undefined8 *)(unaff_x21 + 0x40),uVar3,*(undefined8 *)(unaff_x21 + 0x28));
    if ((uVar4 & 1) != 0) {
      iVar8 = 10;
      iVar1 = 10;
      if (unaff_x20 == (long *)0x0) goto LAB_022f7598;
LAB_022f7538:
      iVar8 = iVar1;
      lVar6 = *unaff_x20;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 == 0) goto LAB_022f7570;
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *unaff_x20;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_022f747c;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_022f747c:
    uVar4 = (*(code *)*puVar2)();
    if ((uVar4 & 1) == 0) {
      uVar3 = 0;
      iVar8 = 0xb;
      iVar1 = 0xb;
      if (unaff_x20 != (long *)0x0) goto LAB_022f7538;
      goto LAB_022f7598;
    }
    lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x18);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44(lVar6);
    }
    lVar5 = *unaff_x20;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 == 0) goto code_r0x022f74d4;
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    while (*(long *)(piVar7 + -2) != lVar6) {
      uVar4 = uVar4 - 1;
      piVar7 = piVar7 + 4;
      if (uVar4 == 0) goto code_r0x022f74d4;
    }
    puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar7 = piVar7 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar7 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar2 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_022f758c;
    }
  }
LAB_022f7570:
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_022f758c:
  (*(code *)*puVar2)();
LAB_022f7598:
  if ((iVar8 != 0xb) && (iVar8 != 0)) {
    return uVar3;
  }
  FUN_03971290(0);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910();
}


